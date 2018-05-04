#pragma once

#include "boat.h"
#include "sail.h"

class Sailboat final : public Boat
{

public:

	Sailboat() = default;

	int getSpeed() const noexcept;
	

private:

	Sail sail;


	std::string do_getName() const override;
	void do_setName(std::string name) noexcept override;


};

