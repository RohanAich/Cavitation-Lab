//
// Created by Rohan_Aich on 8/8/2026.
//

#pragma once

namespace cavitation {
    struct fluid_point {
        double posAlongFlow;
        double crossSectionalArea;
        double localFluidDensity;
        double localAbsPressure;
        double vapourPressure;
    };
}
