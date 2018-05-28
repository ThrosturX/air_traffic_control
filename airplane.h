#pragma once

struct V3 {
    double x,
        y,
        z;

	V3(double xx, double yy, double zz) : x(xx), y(yy), z(zz) {}
};

class Airplane {
    V3 position;
    V3 velocity;

	public:
        Airplane(double x, double y, double z) : position(x, y, z), velocity(0, 0, 0) {} ;

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
};

