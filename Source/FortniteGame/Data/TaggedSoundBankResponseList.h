// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Data/FortTaggedSoundCue.h"
#include "TaggedSoundBankResponseList.generated.h"

USTRUCT()
struct FTaggedSoundBankResponseList
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TArray<FFortTaggedSoundCue> CueList;
};
