#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
#include "pixel.h"

#ifndef __SCREEN_H__
#define __SCREEN_H__

class point : public std::vector<int>{
	public:

	point();

	point(int x);

	point(int x, int y);

	point(int x, int y, int z);

	point(std::vector<int> v);

	point(std::vector<double> v);

};

class screen{
	public:
		std::vector<pixel> colors;
		pixel **grid;
		int h, w;

		screen();

		screen(int x, int y);

		void render(const char* name);

		void render(FILE * f);

		void clear();

		void plot(point& p, pixel col);

		//pixel& insert_color(pixel col);
};

#endif
