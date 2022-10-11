// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Potenciador.generated.h"
#include <iostream>

using namespace std;

UCLASS()
class BRICKBREAKER_GAME_API APotenciador : public ACharacter
{
	GENERATED_BODY()

private:
	float dimensionX;
	float dimensionY;
	float posicionBehindLadrillo;
	string tipopotenciador;
	int nivelPotencia;
	int velocidadPotenciador;
	int tiempoPotenciadorActivo;

public:
	// Sets default values for this character's properties
	APotenciador();

	void movimiento();

	void aumentarTiempoPotenciador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
