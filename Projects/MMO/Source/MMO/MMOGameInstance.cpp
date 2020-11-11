// Fill out your copyright notice in the Description page of Project Settings.

#include "MMOGameInstance.h"
#include "MMOActor.h"
#include "Kismet/GameplayStatics.h"
#include "Editor.h"
#include "LevelEditorViewport.h"


bool UMMOGameInstance::ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor)
{
	bool Ret = Super::ProcessConsoleExec(Cmd, Ar, Executor);
	if (!Ret)
	{
		TArray<AActor*> AllActors;
		AllActors.Empty();

		auto World = GetWorld();
		UGameplayStatics::GetAllActorsOfClass(World, AMMOActor::StaticClass(), AllActors);
		for (AActor* actor : AllActors)
		{
			AMMOActor* mmo_actor = Cast<AMMOActor>(actor);
			if (mmo_actor)
			{
				Ret = mmo_actor->ProcessConsoleExec(Cmd, Ar, Executor);
			}
		}
	}
	return Ret;
}