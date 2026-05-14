#include "SentrySamplingContext.h"

USentrySamplingContext::USentrySamplingContext() {
}

USentryTransactionContext* USentrySamplingContext::GetTransactionContext() const {
    return NULL;
}

TMap<FString, FSentryVariant> USentrySamplingContext::GetCustomSamplingContext() const {
    return TMap<FString, FSentryVariant>();
}


