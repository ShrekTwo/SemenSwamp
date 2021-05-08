#include "Window.h"

sf::RenderWindow Window::window;
sf::Color Window::color(6, 98, 101);

Window::Window(int RES_W = 1720, int RES_H = 1080, std::string winName = "window"){
	Window::RES_H = RES_H;
	Window::RES_W = RES_W;
	Window::winName = winName;
	Window::win_init();
}

Window::~Window() {}

void Window::Start() {

}

void Window::win_init() {
	Window::window.create(sf::VideoMode(Window::RES_W, Window::RES_H), Window::winName);
	while (Window::window.isOpen()) {
		sf::Event event;
		while (Window::window.pollEvent(event)) {
			if (sf::Event::Closed)
				Window::win_close();
		}
		Window::window.clear(color);
		//Window::window.draw();
		Window::window.display();

	}
}

void Window::win_close() {
	Window::window.close();
}