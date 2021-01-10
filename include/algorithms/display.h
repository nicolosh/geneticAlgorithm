//
// Created by nicol on 09/01/2021.
//

#ifndef GENETICALGORITHMS_DISPLAY_H
#define GENETICALGORITHMS_DISPLAY_H

#include "algorithms/population.h"

namespace algorithms {
    class Display {
    protected:
        Population *population_;
        int loops_;
    public:
        Display(int loops, int N, int M) : loops_(loops), N_(N), M_(M) {}

        void simulate(int loops) const;

        void setLoops(int loops) {
            loops_ = loops;
        }

    };
}

#endif //GENETICALGORITHMS_DISPLAY_H
