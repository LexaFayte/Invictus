// Fill out your copyright notice in the Description page of Project Settings.

#include "shoot.h"

// Sets default values for this component's properties
Ushoot::Ushoot()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Ushoot::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Ushoot::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (fire)
	{
		UE_LOG(LogTemp, Warning, TEXT("BANG!"));
		fire = false;
	}
	
}

void Ushoot::fireProjectile()
{
	fire = true;
}

