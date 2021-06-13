#include "Mechanics.h"

sf::Color Mechanic::colorGrey(152, 163, 155);

int Mechanic::state;
int Mechanic::fpsi;

void Mechanic::WASDPress(sf::Sprite& sprite) {
	sprite.setColor(colorGrey);
	sprite.setScale(tLoad::pscale);
}

void Mechanic::WASDRelease(sf::Sprite& sprite) {
	sprite.setColor(sf::Color::White);
	sprite.setScale(tLoad::scale);
}

void Mechanic::fpsCounter(sf::RenderWindow& window) {

	float fps = 1.f / Window::clock.getElapsedTime().asSeconds();

	fpsi = (int)fps;
	std::string str = std::to_string(fpsi);

	window.setTitle(str);
}

int Mechanic::charState() {

	if (EventH::DisPressed && !EventH::SisPressed)
		state = 4; // go forward
	else if (EventH::AisPressed && EventH::SisPressed || EventH::SisPressed && !EventH::DisPressed)
		state = 3; // crouch
	else if (EventH::AisPressed && !EventH::SisPressed)
		state = 2; // go back
	else if (EventH::SisPressed && EventH::DisPressed)
		state = 1; // crouch forward
	else
		state = 0; // neutral

	return state;
}
//3 - crouch
//2 - block
//1 - standing