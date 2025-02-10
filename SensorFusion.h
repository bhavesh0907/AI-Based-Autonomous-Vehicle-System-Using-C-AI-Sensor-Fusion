#ifndef SENSOR_FUSION_H
#define SENSOR_FUSION_H

#include <vector>

class SensorFusion {
public:
    void collectData();
    std::vector<float> getProcessedData();
};

#endif
