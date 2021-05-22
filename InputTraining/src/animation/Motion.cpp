#include "Motion.h"

//sf::Clock Motion::fClock;
const float frame = 0.15f;
sf::Clock fClock;

void Motion::kazuyaAnimation() {
	switch (Mechanic::charState()) {

		/*
		4 - go forward
		3 - crouch
		2 - block
		1 - standing
		*/
	case 4:
		kazuyaGoForward();
		break;
	case 3:
		kazuyaCrouch();
		break;
	case 2:
		kazuyaGoBack();
		break;
	default:
		kazuyaStand();
		break;
	}
}

void Motion::kazuyaStand() {
	tLoad::kazSrcRect.top = 0;

	if (fClock.getElapsedTime().asSeconds() >= frame ) {
		tLoad::kazSrcRect.left == 420 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;
		fClock.restart();
	}
	
	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
	
}

void Motion::kazuyaCrouch() {
	tLoad::kazSrcRect.top = 95;

	if (fClock.getElapsedTime().asSeconds() >= frame) {
		tLoad::kazSrcRect.left >= 350  ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;
		fClock.restart();
	}

	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
}

void Motion::kazuyaGoForward(){
	return;
}


void Motion::kazuyaGoBack(){
	return;
}