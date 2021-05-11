#include "EventHandler.h"

bool EventH::WisPressed = false;
bool EventH::AisPressed = false;
bool EventH::SisPressed = false;
bool EventH::DisPressed = false;

bool EventH::WisReleased = true;
bool EventH::WisReleased = true;
bool EventH::WisReleased = true;
bool EventH::WisReleased = true;

void EventH::eCheck() {
	switch (EventH::event.type) {
		case sf::Event::KeyPressed:
			EventH::keyEvents();
			break;
		default:
			break;
	}
}

sf::Keyboard::Key EventH::keyEvents() {
	switch (EventH::event.key.code) {
		case sf::Keyboard::Escape:
			return sf::Keyboard::Escape;

	}
}