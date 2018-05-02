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

int main()
{
	int temp = 0;

	Raft myRaft(Cardinal::N, 60);
	std::cout << myRaft.getName() << std::endl;
	myRaft.setName("Thor");
	std::cout << myRaft.getName();
	std::cout << myRaft.getDirectionString() << std::endl;
	myRaft.setDirection(Cardinal::S);
	std::cout << "direction set to" << myRaft.getDirectionString() << std::endl;
	
	
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

