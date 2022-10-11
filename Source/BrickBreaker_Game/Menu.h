// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Menu.generated.h"
#include <iostream>

using namespace std;

UCLASS()
class BRICKBREAKER_GAME_API AMenu : public AActor
{
	GENERATED_BODY()

private:
	float dimensionX;
	float dimensionY;
	string tittleGame;
	string opcion;

public:	
	// Sets default values for this actor's properties
	AMenu();

	void IniciarGame();

	void opciones();

	void escogerOpcion();

	void salir();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
