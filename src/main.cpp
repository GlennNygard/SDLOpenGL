#include <iostream>
#include "SDLOpenGL.h"

int main(int argc, char *argv[]) {

    SDLOpenGL window("test", 0, 0, 1024, 720);
    window.makeCurrent();
    std::cout<<"working\n";
    window.initializeGL();
    while(true)
    {
        window.renderGL();
        window.swapWindow();
        SDL_Delay(10);
    }

}

void initializeGL()
{
    ngl::NGLInit::instance();
    glClearColor(0.8,0.8,0.8,1.0);
}
void renderGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


}
