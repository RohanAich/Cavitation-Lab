//
// Created by Rohan_Aich on 8/8/2026.
//

#include "../include/cavitation/fluid_point.hpp"

namespace cavitation {
    std::ostream &operator<<(std::ostream &os, const fluid_point &p) {
        os << "POSITION ALONG FLOW: " << p.posAlongFlow << std::endl;
        return os;
    }
}
