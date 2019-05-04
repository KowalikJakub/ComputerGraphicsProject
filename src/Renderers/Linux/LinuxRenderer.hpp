#ifndef GK_LINUXRENDERER
#define GK_LINUXRENDERER

#include <SDL2/SDL.h>
#include "Renderer.hpp"

class LinuxRenderer : public Renderer
{
private:
    SDL_Renderer *renderer;

public:
    LinuxRenderer();
    ~LinuxRenderer();

    void SetDrawColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
    void SetPixel(int32_t x, int32_t y);

    void Clear();
    void Render();
};

#endif