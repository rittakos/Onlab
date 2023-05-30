// Fill out your copyright notice in the Description page of Project Settings.

#include "Dungeon.h"
#include "DungeonReader.h"
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
	DungeonReader reader(Path);
	DungeonData data = reader.getDungeonData();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, (FString::FromInt(data.GetSeed())));

	UWorld* World = GetWorld();
	const FTransform SpawnLocAndRotation;
	
	for (const LayoutData& floor : data.GetFloors())
	{
		AFloor* newFloor = World->SpawnActorDeferred<AFloor>(AFloor::StaticClass(), SpawnLocAndRotation);
		UMaterialInterface* material = FloorMaterial;
		int color = FMath::RandRange(0, 1000) % 4;
		if (color == 0)
			material = BlueMaterial;
		else if (color == 1)
			material = GreenMaterial;
		else if (color == 2)
			material = RedMaterial;
		newFloor->Init(floor, material);
		newFloor->FinishSpawning(SpawnLocAndRotation);
	}


	for (const WallData& wall : data.GetWalls())
	{
		AWall* newWall = World->SpawnActorDeferred<AWall>(AWall::StaticClass(), SpawnLocAndRotation);
		newWall->Init(wall, WallMaterial);
		newWall->FinishSpawning(SpawnLocAndRotation);
	}
}

