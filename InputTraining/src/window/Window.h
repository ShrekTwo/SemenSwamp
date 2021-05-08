#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window/Event.hpp"

#include <string>


class Window {
	public:

		static sf::RenderWindow window;
		static sf::Color color;

		static int RES_W, RES_H;
		static std::string winName;

		Window(int RES_W, int RES_H, std::string winName);
		~Window();
		void Start();
		static void win_close();
		static void win_init();
};


#endif //!_WINDOW_H_

