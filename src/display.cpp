//
// Created by nicol on 09/01/2021.
//

#include "../include/algorithms/display.h"

void algorithms::Display::printIterations() const {
    std::cout << "Population of " << N_ << "individual(s)" << std::endl;
    for (int i = 0; i < loops_; ++i) {
        population_->printInfo(i);
    }
    std::cout << "Solution found in generation: " << loops_ - 1 << std::endl;
    std::cout << "Index of winner individual: " << population_->getIndividuals()[]->index_ << std::endl;
    std::cout << "Fitness: " << std::endl;
    std::cout << "Genes: " << population_->getIndividuals()[]->prinfInfo();
}
