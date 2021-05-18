#ifndef _MOTION_H_
#define _MOTION_H_

#include "../texture_loader/TextureLoad.h"
#include "../event_handler/EventHandler.h"

#include "SFML/System/Clock.hpp"


class Motion {
	private:
		static void kazuyaStand();
	public:

		static sf::Clock fClock;

		static void kazuyaAnimation();
};



#endif /*_MOTION_H_*/