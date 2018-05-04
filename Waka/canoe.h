#pragma once
#include "boat.h"

class Canoe : public Boat
{
private:
	std::string name_{};


public:
	Canoe(const std::string name);

	std::string do_getName() override;


};