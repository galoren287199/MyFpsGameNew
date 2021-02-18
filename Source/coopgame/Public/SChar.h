// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "SWeapon.h"
#include "SChar.generated.h"
class UCameraComponent;
UCLASS()
class COOPGAME_API ASChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	/*ASChar();*/

protected:

	// Sets default values
	ASChar();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float Value);
	void MoveRight(float Value);
	void BeginCrouch();
	void EndCrouch();

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)//cause need to edit
		TSubclassOf<ASWeapon> my_weapon; 
	virtual void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UCameraComponent* GetCameraComp();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};