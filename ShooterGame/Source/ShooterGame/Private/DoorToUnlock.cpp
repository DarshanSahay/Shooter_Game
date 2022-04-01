// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorToUnlock.h"
#include "Components/BoxComponent.h"

// Sets default values
ADoorToUnlock::ADoorToUnlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DOOR MESH"));
	Mesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADoorToUnlock::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADoorToUnlock::OnOverlapBegin);
}

// Called every frame
void ADoorToUnlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADoorToUnlock::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacterMovement* Movement = Cast<ACharacterMovement>(OtherActor);
	
	if (Movement != nullptr)
	{
		if (Movement->hasKey == true) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Door Unlocked");
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Needs A Key");
		}
		
	}
}

