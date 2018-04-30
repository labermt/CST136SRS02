#pragma once
#include <string>

class Boat
{
private:
	std::string name;
	bool capsized = false;
protected:
	virtual std::string do_get_name() const = 0; //behind the scenes function
	virtual ~Boat() = default;
public:
	std::string getName() const; //publicly used get name
	Boat(std::string);
	bool isCapsized() const;
	void capsizeBoat();


	//add move function
};

