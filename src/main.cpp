#include "files.h"
#include "jni_glue.cpp"
#include "start.h"

using namespace std;

int SDL_main(int argc, char *argv[])
{
	start s;

	while(s.get_runtime())
	{
		SDL_RenderClear(s.get_ren());

		SDL_RenderPresent(s.get_ren());

		while(SDL_PollEvent(s.get_event()))
		{
			if(s.get_event()->type == SDL_KEYDOWN)
			{
			    if(s.get_event()->key.keysym.scancode == SDL_SCANCODE_AC_BACK)
			    {
				    s.set_runtime(false);
			    }
			}
		}
	}

	s.destroy();

    return 0;
}

