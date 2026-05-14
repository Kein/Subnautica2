#include "SN2PinnedRecipesViewModel.h"

USN2PinnedRecipesViewModel::USN2PinnedRecipesViewModel() {
    this->MaxNumEntries = 0;
    this->PinnedRecipesComponent = NULL;
}

void USN2PinnedRecipesViewModel::OnRecipeUnpinned(UUWEPrimaryDataAssetBase* Recipe) {
}

void USN2PinnedRecipesViewModel::OnRecipePinned(UUWEPrimaryDataAssetBase* Recipe) {
}

void USN2PinnedRecipesViewModel::OnLocalClientReady() {
}


