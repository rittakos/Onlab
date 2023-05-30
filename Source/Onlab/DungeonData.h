// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <optional>

//#include "Wall.h"
//#include "Floor.h"

/**
 * 
 */

struct HoleData
{
	FVector		leftBottomCoord;
	FVector2D	size;
};

struct LayoutData
{
	TArray<FVector>	corners;
	TArray<int32>	triangles;
	std::vector<HoleData>	holes;
};

struct WallData
{
	TArray<FVector>	corners;
	TArray<int32>	triangles;
	std::optional<HoleData> door;
};


class ONLAB_API DungeonData
{
private:
	std::vector<WallData> walls;
	std::vector<LayoutData> floors;

	unsigned int seed;
	int version;

public:
	DungeonData();
	DungeonData(const FString& filePath);
	~DungeonData();

	std::vector<LayoutData> GetFloors() const { return floors; }
	std::vector<WallData>	GetWalls()	const { return walls; }
	unsigned int			GetSeed()	const { return seed; }

	/*friend std::vector<AWall> CreateWalls(DungeonData);
	friend std::vector<AFloor*> CreateFloors(DungeonData);*/

	friend class DungeonReader;
};

//std::vector<AWall> CreateWalls(DungeonData);
//std::vector<AFloor*> CreateFloors(DungeonData);
//AFloor* CreateFloor(LayoutData);
