#pragma once
#include <cstdio>  

#include <iostream>
#include "Calculate.h"
using namespace std;



class Buying
{
public:

	string In_Cart;
	float price;
	float total;
	bool check;
	float cart(string, int, float);
	Calculate cal;
};

