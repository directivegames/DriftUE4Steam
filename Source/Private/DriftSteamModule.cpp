// Copyright 2016-2021 Directive Games Limited - All Rights Reserved

#include "DriftSteamModule.h"

#include "Interfaces/IPluginManager.h"
#include "Features/IModularFeatures.h"


IMPLEMENT_MODULE(FDriftSteamModule, DriftSteam)


FDriftSteamModule::FDriftSteamModule()
{
}


void FDriftSteamModule::StartupModule()
{
    FModuleManager::Get().LoadModuleChecked("Drift");
    IModularFeatures::Get().RegisterModularFeature(TEXT("DriftAuthProviderFactory"), &providerFactory);
}


void FDriftSteamModule::ShutdownModule()
{
    IModularFeatures::Get().UnregisterModularFeature(TEXT("DriftAuthProviderFactory"), &providerFactory);
}
