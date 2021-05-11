#ifndef _EVENTHANDLER_H_
#define _EVENTHANDLER_H_

#include "SFML/Window/Event.hpp"
#include "../window/Window.h"

class EventH {
	public:
		static sf::Event event;

		static bool WisPressed;
		static bool AisPressed;
		static bool SisPressed;
		static bool DisPressed;

		static bool WisReleased;
		static bool AisReleased;
		static bool SisReleased;
		static bool DisReleased;

		static void eCheck();
		static sf::Keyboard::Key keyEvents();
};


#endif /*_EVENTHANDLER_H_*/