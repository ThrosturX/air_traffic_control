#include "air_traffic_control.h"

// Requests that plane lands
// Precondition: runway must be clear, plane must be in air
// Postcondition: runway no longer clear
bool AirTrafficController::Land(Airplane plane, Runway runway){
	return false;
}

// Requests that the plane takes off from runway
// Precondition: plane must be on runway
// Postcondition: runway is clear
bool AirTrafficController::TakeOff(Airplane plane, Runway runway){
	return false;
}

// Requests that the plane enters the runway area
// Precondition: runway must be clear, plane must be on ground, but not on runway
// Postcondition: runway no longer clear
bool AirTrafficController::TaxiOn(Airplane plane, Runway runway){
	return false;
}

// Requests that the plane leaves the runway area
// Precondition: plane must be on runway
// Postcondition: runway is clear
bool AirTrafficController::TaxiOff(Airplane plane, Runway runway){
	return false;
}
