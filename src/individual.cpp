//
// Created by nicol on 09/01/2021.
//

#include "../include/algorithms/individual.h"


int algorithms::Individual::computeFitness() {
    fitness_ = 0;
    for (int i = 0; i < size_; ++i) {
        fitness_ += genes_[i];
    }
    return fitness_;
}

void algorithms::Individual::printInfo(int index) const {
    std::cout << "> Individual " << index << " " << "| [ genes = [";
    for (int i = 0; i < genes_.size() - 1; ++i) {
        std::cout << genes_[i] << ", ";
    }
    std::cout << genes_[genes_.size() - 1] << "] ] |" << std::endl;
}