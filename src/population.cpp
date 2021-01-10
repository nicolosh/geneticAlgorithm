//
// Created by nicol on 09/01/2021.
//

#include "../include/algorithms/population.h"

void algorithms::Population::computeFitness() {
    for (int i = 0; i < individuals_.size(); ++i) {
        int sum = 0;
        for (int j = 0; j < individuals_[i]->getGenes().size(); ++j) {
            sum += individuals_[i]->getGenes()[j];
        }
        individuals_[i]->setFitness(sum);
    }
}

void algorithms::Population::printInfo(int index) const {
    //std::cout << "Population of " << N_ << "individual(s)" << std::endl;
    std::cout << "Generation: " << index << " Fittest score: " << "getFitness()" << std::endl;

    for (int i = 0; i < individuals_.size(); ++i) {
        std::cout << "==Genetic pool==" << std::endl;
        individuals_[i]->printInfo(i);
    }
    std::cout << "================" << std::endl;
}