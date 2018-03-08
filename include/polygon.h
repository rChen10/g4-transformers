#include <iostream>
#include <fstream>
#include <cmath>

#include "matrix.h"

#ifndef __POLYGON_H__
#define __POLYGON_H_


class polygon : public matrix{

};


#define PI atan(1)*4
//helper
static double convert(double theta){
	return theta * PI / 180;
}


static matrix create_translate(std::vector<double> p){
	matrix m = matrix(4, 4);
	m.ident();
	for (int i = 0; i < 3; i++){
		m[m.size()-1][i] = p[i];
	}
	return m;
}

static matrix create_scale(std::vector<double> a){
	matrix m = matrix(4, 4);
	m.ident();
	for (int i = 0; i < 3; i++){
		(m[i])[i] = a[i];
		std::cout<<a[i]<<"\n";
		std::cout<<m[i][i]<<"\n";
	}
	//std::cout<<m;
	return m;
}

static matrix create_rotateZ(double theta){
	std::cout<<"theta:"<<theta<<"\n";
	double angle = convert(theta);
	std::cout<<angle<<"\n";
	matrix m = matrix(4, 4);
	m.ident();
	m[0][0] = cos(angle);
	m[1][0] = -sin(angle);
	m[0][1] = sin(angle);
	m[1][1] = cos(angle);
	return m;

}

static matrix create_rotateX(double theta){
	
	double angle = convert(theta);
	matrix m = matrix(4, 4);
	m.ident();
	m[1][1] = cos(angle);
	m[2][1] = -sin(angle);
	m[1][2] = sin(angle);
	m[2][2] = cos(angle);
	return m;

}

static matrix create_rotateY(double theta){

	double angle = convert(theta);
	matrix m = matrix(4, 4);
	m.ident();
	m[2][2] = cos(angle);
	m[0][2] = -sin(angle);
	m[2][0] = sin(angle);
	m[0][0] = cos(angle);
	return m;

}
#endif
