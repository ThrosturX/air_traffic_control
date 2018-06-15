#pragma once

#include "airplane.h"

// A runway is a rectangle within which a plane can land
struct Runway {
	double x1, x2;
	double y1, y2;
};

// One runway
// Possible actions:
//	- Land				-> plane enters runway, problem if one is already there
//	- Take Off			-> plane leaves runway, runway becomes "clear"
//	- Taxi to runway	-> plane enters runway, problem if one is already there
//	- Park (Taxi away)	-> plane leaves runway, runway becomes clear
class AirTrafficController {
	private:
		Runway runways[2];

	public:
		// Requests that plane lands
		// Precondition: runway must be clear, plane must be in air
		// Postcondition: runway no longer clear
		bool Land(Airplane plane, Runway runway);

		// Requests that the plane takes off from runway
		// Precondition: plane must be on runway
		// Postcondition: runway is clear
		bool TakeOff(Airplane plane, Runway runway);

		// Requests that the plane enters the runway area
		// Precondition: runway must be clear, plane must be on ground, but not on runway
		// Postcondition: runway no longer clear
		bool TaxiOn(Airplane plane, Runway runway);

		// Requests that the plane leaves the runway area
		// Precondition: plane must be on runway
		// Postcondition: runway is clear
		bool TaxiOff(Airplane plane, Runway runway);
};

