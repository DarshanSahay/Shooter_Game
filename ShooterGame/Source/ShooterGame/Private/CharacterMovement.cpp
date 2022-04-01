// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovement.h"
#include "Engine/Engine.h"

// Sets default values
ACharacterMovement::ACharacterMovement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 100.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->InitCapsuleSize(55.5, 96.f);
	Capsule->SetCollisionProfileName(TEXT("Trigger"));
	Capsule->SetupAttachment(RootComponent);

	FollowCamera->bUsePawnControlRotation = false;
}


// Called when the game starts or when spawned
void ACharacterMovement::BeginPlay()
{
	Super::BeginPlay();
	Capsule->OnComponentBeginOverlap.AddDynamic(this, &ACharacterMovement::OnOverlapBegin);
	boostTime = 0.0f;
	boostActivated = false;
	hasKey = false;
}

// Called every frame
void ACharacterMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(boostActivated)
	{
		boostTime = 10.0f;
		ChangeSpeed(1000.0f);
		boostActivated = false;
	}
	if (boostTime != 0.0f) 
	{
		boostTime -= DeltaTime;
		if (boostTime <= 0.0f)
		{
			ChangeSpeed(600.0f);
			boostTime = 0.0f;
		}
	}
}

// Called to bind functionality to input
void ACharacterMovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterMovement::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterMovement::MoveRight);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACharacterMovement::Fire);

}

void ACharacterMovement::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ACharacterMovement::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}

void ACharacterMovement::Fire()
{
		// Attempt to fire a projectile.
		if (ProjectileClass)
		{
			// Get the camera transform.
			FVector CameraLocation;
			FRotator CameraRotation;
			GetActorEyesViewPoint(CameraLocation, CameraRotation);

			// Set MuzzleOffset to spawn projectiles slightly in front of the camera.
			MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

			// Transform MuzzleOffset from camera space to world space.
			FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

			FRotator MuzzleRotation = CameraRotation;

			UWorld* World = GetWorld();
			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();

				// Spawn the projectile at the muzzle.
				AProjectile* Projectile = World->SpawnActor<AProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Projectile)
				{
					// Set the projectile's initial trajectory.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Projectile->FireInDirection(LaunchDirection);
				}
			}
		}
}

void ACharacterMovement::ChangeSpeed(float speed)
{
	GetCharacterMovement()->MaxWalkSpeed = speed;
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Changed Speed");
}
void ACharacterMovement::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != this) && OtherActor && OtherComp) 
	{

	}
}


