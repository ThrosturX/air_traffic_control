#pragma once
#include <ostream>
#include "vector3.h"

class Airplane {
	private:
	static unsigned int current_id;
	unsigned int uniqueId;
	V3 position;
	V3 velocity;

	public:
		Airplane(double x, double y, double z) : 
			uniqueId(current_id++),
			position(x, y, z), 
			velocity(0, 0, 0)
			{} ;

		// TODO: Do I need a copy constructor? What about assignment operator?

		// Requests that this airplane begins landing procedure
		// Returns whether or not the airplane can comply with the request
		// Precondition: The airplane is in the air
		// Postcondition: The airplane now occupies a runway (coordinates are identical)
		bool Land(V3 destination);

		// Requests that the airplane takes off immediately
		// Returns whether or not the airplane can comply with the request
		// Precondition: The airplane is on a runway
		// Postcondition: The runway is no longer occupied by this airplane (side-effect of position)
		bool TakeOff(V3 direction);

		// Prototypes, TODO: Descriptions
		bool TaxiOn (V3 direction);
		bool TaxiOff(V3 direction);

		friend std::ostream& operator<<(std::ostream& os, const Airplane& ap);
};

