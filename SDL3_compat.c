
#ifdef WIN32
#include <windows.h>
#endif

#include <stdlib.h>
#include <string.h>
#include "SDL3_compat.h"

#if SDL_MAJOR_VERSION >= 3
SDL_Surface *SDL_CreateRGBSurface(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
	return SDL_CreateSurface(width, height,
		SDL_GetPixelFormatEnumForMasks(depth, Rmask, Gmask, Bmask, Amask));
}

SDL_Surface *SDL_CreateRGBSurfaceWithFormat(Uint32 flags, int width, int height, int depth, Uint32 format)
{
	return SDL_CreateSurface(width, height, format);
}

SDL_Surface *SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
	return SDL_CreateSurfaceFrom(pixels, width, height, pitch,
		SDL_GetPixelFormatEnumForMasks(depth, Rmask, Gmask, Bmask, Amask));
}

SDL_Surface *SDL_CreateRGBSurfaceWithFormatFrom(void *pixels, int width, int height, int depth, int pitch, Uint32 format)
{
	return SDL_CreateSurfaceFrom(pixels, width, height, pitch, format);
}
#endif