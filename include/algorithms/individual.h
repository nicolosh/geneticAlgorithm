//
// Created by nicol on 09/01/2021.
//

#ifndef GENETICALGORITHMS_INDIVIDUAL_H
#define GENETICALGORITHMS_INDIVIDUAL_H

#include <vector>
#include <cassert>
#include <iostream>

namespace algorithms {
    class Individual {
    protected:
        std::vector<int> genes_;
        int size_;
        int fitness_;
    public:
        Individual(int size) : size_(size){
            for (int i = 0; i < size_; ++i) {
                addGene();
            }
        };

        void setFitness(int fitness) { fitness_ = fitness; }

        int getFitness() const { return fitness_; }

        const std::vector<int> &getGenes() const { return genes_; }

        void addGene() {
            srand(time(nullptr));
            genes_.push_back(rand() % 2);
        }

        void printInfo(int index) const;

    };
}

#endif //GENETICALGORITHMS_INDIVIDUAL_H
