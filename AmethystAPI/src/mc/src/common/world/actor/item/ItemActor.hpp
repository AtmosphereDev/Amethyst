#pragma once
#include <mc/src/common/world/actor/Actor.hpp>
#include <mc/src/common/world/item/ItemStack.hpp>

class ItemActor : public Actor {
public:
	ItemStack mItem;
	int32_t mAge;
	int32_t mPickupDelay;
	int32_t mThrowTime;
	float mBobOffs;
	int32_t mHealth;
	int32_t mLifeTime;
	bool mIsInItemFrame;
	bool mIsFromFishing;
};

static_assert(offsetof(ItemActor, mItem) == 1096);