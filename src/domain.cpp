//
// Created by Rohan_Aich on 8/8/2026.
//

#include "../include/cavitation/domain.hpp"

namespace cavitation {
    domain::domain(double l, double n) : len(l), numPoints(n){
        for (size_t i=0; i<numPoints; i++) {
            double delta_x = len / (numPoints - 1);
            points.emplace_back(fluid_point(delta_x*i,0,0));
        }
    }

    const std::vector<fluid_point>& domain::getpoints() const {
        return points;
    }
}
