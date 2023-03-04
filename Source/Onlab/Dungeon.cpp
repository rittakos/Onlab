// Fill out your copyright notice in the Description page of Project Settings.

#include "Dungeon.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ADungeon::ADungeon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADungeon::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, ("Dungeon."));
	
	SpawnParts();
}

// Called every frame
void ADungeon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ADungeon::SpawnParts()
{
	FActorSpawnParameters SpawnInfo;

	FRotator myRot(0, 0, 0);
	FVector myLoc(0, 0, 0);

	//AFloor* floor = GetWorld()->SpawnActor<AFloor>(AFloor::StaticClass(), myLoc, myRot, SpawnInfo);

	FTransform SpawnTransform(myRot, myLoc);
	AFloor* floor = Cast<AFloor>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AFloor::StaticClass(), SpawnTransform));
	if (floor != nullptr)
	{
		floor->Init();

		UGameplayStatics::FinishSpawningActor(floor, SpawnTransform);
	}

}

