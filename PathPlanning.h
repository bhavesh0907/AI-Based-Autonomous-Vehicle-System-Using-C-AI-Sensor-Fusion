#ifndef PATH_PLANNING_H
#define PATH_PLANNING_H

#include <vector>

class PathPlanning {
public:
    void planPath(std::vector<float> sensorData);
    void executeMovement();
};

#endif
