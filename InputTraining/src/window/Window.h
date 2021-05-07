#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "SFML/Graphics/RenderWindow.hpp"
#include <string>


class Window {
	private:
		static int RES_W, RES_H;
		static std::string winName;
	public:
		Window(int RES_W, int RES_H, std::string winName);
		~Window();
		void Start();
		void Win_init(int res_x, int res_y, std::string winName);
};


#endif //!_WINDOW_H_

