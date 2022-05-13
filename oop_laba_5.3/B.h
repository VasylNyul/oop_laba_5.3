#pragma once
#include "A.h"
#include <iostream>
using namespace std;
class B : public A
{
	int y;
public:

	B(int x = 0,int y = 0) : A(x) { this->y = y; }
	int get_y() { return y; }

	void F(A& a) { throw a; }
	void F(B& b) { cout << "method F(B);"; }
};

