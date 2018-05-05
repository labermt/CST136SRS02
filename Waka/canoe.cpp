#include "stdafx.h"
#include <memory>
#include "paddle.h"
#include "monoHull.h"
#include "canoe.h"

Canoe::Canoe(const Chart& chart) noexcept :
Boat(chart, { new Paddle }, std::make_unique<MonoHull>())
{
	
}

std::string Canoe::getName() const noexcept
{
	return "HMS Lorde";
}
