//
// Created by Rohan_Aich on 8/8/2026.
//

#pragma once

#include <vector>
#include "fluid_point.hpp"

namespace cavitation {
     class domain {
     private:
         double len;
         double numPoints;
         std::vector<fluid_point> points;
     public:
         domain(double len, double numPoints);
         const std::vector<fluid_point>& getpoints() const;
    };
}
