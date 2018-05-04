// Waka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "boat.h"
#include "raft.h"
#include "propulsion.h"
#include "paddle.h"
#include "sail.h"
#include "cardinal.h"
#include "canoe.h" 

int main()
{
	int temp = 0;

	Canoe myCanoe;
	 
	std::cout << myCanoe.getSpeed() << std::endl;

	
	myCanoe.setPaddleStrength(2);
	myCanoe.setSpeed(36);

	std::cout << "New speed with double strength" <<  myCanoe.getSpeed();


	
	
	//Cardinal sailDirection = Cardinal::N;


	/*Boat myboat;
	std::string boatName = "poop";

	boatName = myboat.getName();
	std::cout << boatName << std::endl;

	myboat.setName("Thor");

	std::cout << myboat.getName() <<std::endl;*/

	//wait
	std::cin >> temp;

    return 0;
}

