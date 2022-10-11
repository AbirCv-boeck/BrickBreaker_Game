// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ball.generated.h"

UCLASS()
class BRICKBREAKER_GAME_API ABall : public ACharacter
{
	GENERATED_BODY()

private:
	float dimensionX;
	float dimensionY;
	int velocidad;
	float posicionInicial;

public:
	// Sets default values for this character's properties
	ABall();

	void moverBall();

	void colisionarBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
