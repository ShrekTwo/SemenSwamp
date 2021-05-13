#ifndef _WINDOW_H_
#define _WINDOW_H_

typedef unsigned int uint;

#include "SFML/Graphics/RenderWindow.hpp"

#include "../event_handler/EventHandler.h"
#include "../texture_loader/TextureLoad.h"
#include "../mechanics/Mechanics.h"

#include <iostream>
#include <string>


class Window {
	public:
		static const uint RES_W = 1080, RES_H = 720;
		static const std::string winName;

		static sf::RenderWindow window;
		static sf::Color color;

		

		Window();
		~Window();
		static void Start();
		static void win_close();
		static void win_init();
};


#endif /*_WINDOW_H_*/

