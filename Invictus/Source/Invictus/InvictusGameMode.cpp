// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InvictusGameMode.h"
#include "InvictusCharacter.h"

AInvictusGameMode::AInvictusGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AInvictusCharacter::StaticClass();	
}
