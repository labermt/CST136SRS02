#pragma once

class Propulsion
{

public:

	Propulsion();

	virtual ~Propulsion() = default;

	int getSpeed() const;
	void setSpeed(int n) noexcept;

protected:

	virtual int do_getSpeed() const = 0;
	virtual void do_setSpeed(int n) noexcept = 0;
	

private:

	int speed;

};

