#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"


UCLASS()
class BRICKBREAKER_GAME_API APaddle : public APawn
{
	GENERATED_BODY()


private:
	float dimensionX;
	float dimensionY;
	int velocidad;

public:
	// Sets default values for this pawn's properties
	APaddle();

	void moverPaddle();

	void aumentarVelocidad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
