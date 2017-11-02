#ifndef START_H_INCLUDED
#define START_H_INCLUDED

#include "files.h"

class start
{
    public:
        start()
        {
        	runtime = true;

            SDL_Init(SDL_INIT_EVERYTHING);
            IMG_Init(IMG_INIT_PNG);
            Mix_Init(MIX_INIT_MP3);
            TTF_Init();
            SDLNet_Init();

            win = NULL;
            ren = NULL;

            if(SDL_GetCurrentDisplayMode(0, &mode) != 0)LOG("*** ERROR! ***");

            win = SDL_CreateWindow("game",0,0,mode.w,mode.h,SDL_WINDOW_FULLSCREEN);

            ren = SDL_CreateRenderer(win,-1,SDL_RENDERER_ACCELERATED);
            if(ren == NULL)
                LOG("Oops! Please, check your video driver.");

            SCREEN_W = get_w();
            SCREEN_H = get_h();
        }

        int get_w(){return mode.w;}
        int get_h(){return mode.h;}

        SDL_Renderer* get_ren(){return ren;}
        SDL_Event* get_event(){return &event;}
        bool get_runtime(){return runtime;}
        void set_runtime(bool new_val){runtime = new_val;}

        void destroy()
        {
            SDL_DestroyRenderer(ren);
            SDL_DestroyWindow(win);

            SDL_Quit();
            IMG_Quit();
            Mix_Quit();
            TTF_Quit();
            SDLNet_Quit();
        }

    private:
        SDL_DisplayMode mode;
        SDL_Window* win;
        SDL_Renderer* ren;
        bool runtime;
        SDL_Event event;

};

#endif // START_H_INCLUDED
