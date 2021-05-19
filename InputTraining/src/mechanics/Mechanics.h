#ifndef _MECHANICS_H_
#define _MECHANICS_H_

#include "../window/Window.h"

#include "SFML/System/Clock.hpp"

class Mechanic {
	public:

		static int fpsi;

		static sf::Color colorGrey;

		static int state;

		static void WASDPress(sf::Sprite& sprite);
		static void WASDRelease(sf::Sprite& sprite);

		static void fpsCounter(sf::RenderWindow& window);
		
		static int charState();
};

#endif /*_MECHANICS_H_*/

