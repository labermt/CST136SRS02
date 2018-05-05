//#include "stdafx.h"
#include <iostream>
#include "raft.h"
#include "canoe.h"
#include "sailboat.h"



int main()
{
	raft theRaft;
	string raftName{ theRaft.getName() };

	canoe theCanoe;
	string canoeName{ theCanoe.getName() };

	sailboat theSail;
	string sailName{ theSail.getName() };

	return 0;
}