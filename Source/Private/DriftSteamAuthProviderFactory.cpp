// Copyright 2016-2021 Directive Games Limited - All Rights Reserved

#include "DriftSteamAuthProviderFactory.h"
#include "DriftSteamAuthProvider.h"


FName FDriftSteamAuthProviderFactory::GetAuthProviderName() const
{
	return FName(TEXT("Steam"));
}


TUniquePtr<IDriftAuthProvider> FDriftSteamAuthProviderFactory::GetAuthProvider()
{
	return MakeUnique<FDriftSteamAuthProvider>();
}
