#include "stdafx.h"
#include "Canoe.h"
#include "Paddle.h"
#include "MonoHull.h"
#include <memory>

using namespace std;

Canoe::Canoe()
	: Boat(new Paddle, new MonoHull)
{

}


Canoe::~Canoe()
{
}

void Canoe::updateBoat(Water wa, Wind wi)
{
	
}