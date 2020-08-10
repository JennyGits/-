#pragma once
//헤더파일 중복 방지
#include <iostream>
using namespace std;

class Car
{
public:
	int getSpeed();
	void setSpeed(int s);
	void honk();

private:
	int speed;
};

