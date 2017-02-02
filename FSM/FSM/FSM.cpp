// FSM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "State.h"
#include "Jumping.h"
#include <chrono>
#include <thread>
using namespace std;
int main()
{
	std::chrono::milliseconds dura(2000);
	Animation fsm; 
	int i = 0;

	while (true) {
		if (i == 0) {
			fsm.jumping();
			std::this_thread::sleep_for(dura);
			i = 1;
		}
		else if(i ==1) {
			fsm.idle();
			std::this_thread::sleep_for(dura);
			i = 2;
		}
		else if (i == 2) {
			fsm.climbing();
			std::this_thread::sleep_for(dura);
			i = 3;
		}
		else
		{
			fsm.idle();
			std::this_thread::sleep_for(dura);
			i = 0;
		}
	}
	std::system("PAUSE");

    return 0;
}

