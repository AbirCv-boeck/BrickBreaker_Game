// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class BRICKBREAKER_GAME_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
private:
	float dimensionX;
	float dimensionY;
	int nroChoquesLadrillo;

public:	
	// Sets default values for this actor's properties
	ALadrillo();

	void colisionarLadrillo();

	void generarLadrillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
