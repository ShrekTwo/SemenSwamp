#include "EventHandler.h"

bool EventH::WisPressed = false;
bool EventH::AisPressed = false;
bool EventH::SisPressed = false;
bool EventH::DisPressed = false;

bool EventH::WisReleased = true;
bool EventH::AisReleased = true;
bool EventH::SisReleased = true;
bool EventH::DisReleased = true;

int* keylog = new int[]{0,0,0,0};


void EventH::eCheck(sf::Event& event) {
	while(Window::window.pollEvent(event))
		switch (event.type) {

		case sf::Event::KeyPressed:
			EventH::keyEvents(event);
			break;
			//key pressed event
		case sf::Event::KeyReleased:
			EventH::keyEvents(event);
			break;
			//key released event
		case sf::Event::Closed():
			Window::win_close();
			break;
			//window "x" mark click
		default:
			break;
	}
}

void EventH::keyEvents(sf::Event& event) {

	if (event.type == sf::Event::KeyPressed) {

		switch (event.key.code) {

		case sf::Keyboard::Escape:
			Window::win_close();
			break;
			//close window with an escape

		case sf::Keyboard::W:

			if (WisReleased) {
				keylog[0] += 1;
				std::cout << "KEYLOG || W has been pressed:\t" << keylog[0] << std::endl;
			}

			Mechanic::WASDPress(tLoad::Wkey);
			WisPressed = true;
			WisReleased = false;
			break;
		case sf::Keyboard::A:

			if (AisReleased) {
				keylog[1] += 1;
				std::cout << "KEYLOG || A has been pressed:\t" << keylog[1] << std::endl;
			}

			Mechanic::WASDPress(tLoad::Akey);
			AisPressed = true;
			AisReleased = false;
			break;
		case sf::Keyboard::S:

			if (SisReleased) {
				keylog[2] += 1;
				std::cout << "KEYLOG || S has been pressed:\t" << keylog[2] << std::endl;
			}

			Mechanic::WASDPress(tLoad::Skey);
			SisPressed = true;
			SisReleased = false;
			break;
		case sf::Keyboard::D:

			if (DisReleased) {
				keylog[3] += 1;
				std::cout << "KEYLOG || D has been pressed:\t" << keylog[3] << std::endl;
			}

			Mechanic::WASDPress(tLoad::Dkey);
			DisPressed = true;
			DisReleased = false;
			break;
			//WASD pressed block
		default:
			break;
		}
	}

	if (event.type == sf::Event::KeyReleased) {

		switch (event.key.code) {

		case sf::Keyboard::W:
			
			if (WisPressed) 
				std::cout << "KEYLOG || W has been released:\t" << keylog[0] << std::endl;
			
			Mechanic::WASDRelease(tLoad::Wkey);
			WisPressed = false;
			WisReleased = true;
			break;

		case sf::Keyboard::A:

			if (AisPressed) 
				std::cout << "KEYLOG || A has been released:\t" << keylog[1] << std::endl;

			Mechanic::WASDRelease(tLoad::Akey);
			AisPressed = false;
			AisReleased = true;
			break;

		case sf::Keyboard::S:

			if (SisPressed)
				std::cout << "KEYLOG || S has been released:\t" << keylog[2] << std::endl;

			Mechanic::WASDRelease(tLoad::Skey);
			SisPressed = false;
			SisReleased = true;
			break;

		case sf::Keyboard::D:
			
			if (DisPressed)
				std::cout << "KEYLOG || D has been released:\t" << keylog[3] << std::endl;

			Mechanic::WASDRelease(tLoad::Dkey);
			DisPressed = false;
			DisReleased = true;
			break;
			//WASD released block
		default:
			break;
		}

	}
}