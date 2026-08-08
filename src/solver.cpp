//
// Created by Rohan_Aich on 6/8/2026.
//

#include <iostream>
#include <ostream>
#include <cavitation/solver.hpp>
#include <cavitation/domain.hpp>

namespace cavitation {
    void Solver::run() {

        domain testDomain(1, 10, 2);
        std::vector<fluid_point> testPoints = testDomain.getpoints();
        for (const auto & i : testPoints) {
            std::cout << i << std::endl;
        }
    }
}