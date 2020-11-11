// Fill out your copyright notice in the Description page of Project Settings.

#include "MMOActor.h"
#include "Engine/Engine.h"

// Sets default values
AMMOActor::AMMOActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMMOActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMMOActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMMOActor::Say(const FString& Word)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 15.0f, FColor::Blue, Word);
	}
}

