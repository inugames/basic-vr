// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicVRFunctionLibrary.h"
#include "Engine/Engine.h"

void UBasicVRFunctionLibrary::SetCameraMovableWhenPaused(UObject* WorldContextObject, bool bMovable)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		World->bIsCameraMoveableWhenPaused = bMovable;
	}
}
