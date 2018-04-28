#pragma once
#include <string>
#include <iostream>


class Boat
{
protected: // A derived class member or friend may access the protected members of the base class only through a derived object
	virtual ~Boat() = default;

public:
	Boat() = default;
	Boat(std::string boatName) :name(boatName) {};	// in-line function

	virtual std::string getName() = 0;

private:
	std::string name{};
};

