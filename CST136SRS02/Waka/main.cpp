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
#include "wind.h"
#include "sailboat.h"
#include "random"
#include "hull.h"
#include "multiHull.h"
#include "monoHull.h"


int main()
{
	int temp = 0;
	
	/*//rand generator
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distribution(0, 100);

	Sailboat mySailboat;
	Wind wind;
	Current current;

	try {

		
		wind.setDirection();
		wind.setSpeed(distribution(generator));
		
		current.setSpeed(35);
		//current.setHeight(distribution(generator) / 10)

		mySailboat.setName("Thor");
		mySailboat.setDirection(wind);

		mySailboat.setSpeed(current, wind);

	}
	catch (char* c)
	{
		std::cout << c;
	}
	



	std::cout << "Wind speed" << wind.getSpeed() << std::endl <<
				 "Curernt speed "<< current.getspeed() << std::endl <<
		         "Sailboat speed:" << mySailboat.getSpeed() << std::endl;


	

	

	




	
	
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

