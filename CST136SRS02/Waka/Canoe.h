#pragma once
#include "Boat.h"
#include "Paddle.h"

class Canoe final : public Boat
{
public:
	Canoe() = default;
	Canoe(const std::string boatName);
	~Canoe() = default;

	std::string getName() override;

private:
	Paddle hasPaddle;
};

