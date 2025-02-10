#include <iostream>
#include "SensorFusion.h"
#include "PathPlanning.h"

int main() {
    SensorFusion sensorFusion;
    PathPlanning pathPlanner;
    
    while (true) {
        sensorFusion.collectData();
        pathPlanner.planPath(sensorFusion.getProcessedData());
        pathPlanner.executeMovement();
    }
    
    return 0;
}
