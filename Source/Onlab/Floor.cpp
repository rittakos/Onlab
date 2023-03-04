// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor.h"

// Sets default values
AFloor::AFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FVector P0(-50, 0.0, 50);

	

	Vertices.Add(P0);
	Vertices.Add(P0 + FVector(0.0, 0.0, -100));
	Vertices.Add(P0 + FVector(100, 0.0, 0.0));
	Vertices.Add(P0 + FVector(100, 0.0, -100));

	

	//Triangle1
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);

	//Triangle2
	Triangles.Add(2);
	Triangles.Add(1);
	Triangles.Add(3);

	/*Vertices.Add(FVector(-50, 0, 50));
	Vertices.Add(FVector(-50, 0, -50));
	Vertices.Add(FVector(50, 0, 50));
	Vertices.Add(FVector(50, 0, -50));*/

	procMesh = CreateDefaultSubobject<UProceduralMesh>(TEXT("ProceduralMesh"));
	procMesh->AddVertices(Vertices, Triangles);
	procMesh->Create();
	RootComponent = procMesh->ProcMesh;

}

void AFloor::Init()
{
	FVector P0(0.0, 0.0, 0.0);



	Vertices.Add(P0);
	Vertices.Add(P0 + FVector(0.0, 0.0, -100));
	Vertices.Add(P0 + FVector(100, 0.0, 0.0));
	Vertices.Add(P0 + FVector(100, 0.0, -100));

	Vertices.Add(P0 + FVector(0.0, 10.0, 0.0));
	Vertices.Add(P0 + FVector(0.0, 10.0, -100));
	Vertices.Add(P0 + FVector(100, 10.0, 0.0));
	Vertices.Add(P0 + FVector(100, 10.0, -100));



	//Triangle1
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);

	//Triangle2
	Triangles.Add(2);
	Triangles.Add(1);
	Triangles.Add(3);

	Triangles.Add(7);
	Triangles.Add(5);
	Triangles.Add(6);


	Triangles.Add(6);
	Triangles.Add(5);
	Triangles.Add(4);

	/*Vertices.Add(FVector(-50, 0, 50));
	Vertices.Add(FVector(-50, 0, -50));
	Vertices.Add(FVector(50, 0, 50));
	Vertices.Add(FVector(50, 0, -50));*/
}

// Called when the game starts or when spawned
void AFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


