#include "TextureLoad.h"

//static sf::Sprite* WASDkeys = new sf::Sprite[4];

sf::Texture tLoad::texture;

sf::Sprite tLoad::Wkey;
sf::Sprite tLoad::Akey;
sf::Sprite tLoad::Skey;
sf::Sprite tLoad::Dkey;

float tLoad::spacing = 25.f;
sf::Vector2f tLoad::scale(5.f, 5.f);
//static std::vector<sf::Sprite> WASDkeys(4);

void tLoad::tInit() {
	//system("dir");

	if (!tLoad::texture.loadFromFile("src/png/sprite_buttons.png")) {
		std::cerr << "TEXTURE LOG || Failed to load a texture" << std::endl;
		
	}

	//tLoad::texture.setSmooth(true);

	Wkey.setTexture(tLoad::texture);
	Wkey.setTextureRect(sf::IntRect(0, 0, 16, 16));
	Wkey.setScale(scale);
	Wkey.setPosition(200.f, 100.f);

	Akey.setTexture(tLoad::texture);
	Akey.setTextureRect(sf::IntRect(16, 0, 16, 16));
	Akey.setScale(scale);
	Akey.setPosition(Wkey.getPosition().x - Akey.getTexture()->getSize().x - spacing, Wkey.getPosition().y + Akey.getTexture()->getSize().y + spacing);

	Skey.setTexture(tLoad::texture);
	Skey.setTextureRect(sf::IntRect(32, 0, 16, 16));
	Skey.setScale(scale);
	Skey.setPosition(Akey.getPosition().x + Skey.getTexture()->getSize().x + spacing, Akey.getPosition().y);

	Dkey.setTexture(tLoad::texture);
	Dkey.setTextureRect(sf::IntRect(48, 0, 16, 16));
	Dkey.setScale(scale);
	Dkey.setPosition(Skey.getPosition().x + Dkey.getTexture()->getSize().x + spacing, Skey.getPosition().y);


}