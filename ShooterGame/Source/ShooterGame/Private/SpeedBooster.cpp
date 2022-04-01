// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedBooster.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"


// Sets default values
ASpeedBooster::ASpeedBooster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SPEED BOOSTER MESH"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASpeedBooster::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ASpeedBooster::OnOverlapBegin);
}

// Called every frame
void ASpeedBooster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpeedBooster::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	ACharacterMovement* Movement = Cast<ACharacterMovement>(OtherActor);
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Overlap Begin Function Called");
	if (Movement != nullptr) 
	{
		Movement->boostActivated = true;
		Destroy();
	}
}

