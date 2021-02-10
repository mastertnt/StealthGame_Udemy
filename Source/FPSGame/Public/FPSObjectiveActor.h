// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/// <summary>
	/// The visual representation as mesh.
	/// </summary>
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* VisualMesh;

	/// <summary>
	/// The sphere which manages collision.
	/// </summary>
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* CollisionSphere;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};