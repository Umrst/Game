#include <stdio.h>
#include <SDL.h>
using namespace std;

int main(int argc, char** argv)
{
    if (SDL_Init(SDL_INIT_EVERYTHING))
    {
        SDL_Log("启动失败%s", SDL_GetError());
    }
    SDL_Window* win = SDL_CreateWindow(
        "WINDOW", 0, 0, 500, 500, SDL_WINDOW_MAXIMIZED
    );
    SDL_Delay(3000);
    return 0;
}