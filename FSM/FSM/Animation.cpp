#include "stdafx.h"
#include "Animation.h"
#include "Idle.h"

Animation::Animation()
{
	current = new Idle();
}



Animation::~Animation()
{
}

void Animation::setCurrent(State* s)
{
	current = s;
}


void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}
