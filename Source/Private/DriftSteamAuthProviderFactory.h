// Copyright 2016-2021 Directive Games Limited - All Rights Reserved

#pragma once


#include "IDriftAuthProviderFactory.h"


class FDriftSteamAuthProviderFactory : public IDriftAuthProviderFactory
{
    FName GetAuthProviderName() const override;
    TUniquePtr<IDriftAuthProvider> GetAuthProvider() override;
};
