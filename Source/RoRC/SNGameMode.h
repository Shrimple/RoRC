// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SNGameMode.generated.h"

/**
*
*/
UCLASS()
class RORC_API ASNGameMode : public AGameModeBase
{
	GENERATED_BODY()

		//Construtor to set SNPlayer as the default PAWN
		ASNGameMode(const FObjectInitializer& ObjectInitializer);  // Our added constructor

	virtual void BeginPlay() override;

};