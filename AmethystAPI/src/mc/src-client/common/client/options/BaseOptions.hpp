/// @symbols
#pragma once
#include <amethyst/Imports.hpp>

class BaseOptions {
public:
	/** @sig {40 53 48 83 EC ? 80 B9 ? ? ? ? ? 8B DA} */
    MC float getSensitivity(unsigned int inputMode);
};