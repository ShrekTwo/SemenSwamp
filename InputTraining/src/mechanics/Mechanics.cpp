#include "Mechanics.h"

sf::Color Mechanic::colorGrey(152, 163, 155);
sf::Clock Mechanic::clock;
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

	float fps = 1.f / clock.getElapsedTime().asSeconds();
	clock.restart();

	fpsi = (int)fps;
	std::string str = std::to_string(fpsi);

	window.setTitle(str);
}