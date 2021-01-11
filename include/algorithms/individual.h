//
// Created by nicol on 09/01/2021.
//

#ifndef GENETICALGORITHMS_INDIVIDUAL_H
#define GENETICALGORITHMS_INDIVIDUAL_H

#include <vector>
#include <cassert>
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

namespace algorithms {
    class Individual {
    protected:
        std::vector<int> genes_;
        int size_;
        int fitness_;
    private:
        void addGene() {
            genes_.push_back(rand() % 2);
        }

    public:
        Individual(int size) {
            assert(size > 0);
            size_ = size;
            for (int i = 0; i < size_; ++i) {
                addGene();
            }
        };

        Individual() {};

        int computeFitness();

        int getSize() const { return size_; }

        void setSize(int size) { size_ = size; }

        int getFitness() const { return fitness_; }

        const std::vector<int> &getGenes() const { return genes_; }

        void setGene(int gene) {
            assert(gene > 0);
            genes_.push_back(gene);
        }

        void printInfo(int index) const;

    };
}

#endif //GENETICALGORITHMS_INDIVIDUAL_H
