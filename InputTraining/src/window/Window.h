#ifndef _WINDOW_H_
#define _WINDOW_H_

typedef unsigned int uint;

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window/Event.hpp"

#include <string>


class Window {
	public:
		static const uint RES_W = 1720, RES_H = 1080;
		static const std::string winName;

		static sf::RenderWindow window;
		static sf::Color color;

		

		Window();
		~Window();
		void Start();
		static void win_close();
		static void win_init();
};


#endif /*_WINDOW_H_*/

