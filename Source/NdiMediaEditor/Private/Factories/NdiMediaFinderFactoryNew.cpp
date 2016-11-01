// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "NdiMediaEditorPCH.h"
#include "NdiMediaFinderFactoryNew.h"


/* UNdiMediaFinderFactoryNew structors
 *****************************************************************************/

UNdiMediaFinderFactoryNew::UNdiMediaFinderFactoryNew(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UNdiMediaFinder::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}


/* UFactory overrides
 *****************************************************************************/

UObject* UNdiMediaFinderFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UNdiMediaFinder>(InParent, InClass, InName, Flags);
}


uint32 UNdiMediaFinderFactoryNew::GetMenuCategories() const
{
	return EAssetTypeCategories::Media;
}


bool UNdiMediaFinderFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}