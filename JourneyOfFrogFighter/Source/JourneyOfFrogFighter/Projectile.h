// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperFlipbookActor.h"
#include"PaperSpriteComponent.h"
#include"PaperFlipbookComponent.h"
#include "Projectile.generated.h"

/**
 * 
 */
UCLASS()
class JOURNEYOFFROGFIGHTER_API AProjectile : public APaperFlipbookActor
{
	GENERATED_BODY()


	private:
		UFUNCTION() 
		void OnHorizontal(float val);

		UFUNCTION() 
		void OnVertical(float val); 

	private: 
		UPROPERTY(VisibleDefaultsOnly)
			UFloatingPawnMovement *m_movementComponent;
		
		// The  ship sprite component.
		UPROPERTY(VisibleDefaultsOnly) 
		UPaperSpriteComponent *m_bubbleVisual; 
		
	
};
