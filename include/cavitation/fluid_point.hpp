//
// Created by Rohan_Aich on 8/8/2026.
//

#pragma once

#include <iostream>

namespace cavitation {
    struct fluid_point {
        double posAlongFlow;
        double crossSectionalArea;
        double localFluidDensity;
        double localAbsPressure;
        double vapourPressure;
    };


    std::ostream& operator<<(std::ostream& os, const fluid_point& p);
}