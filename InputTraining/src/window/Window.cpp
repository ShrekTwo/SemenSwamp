#include "Window.h"


sf::RenderWindow Window::window;
sf::Color Window::color(6, 98, 101);

const std::string Window::winName = "window";


Window::Window(){}

Window::~Window() {}

void Window::Start() {
	tLoad::tInit();
}

void Window::win_init() {

	

	Window::window.create(sf::VideoMode(Window::RES_W, Window::RES_H), Window::winName);
	while (Window::window.isOpen()) {
		sf::Event event;
		EventH::eCheck(event);

		Window::window.clear(color);


		//for(unsigned short int i = 0; i < WASDkeys.size(); ++i)
		Window::window.draw(tLoad::Wkey);
		Window::window.draw(tLoad::Akey);
		Window::window.draw(tLoad::Skey);
		Window::window.draw(tLoad::Dkey);

		Window::window.display();

	}
}

void Window::win_close() {
	Window::window.close();
}