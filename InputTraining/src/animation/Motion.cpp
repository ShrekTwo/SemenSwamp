#include "Motion.h"

sf::Clock Motion::fClock;
const float frame = 0.0166f;

void Motion::kazuyaAnimation() {
	kazuyaStand();
}

void Motion::kazuyaStand() {
	if (fClock.getElapsedTime().asSeconds() > frame)
		tLoad::kazSrcRect.left == 630 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;
	
	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
	fClock.restart();
}