// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralMesh.h"

// Sets default values for this component's properties
UProceduralMesh::UProceduralMesh()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	ProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>("ProcMesh");
}

void UProceduralMesh::AddVertices(TArray<FVector> vertices, TArray<int32> triangles)
{
	check(!created);

	Vertices = vertices;
	Triangles = triangles;

	/*Vertices.Add(FVector(-50, 0, 50));
	Vertices.Add(FVector(-50, 0, -50));
	Vertices.Add(FVector(50, 0, 50));
	Vertices.Add(FVector(50, 0, -50));*/

	/*Vertices.Add(P0);
	Vertices.Add(P1);
	Vertices.Add(P2);
	Vertices.Add(P3);*/

	UVs.Add(FVector2D(0, 0));
	UVs.Add(FVector2D(0, 1));
	UVs.Add(FVector2D(1, 0));
	UVs.Add(FVector2D(1, 1));

	////Triangle1
	//Triangles.Add(0);
	//Triangles.Add(1);
	//Triangles.Add(2);

	////Triangle2
	//Triangles.Add(2);
	//Triangles.Add(1);
	//Triangles.Add(3);
}

void UProceduralMesh::Create()
{
	check(!created);
	ProcMesh->CreateMeshSection(0, Vertices, Triangles, TArray<FVector>(), UVs, TArray<FColor>(), TArray<FProcMeshTangent>(), true);
	
	created = true;
}


// Called when the game starts
void UProceduralMesh::BeginPlay()
{
	Super::BeginPlay();

	/*Vertices.Add(FVector(-500, 0, 500));
	Vertices.Add(FVector(-500, 0, -500));
	Vertices.Add(FVector(500, 0, 500));
	Vertices.Add(FVector(500, 0, -500));*/

	/*Vertices.Add(FVector(-10, 0, 10));
	Vertices.Add(FVector(-10, 0, -10));
	Vertices.Add(FVector(10, 0, 10));
	Vertices.Add(FVector(10, 0, -10));*/

	/*UVs.Add(FVector2D(0, 0));
	UVs.Add(FVector2D(0, 1));
	UVs.Add(FVector2D(1, 0));
	UVs.Add(FVector2D(1, 1));*/

	//Triangle1
	/*Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);*/

	//Triangle2
	/*Triangles.Add(2);
	Triangles.Add(1);
	Triangles.Add(3);*/

	/*Triangles.Add(0);
	Triangles.Add(4);
	Triangles.Add(6);

	Triangles.Add(0);
	Triangles.Add(6);
	Triangles.Add(2);

	Triangles.Add(6);
	Triangles.Add(7);
	Triangles.Add(2);

	Triangles.Add(7);
	Triangles.Add(3);
	Triangles.Add(2);

	Triangles.Add(7);
	Triangles.Add(5);
	Triangles.Add(3);

	Triangles.Add(5);
	Triangles.Add(1);
	Triangles.Add(3);

	Triangles.Add(5);
	Triangles.Add(4);
	Triangles.Add(1);

	Triangles.Add(4);
	Triangles.Add(0);
	Triangles.Add(1);*/

	//ProcMesh->CreateMeshSection(0, Vertices, Triangles, TArray<FVector>(), UVs, TArray<FColor>(), TArray<FProcMeshTangent>(), true);
	/*if (Material)
	{
		ProcMesh->SetMaterial(0, Material);
		UE_LOG(LogTemp, Warning, TEXT("Hello"));
	}*/
	
}


void UProceduralMesh::SetMaterial(UMaterialInterface* Material)
{
	check(created);
	if (Material && created)
	{
		ProcMesh->SetMaterial(0, Material);
	}
}

// Called every frame
void UProceduralMesh::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

