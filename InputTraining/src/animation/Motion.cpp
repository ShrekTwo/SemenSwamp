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
		1 - crouch forward
		0 - standing
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
	case 1:
		kazuyaCForward();
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
	tLoad::kazSrcRect.top = 285;
	if (fClock.getElapsedTime().asSeconds() >= frame) {
		tLoad::kazSrcRect.left >= 70 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;
		fClock.restart();
	}
	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
}


void Motion::kazuyaGoBack(){
	tLoad::kazSrcRect.top = 190;
	if (fClock.getElapsedTime().asSeconds() >= frame) {
		tLoad::kazSrcRect.left >= 70 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;
		fClock.restart();
	}
	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
}

void Motion::kazuyaCForward() {
	tLoad::kazSrcRect.top = 380;
	if (fClock.getElapsedTime().asSeconds() >= frame) {
		tLoad::kazSrcRect.left >= 70 ? tLoad::kazSrcRect.left = 0 : tLoad::kazSrcRect.left += 70;
		fClock.restart();
	}
	tLoad::Kaz.setTextureRect(tLoad::kazSrcRect);
}