#ifndef _TEXTURELOAD_H_
#define _TEXTURELOAD_H_

#include "SFML/Graphics/Sprite.hpp"
#include "SFML/Graphics/Texture.hpp"

//#include"SFML/Graphics/Rect.hpp"

#include <iostream>
#include <vector>

class tLoad {
	public:

		static sf::Texture texture;
		//static sf::Sprite* WASDkeys = new sf::Sprite[4];

		static sf::Sprite Wkey;
		static sf::Sprite Akey;
		static sf::Sprite Skey;
		static sf::Sprite Dkey;

		static sf::Vector2f scale;

		static float spacing;

		//static std::vector<sf::Sprite> WASDkeys(4);
	
		static void tInit();

};


#endif /*_TEXTURELOAD_H_*/