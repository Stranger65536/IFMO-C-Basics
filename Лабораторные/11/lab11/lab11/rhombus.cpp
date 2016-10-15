// Course: Programming technologies (ANSI C)
// Lab 11. Headers.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012

#include "rhombus.h"

float sideLength(float x1, float y1, float x2, float y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void Rhombus::Create(float x1, float y1, float x2, float y2, 
				  float x3, float y3, float x4, float y4) {
	this -> x1 = x1; this -> y1 = y1;
	this -> x2 = x2; this -> y2 = y2;
	this -> x3 = x3; this -> y3 = y3;
	this -> x4 = x4; this -> y4 = y4;
}

void Rhombus::CreateFromConsole(){
	scanf("%f %f %f %f %f %f %f %f", &this -> x1, &this -> y1, 
									 &this -> x2, &this -> y2,
									 &this -> x3, &this -> y3, 
									 &this -> x4, &this -> y4);
}

float Rhombus::Area(){
	return 0.5 * sideLength(x1, y1, x3, y3) * sideLength(x2, y2, x4, y4); 
}

float Rhombus::Perimeter(){
	return 4 * sideLength(x1, y1, x2, y2);
}