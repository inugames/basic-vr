// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BasicVRFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TESTSVR_API UBasicVRFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Camera, meta = (WorldContext = WorldContextObject))
	static void SetCameraMovableWhenPaused(UObject* WorldContextObject, bool bMovable);

};
