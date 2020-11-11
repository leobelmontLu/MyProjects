// Fill out your copyright notice in the Description page of Project Settings.

#include "MMOCharacter.h"
#include "Engine/Engine.h"

// Sets default values
AMMOCharacter::AMMOCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMMOCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMMOCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMMOCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMMOCharacter::ExecCommond(const FString& _Command)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 30.0f, FColor::Red, _Command);
	}
}

