#include "SentryVariantHelper.h"

USentryVariantHelper::USentryVariantHelper() {
}

bool USentryVariantHelper::TryGetString(const FSentryVariant& Variant, FString& Value) {
    return false;
}

bool USentryVariantHelper::TryGetMap(const FSentryVariant& Variant, TMap<FString, FSentryVariant>& Value) {
    return false;
}

bool USentryVariantHelper::TryGetInteger(const FSentryVariant& Variant, int32& Value) {
    return false;
}

bool USentryVariantHelper::TryGetFloat(const FSentryVariant& Variant, float& Value) {
    return false;
}

bool USentryVariantHelper::TryGetBool(const FSentryVariant& Variant, bool& Value) {
    return false;
}

bool USentryVariantHelper::TryGetArray(const FSentryVariant& Variant, TArray<FSentryVariant>& Value) {
    return false;
}

FSentryVariant USentryVariantHelper::MakeSentryVariantFromString(const FString& Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::MakeSentryVariantFromMap(const TMap<FString, FSentryVariant>& Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::MakeSentryVariantFromInteger(int32 Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::MakeSentryVariantFromFloat(float Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::MakeSentryVariantFromBool(bool Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::MakeSentryVariantFromArray(const TArray<FSentryVariant>& Value) {
    return FSentryVariant{};
}

ESentryVariantType USentryVariantHelper::GetType(const FSentryVariant& Variant) {
    return ESentryVariantType::Empty;
}

FString USentryVariantHelper::GetString(const FSentryVariant& Variant) {
    return TEXT("");
}

TMap<FString, FSentryVariant> USentryVariantHelper::GetMap(const FSentryVariant& Variant) {
    return TMap<FString, FSentryVariant>();
}

int32 USentryVariantHelper::GetInteger(const FSentryVariant& Variant) {
    return 0;
}

float USentryVariantHelper::GetFloat(const FSentryVariant& Variant) {
    return 0.0f;
}

bool USentryVariantHelper::GetBool(const FSentryVariant& Variant) {
    return false;
}

TArray<FSentryVariant> USentryVariantHelper::GetArray(const FSentryVariant& Variant) {
    return TArray<FSentryVariant>();
}

FSentryVariant USentryVariantHelper::Conv_StringToFSentryVariant(const FString& Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::Conv_MapToFSentryVariant(const TMap<FString, FSentryVariant>& Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::Conv_IntToFSentryVariant(int32 Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::Conv_FloatToFSentryVariant(float Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::Conv_BoolToFSentryVariant(bool Value) {
    return FSentryVariant{};
}

FSentryVariant USentryVariantHelper::Conv_ArrayToFSentryVariant(const TArray<FSentryVariant>& Value) {
    return FSentryVariant{};
}


