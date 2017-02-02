#pragma once
#include "State.h"
class State;
class Animation
{
	State* current;
public:
	Animation();
	~Animation();

	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
};

