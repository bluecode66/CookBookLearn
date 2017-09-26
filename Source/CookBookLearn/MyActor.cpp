// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Warning,TEXT("Some Warning Message!"));
	int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable";
	UE_LOG(LogTemp,Warning,TEXT("Text,%d %f %s"),intVar,floatVar,*fstringVar);
	FString name = "Tim";
	int32 mana = 450;
	FString stringVar = FString::Printf(TEXT("Name = %s Mana = %d"),*name,mana);
	FString names = "Tim";
	int32 manab = 450;
	TArray<FStringFormatArg>args;
	args.Add(FStringFormatArg(names));
	args.Add(FStringFormatArg(manab));
	FString string = FString::Format(TEXT("Name = {0} Mana = {1}"),args);
	UE_LOG(LogTemp,Warning,TEXT("Your string: %s",*string));
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

