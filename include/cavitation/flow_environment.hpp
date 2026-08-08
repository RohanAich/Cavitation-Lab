//
// Created by Rohan_Aich on 8/8/2026.
//

#pragma once

namespace cavitation {
    struct flow_environment {
        int numPoints;
        double domainLen;
        double waterDensity;
        double temp;
        double flowRate;
        double gravitationalAccel;
        double inletPressure;
    };
}
