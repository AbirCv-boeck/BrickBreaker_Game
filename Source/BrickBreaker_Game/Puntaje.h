// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puntaje.generated.h"

UCLASS()
class BRICKBREAKER_GAME_API APuntaje : public AActor
{
	GENERATED_BODY()
	
private:
	int puntajeInicial;
	float dimensionX;
	float dimensionY;

public:	
	// Sets default values for this actor's properties
	APuntaje();

	void aumentarPuntaje();

	void disminuirPuntaje();

	void puntajeExtra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
