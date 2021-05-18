#include "Window.h"


sf::RenderWindow Window::window;
sf::Color Window::color(6, 98, 101);

sf::Clock Window::clock;

const std::string Window::winName = "window";


Window::Window(){}

Window::~Window() {}

void Window::Start() {
	tLoad::tInit();
	window.setFramerateLimit(60);
}

void Window::win_init() {

	

	Window::window.create(sf::VideoMode(Window::RES_W, Window::RES_H), Window::winName);

	Window::Start();

	while (Window::window.isOpen()) {


		sf::Event event;

		Mechanic::fpsCounter(window);

		EventH::eCheck(event);

		Window::window.clear(color);

		Motion::kazuyaAnimation();
		clock.restart();

		//for(unsigned short int i = 0; i < WASDkeys.size(); ++i)
		Window::window.draw(tLoad::Wkey);
		Window::window.draw(tLoad::Akey);
		Window::window.draw(tLoad::Skey);
		Window::window.draw(tLoad::Dkey);
		Window::window.draw(tLoad::Kaz);

		Window::window.display();

	}
}

void Window::win_close() {
	Window::window.close();
}