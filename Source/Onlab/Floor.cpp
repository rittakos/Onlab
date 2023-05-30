// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor.h"
#include "DungeonData.h"

// Sets default values
AFloor::AFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//FVector P0(-50, 0.0, 50);

	//

	//Vertices.Add(P0);
	//Vertices.Add(P0 + FVector(0.0, 0.0, -100));
	//Vertices.Add(P0 + FVector(100, 0.0, 0.0));
	//Vertices.Add(P0 + FVector(100, 0.0, -100));

	//

	////Triangle1
	//Triangles.Add(2);
	//Triangles.Add(1);
	//Triangles.Add(0);

	////Triangle2
	//Triangles.Add(3);
	//Triangles.Add(1);
	//Triangles.Add(2);

	/*Vertices.Add(FVector(-50, 0, 50));
	Vertices.Add(FVector(-50, 0, -50));
	Vertices.Add(FVector(50, 0, 50));
	Vertices.Add(FVector(50, 0, -50));*/

	
	procMesh = CreateDefaultSubobject<UProceduralMesh>(TEXT("ProceduralMesh"));
	RootComponent = procMesh->ProcMesh;
}

void AFloor::Init(const LayoutData& floorData, UMaterialInterface* Material)
{
	//FString file = TEXT("C:/Users/akosr/OneDrive/Desktop/test.dg");

	//// We will use this FileManager to deal with the file.
	//IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();

	//FString FileContent;
	//// Always first check if the file that you want to manipulate exist.
	//if (FileManager.FileExists(*file))
	//{
	//	// We use the LoadFileToString to load the file into
	//	FFileHelper::LoadFileToString(FileContent, *file, FFileHelper::EHashOptions::None);
	//}


	//TArray<FString> Out;
	//FileContent.ParseIntoArray(Out, TEXT("\n"), true);

	//TArray<FString> l1;
	//Out[0].ParseIntoArray(l1, TEXT(" "), true);

	//float f = FCString::Atof(ToCStr(l1[0]));

	/*FVector P0(0.0, 0.0, 0.0);



	Vertices.Add(P0);
	Vertices.Add(P0 + FVector(0.0, -100, 0.0));
	Vertices.Add(P0 + FVector(100, 0.0, 0.0));
	Vertices.Add(P0 + FVector(100, -100, 0.0));*/

	Vertices = floorData.corners;
	Triangles = floorData.triangles;

	////Triangle1
	//Triangles.Add(0);
	//Triangles.Add(1);
	//Triangles.Add(2);

	////Triangle2
	//Triangles.Add(0);
	//Triangles.Add(2);
	//Triangles.Add(3);

	//procMesh = CreateDefaultSubobject<UProceduralMesh>(TEXT("ProceduralMesh"));
	procMesh->AddVertices(Vertices, Triangles);
	procMesh->Create();
	procMesh->SetMaterial(Material);
	//RootComponent = procMesh->ProcMesh;
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


