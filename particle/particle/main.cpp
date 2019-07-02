#include <iostream>
#include <string>
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "Screen.h"
#include "Swarm.h"
using namespace std;

int main()
{
    srand(time(NULL));

    Screen screen;

    if (screen.init() == false)
    {
        cout << "Error initializing SDL." << endl;
    }

    Swarm swarm;

    while (true)
    {
        // update particles
        // draw particles
        int elapsed = SDL_GetTicks();

        swarm.update(elapsed);

        unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;
        unsigned char red = (1 + sin(elapsed * 0.0002)) * 128;
        unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

        const Particle * const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; i++)
        {
            Particle particle = pParticles[i];
            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + (Screen::SCREEN_HEIGHT / 2);

            screen.setPixel(x, y, red, green, blue);
        }

        screen.boxBlur();

        // Draw the screen
        screen.update();
        // check for messages/events
        if (screen.processEvents() == false)
        {
            break;
        }
    }

    screen.close();

    return 0;
}