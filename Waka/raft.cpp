#include "stdafx.h"
#include "raft.h"

Raft::Raft(const std::string name, Hull * hull) : name_(name)
{ }

environment::properties Raft::do_whatAmIOn()
{
	return theworld_.getTileProperties(mychart_.getlat(), mychart_.getlng());
}

std::string Raft::do_getName()
{
	return name_;
}

void Raft::do_turnRight()
{

}

void Raft::do_turnLeft()
{

}

void Raft::do_move()
{

}