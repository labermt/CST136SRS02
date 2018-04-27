#pragma once
class Boat
{
public:
	virtual void do_foo(); //= 0 means you cannot create a boat anymore 
public:
	void foo()
	{
		do_foo();
	}

	virtual ~Boat() = default;
};

