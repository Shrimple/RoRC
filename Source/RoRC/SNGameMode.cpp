// Fill out your copyright notice in the Description page of Project Settings.

#include "SNGameMode.h"
#include "Engine.h"
#include "SNPlayer.h"


ASNGameMode::ASNGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	//Set Default pawn to SNPlayer Class
	DefaultPawnClass = ASNPlayer::StaticClass();
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnObject(TEXT("Pawn'/Game/Blueprints/BP_SNPlayer.BP_SNPlayer_C'"));
	if (PlayerPawnObject.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnObject.Class;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Mech loaded"));
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Couldn't load Mech"));
}


//Main Event when game is starting
void ASNGameMode::BeginPlay()
{
	Super::BeginPlay();

	StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
	}
}



