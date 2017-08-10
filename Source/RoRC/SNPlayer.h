// All rights reserved to SN-Coding

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SNPlayer.generated.h"

UCLASS()
class RORC_API ASNPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASNPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Inputs
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	//handles moving forward/backward
	UFUNCTION()
		void MoveForward(float Val);
	//handles strafing
	UFUNCTION()
		void MoveRight(float Val);
	//sets jump flag when key is pressed
	UFUNCTION()
		void OnStartJump();
	//clears jump flag when key is released
	UFUNCTION()
		void OnStopJump();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
