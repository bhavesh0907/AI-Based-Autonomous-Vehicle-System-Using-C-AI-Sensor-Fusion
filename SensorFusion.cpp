#include "SensorFusion.h"
#include <iostream>

void SensorFusion::collectData() {
    std::cout << "Collecting sensor data from LiDAR and cameras..." << std::endl;
}

std::vector<float> SensorFusion::getProcessedData() {
    return {1.0, 2.0, 3.0}; // Simulated sensor values
}
