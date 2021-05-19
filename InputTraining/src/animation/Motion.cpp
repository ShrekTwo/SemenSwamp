#include "Motion.h"

sf::Clock Motion::fClock;
const float frame = 0.016f;

void Motion::kazuyaAnimation() {
	switch (Mechanic::charState()) {
	case 3:
		kazuyaCrouch();
		break;
	default:
		kazuyaStand();
		break;
	}
}

void Motion::kazuyaStand() {
	tLoad::kazSrcRect.top = 0;

	if (fClock.getElapsedTime().asSeconds() > frame)
		tLoad::kazSrcRect.left == 3430 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;

	
	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
	fClock.restart();
}

void Motion::kazuyaCrouch() {
	tLoad::kazSrcRect.top = 95;
	tLoad::kazSrcRect.left >= 2170 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;

	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
	fClock.restart();
}