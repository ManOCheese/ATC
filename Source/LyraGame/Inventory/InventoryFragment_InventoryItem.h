// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "Styling/SlateBrush.h"

#include "InventoryFragment_InventoryItem.generated.h"

UCLASS()
class UInventoryFragment_InventoryItem : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

protected:

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	FSlateBrush Brush;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	FText DisplayNameWhenEquipped;
};
