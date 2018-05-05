#pragma once
#include <string>

class Boat
{

public:

	Boat();
	Boat(std::string inputName);
	virtual ~Boat() = default;

	std::string getName() const;
	void setName(std::string n) noexcept;

protected:

	virtual std::string do_getName() const = 0; 
	virtual void do_setName(std::string n) noexcept = 0;

private:

	std::string name;
	
};

