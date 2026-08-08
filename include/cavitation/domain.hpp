//
// Created by Rohan_Aich on 8/8/2026.
//

#pragma once

#include <vector>
#include "fluid_point.hpp"

namespace cavitation {
    struct domain {
        double len;
        double numPoints;
        double spacing;
        std::vector<fluid_point> points;
    };
}
