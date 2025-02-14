// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveRect.generated.h"

UENUM(BlueprintType)
enum class EN_MoveType : uint8
{
	MoveRight UMETA(Display = "Right"),
	MoveUp UMETA(Display = "Up"),
	MoveLeft UMETA(Display = "Left"),
	MoveDown UMETA(Display = "Down"),
};

UCLASS()
class UNREALCODE_API AMoveRect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveRect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	USceneComponent* Scene;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UStaticMeshComponent* StaticMesh;

	float LocX;

	float LocZ;

	EN_MoveType MoveType;
};
