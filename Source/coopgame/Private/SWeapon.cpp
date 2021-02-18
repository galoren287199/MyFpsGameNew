// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "particles/ParticleSystem.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "DrawDebugHelpers.h"
// Sets default values
ASWeapon::ASWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	SmokeTarget = "Target";
	MuzzleSocketName = "MuzzleSocket";
}

// Called when the game starts or when spawned
void ASWeapon::BeginPlay()
{
	Super::BeginPlay();

}

void ASWeapon::Fire()
{
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		FVector TraceEnd = EyeLocation + EyeRotation.Vector() * 10000;
		FVector ShotDirection = EyeRotation.Vector();
		FVector DestOfSmoke = TraceEnd;
		FCollisionQueryParams params;
		params.AddIgnoredActor(MyOwner);
		params.AddIgnoredActor(this);
		params.bTraceComplex = true;
		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, ECC_Visibility))
		{
			DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Red, true, 0, 0, 3);
			DestOfSmoke = Hit.ImpactPoint;
			AActor* HitActor = Hit.GetActor();
			UGameplayStatics::ApplyPointDamage(HitActor, 20.0, ShotDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);
			if (ImpactEffect)
			{
				/*UE_LOG(LogTemp, Warning, TEXT("Im Here1 ") );*/
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.ImpactPoint,Hit.ImpactNormal.Rotation());
			}
		}
		//DrawDebugSphere(GetWorld(),Hit.Location,5.0f,12,FCollor::Yellow,)
		//DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Black, false , 3.0f, 3.0f, 3.0f);

		if (SmokeBeamEffect)
		{
			FVector SocketLocation= MeshComp->GetSocketLocation(MuzzleSocketName);
			UParticleSystemComponent* smoke= UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SmokeBeamEffect, SocketLocation);
			UE_LOG(LogTemp, Warning, TEXT("Im Here1 ") );
			if (smoke)
			{
				UE_LOG(LogTemp, Warning, TEXT("Im Here2 "));
				smoke->SetVectorParameter(SmokeTarget, DestOfSmoke);
			}
		}
		if (MuzzleEffect)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Im Here2 "));
			UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);

		}
	}
}

// Called every frame
void ASWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
