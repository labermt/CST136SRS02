#include "stdafx.h"
#include <memory>
#include "monoHull.h"
#include "paddle.h"
#include "raft.h"

Raft::Raft(const Chart& chart) noexcept :
Boat(chart, {}, std::make_unique<MonoHull>()) // The real propulsion is the friends we made along the way.
{
	
}


std::string Raft::getName() const noexcept
{
	return "HMS Frodo";
}
