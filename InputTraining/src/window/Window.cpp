#include "Window.h"

sf::RenderWindow Window::window;
sf::Color Window::color(6, 98, 101);

const std::string Window::winName = "window";


Window::Window(){}

Window::~Window() {}

void Window::Start() {

}

void Window::win_init() {


	Window::window.create(sf::VideoMode(Window::RES_W, Window::RES_H), Window::winName);
	while (Window::window.isOpen()) {
		sf::Event event;
		while (Window::window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
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