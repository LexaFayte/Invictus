// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "shoot.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVICTUS_API Ushoot : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ushoot();

	void fireProjectile(float x_dir);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// The animation to play while running around
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* BulletFB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlueprintObj)
		class UBlueprint* bullet;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;	
	bool fire = false;

private:
	float shotDir = 1.0f;

};
