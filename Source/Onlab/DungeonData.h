// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <optional>

#include "Wall.h"
#include "Floor.h"

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
	std::vector<FVector>	corners;
	std::vector<HoleData>	holes;
};

struct WallData
{
	std::optional<HoleData> door;
};


class ONLAB_API DungeonData
{
private:
	std::vector<WallData> walls;
	std::vector<LayoutData> floors;

public:
	DungeonData();
	DungeonData(std::string path);
	~DungeonData();


	friend std::vector<AWall> CreateWalls(DungeonData);
	friend std::vector<AFloor*> CreateFloors(DungeonData);
};

std::vector<AWall> CreateWalls(DungeonData);
std::vector<AFloor*> CreateFloors(DungeonData);
AFloor* CreateFloor(LayoutData);
