#ifndef BOAT_H
#define BOAT_H

#include <string>

#include "MonoHull.h"
#include "MultiHull.h"
#include "Propulsion.h"
#include "Chart.h"
#include "Water.h"

class Boat
{
public:
	enum class Turn { k0, kForward, kLeft, kRight};

private:
	std::string name_;

	Hull& hull_; //has-a: Composition
	Propulsion& prop_;
	Direction heading_{ kNorth };
	Navigation* nav_{};

	unsigned elapsedTime_{};

protected:
	Boat(std::string name, Propulsion& prop, Hull& hull);

public:
	std::string getName() noexcept;
	Hull& getHull() const noexcept;
	Propulsion& getProp() const noexcept;

protected: //prefer virtual functions to be private or protected. 
	virtual std::string doGetName() noexcept = 0; //A pure virtual function

protected:
	void setNav(Navigation& nav);

private:
	static Direction getDirection(const Turn turn);

public:
	Navigation * getNav() const;
	unsigned getElapsedTime() const;

	Direction getHeading(const Turn turn) const;
	Direction getHeading() const;

private:
	void incrementTime(const unsigned minutes);

public:
	void beginVoyage();
	void move();
	void turn(const Turn turn);

public: //a base clase destructor should be: public and virtual || protected and non-virtual
	virtual ~Boat() = default; //A virtual destructor
};
//Boat is abstract because it has one or more pure virtual functions.
#endif

//TODO::Raft hits obstacle -> end voyage. Paddle/sail use -> algorithm for navigating around rocks/land? 