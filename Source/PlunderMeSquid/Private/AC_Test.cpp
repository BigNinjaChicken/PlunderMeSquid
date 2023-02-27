// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Test.h"

// Sets default values for this component's properties
UAC_Test::UAC_Test()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_Test::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_Test::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UAC_Test::MyFunction(int32 MyIntParameter, FString MyStringParameter)
{
	return 1;
}

void UAC_Test::FixNav()
{
	UWorld* World = GetWorld();

	// get a reference to the navigation system
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(World);

	// get a reference to the actor or component that you want to update
	AActor* MyActor = GetOwner(); // or use any other method to get a reference to the actor/component

	// update the NavMesh for the actor/component
	NavSys->UpdateComponentInNavOctree(MyActor);
}
