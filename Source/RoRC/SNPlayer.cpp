// All rights reserved to SN-Coding

#include "SNPlayer.h"
#include "Engine.h"


// Sets default values
ASNPlayer::ASNPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASNPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("We are using SNPlayer!"));
	}

}

// Called every frame
void ASNPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASNPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// set up gameplay key bindings
	InputComponent->BindAxis("MoveForward", this, &ASNPlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ASNPlayer::MoveRight);
	InputComponent->BindAxis("Turn", this, &ASNPlayer::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &ASNPlayer::AddControllerPitchInput);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ASNPlayer::OnStartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &ASNPlayer::OnStopJump);

}

//Handle W + S
void ASNPlayer::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		FRotator Rotation = Controller->GetControlRotation();
		// Limit pitch when walking or falling
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		// add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

//Handle A + D
void ASNPlayer::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

//Handle SpaceBar
void ASNPlayer::OnStartJump()
{
	bPressedJump = true;
}
void ASNPlayer::OnStopJump()
{
	bPressedJump = false;
}