// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "interactable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class Uinteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */

class InteractionCharacter;

class MYPROJECT_API Iinteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void OnintectionRangeEntered(InteractionCharacter* character) = 0;
	virtual void OnintectionRangeExit(InteractionCharacter* character) = 0;
	virtual void Onteracted() = 0;
	virtual void HandleInteraction(InteractionCharacter* character) = 0;
	virtual bool CanBeInteracted() const = 0;

};
