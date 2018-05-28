#include <cstdlib>
#include <vector>

#include "airplane.h"
#include "air_traffic_control.h"

// TODO: Extract or refactor // TODO: Is controller a required parameter here?
void SimulateLandingScenario(AirTrafficController * controller, std::vector<Airplane> planes) {

}

// create simulation here, then extract
int main(int argc, char * argv []) {
    AirTrafficController controller; // TODO: Constructor
	std::vector<Airplane> planes;

    for (int i = 0 ; i < 4 ; ++i) {
        planes.push_back(Airplane(0, 0, i * 1000));
    }

	// Scenario 1: Run simulation until all planes have landed
	std::thread simulation (SimulateLandingScenario, &controller, planes);

	// TODO
	// Missing here: interface to affect the controller

	simulation.join();

	// TODO: Summary or reporting

    return EXIT_SUCCESS;
}
