#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionErrorCode.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionErrorCode : uint8 {
    SessionErrorUnknown,
    SessionRequestValidationError,
    SessionDestructionFailed,
    SessionCreationFailed,
    SessionSearchFailed,
    SessionEndFailed,
    SessionJoinFailed,
    SessionJoinFailedMismatchingVersion,
    SessionJoinFailedSessionFull,
    SessionUpdateFailed,
};

