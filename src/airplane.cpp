#include "airplane.h"

// TODO: Airplanes do not comply ;-) not implemented!

bool Airplane::Land(V3 destination) {
	return false;
}

bool Airplane::TakeOff(V3 destination) {
	// Make sure the plane is not in the air already
	if (this->position.z != 0) {
		return false;
	}

	// Calculate the velocity vector needed, based on current position, to approach destination

	V3 direction = destination - position;

	this->velocity = direction;

	return false;
}

bool Airplane::TaxiOn(V3 destination) {
	return false;
}

bool Airplane::TaxiOff(V3 destination) {
	return false;
}

unsigned int Airplane::current_id = 0;

std::ostream& operator<<(std::ostream& os, const Airplane& ap) {
	os << "Airplane " << ap.uniqueId << " at " << ap.position << " has velocity " << ap.velocity;
	return os;
}
