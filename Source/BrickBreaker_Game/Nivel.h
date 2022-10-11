// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.generated.h"
#include <iostream>

using namespace std;

UCLASS()
class BRICKBREAKER_GAME_API ANivel : public AActor
{
	GENERATED_BODY()
	
private:
	int nroNivel;
	string dificultadNivel;

public:	
	// Sets default values for this actor's properties
	ANivel();

	void escogerNivel();
	void siguienteNivel();
	void anteriorNivel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
