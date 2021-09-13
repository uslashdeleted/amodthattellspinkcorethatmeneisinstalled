#include "pinkcore/shared/RequirementAPI.hpp"

#include "modloader/shared/modloader.hpp"

#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/hooking.hpp"

static ModInfo modInfo;

// hi person reading the source code, how are you doing today

extern "C" void setup(ModInfo& info) {
    info.id = "amodthattellspinkcorethatmeneisinstalled";
    info.version = VERSION;
    modInfo = info;
}
// registers ME/NE as installed	, idk which one is correct so ill do both of those haha yes.
void start() {
PinkCore::RequirementAPI::RegisterInstalled("MappingExtensions");
PinkCore::RequirementAPI::RegisterInstalled("Mapping Extensions");
PinkCore::RequirementAPI::RegisterInstalled("NoodleExtensions");
PinkCore::RequirementAPI::RegisterInstalled("Noodle Extensions");
}
extern "C" void load() {
	
	start();
	
}