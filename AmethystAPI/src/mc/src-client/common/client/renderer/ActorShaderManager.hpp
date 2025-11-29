/// @symbolgeneration
#pragma once
#include <amethyst/Imports.hpp>

#include <mc/src-deps/minecraftrenderer/renderer/MaterialPtr.hpp>
#include <mc/src-deps/core/math/Color.hpp>

class Actor;
class ScreenContext;
class BlockSource;
class BlockPos;
class LightTexture;
class Vec2;
class Vec4;

// That vptr is actually from BaseActorRenderer, 
// but since we are defining the destructor as default 
// and the _getOverlayColor is the same as in BaseActorRenderer, 
// we can just put it here
/// @vptr {0x4CEF830}
class ActorShaderManager {
public:
    /* this + 8  */ mce::MaterialPtr mEntityMaterial;
    /* this + 24 */ mce::MaterialPtr mTransparentEntityMaterial;
    /* this + 40 */ mce::MaterialPtr mStaticMaterial;

    ActorShaderManager() = default;

    virtual ~ActorShaderManager() = default;

	mce::MaterialPtr& getEntityMaterial();
	mce::MaterialPtr& getTransparentEntityMaterial();
	mce::MaterialPtr& getStaticEntityMaterial();
	
    /// @vidx {1}
    MC virtual mce::Color _getOverlayColor(Actor& entity, float alpha) const;

	/// @sig {4C 8B DC 48 83 EC ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 80 BC 24}
	MC static void setupShaderParameters(ScreenContext& screenContext, BlockSource& source, const BlockPos& pos, float a, bool ignoreLighting, LightTexture& lightTexture, const Vec2& uvScale, const Vec4& uvAnim);
};