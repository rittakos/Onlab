// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMesh.h"

#include "Floor.h"
#include "Wall.h"
#include "DungeonData.h"

#include "Dungeon.generated.h"

UCLASS()
class ONLAB_API ADungeon : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UMaterialInterface* WallMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* FloorMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* RedMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* GreenMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* BlueMaterial;

	UPROPERTY(EditAnywhere)
	bool wallsVisible;

	UPROPERTY(EditAnywhere)
	float wallWidth;

	UPROPERTY(EditAnywhere)
	FString Path = TEXT("C:/Users/akosr/OneDrive/Desktop/dungeon.dg");

private:
	DungeonData dungeonData;

	TArray<AFloor*> floors;
	TArray<AWall*> walls;
	
private:
	void SpawnParts();

public:	
	// Sets default values for this actor's properties
	ADungeon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
