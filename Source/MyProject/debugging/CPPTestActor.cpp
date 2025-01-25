// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPTestActor.h"

// Sets default values
ACPPTestActor::ACPPTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPPTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

