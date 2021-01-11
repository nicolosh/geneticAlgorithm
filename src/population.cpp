//
// Created by nicol on 09/01/2021.
//

#include "../include/algorithms/population.h"


std::vector<int> algorithms::Population::bestIndividuals() const {
    std::vector<int> res, indexes;
    for (int i = 0; i < individuals_.size(); ++i) {
        res[i] = individuals_[i]->getFitness();
    }

    //ordino vettore dei valori di fitness senso decrescente
    for (int i = 0; i < individuals_.size() - 1; ++i) {
        for (int j = i + 1; j < individuals_.size(); ++j) {
            if (res[i] <= res[j]) {
                int temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }


    int conta = 0;
    for (int i = 0; i < individuals_.size() && conta != M_; ++i) {
        bool found = false;
        for (int j = i; j < individuals_.size() && !found; ++j) {
            if (res[i] == individuals_[j]->getFitness()) {
                indexes.push_back(j);
                found = true;
                conta++;
            }
        }
    }
    return indexes;
}

std::vector<int> algorithms::Population::worstIndividuals() const {
    std::vector<int> res, indexes;
    for (int i = 0; i < individuals_.size(); ++i) {
        res[i] = individuals_[i]->getFitness();
    }

    //ordino vettore dei valori di fitness senso crescente
    for (int i = 0; i < individuals_.size() - 1; ++i) {
        for (int j = i + 1; j < individuals_.size(); ++j) {
            if (res[i] >= res[j]) {
                int temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }


    int conta = 0;
    for (int i = 0; i < individuals_.size() && conta != M_; ++i) {
        bool found = false;
        for (int j = i; j < individuals_.size() && !found; ++j) {
            if (res[i] == individuals_[j]->getFitness()) {
                indexes.push_back(j);
                found = true;
                conta++;
            }
        }
    }
    return indexes;
}


const std::vector<algorithms::Individual *> &algorithms::Population::computeCrossoverM_times(std::vector<int> &bestSolutions) const {
    std::vector<algorithms::Individual *> ibrideSolutions;
    if (M_ > 2) {
        for (int i = 0; i < M_; ++i) {
            ibrideSolutions.push_back(&computeCrossover(*individuals_[bestSolutions[i]],
                                                        *individuals_[bestSolutions[i + 1]]));
            if (i == M_ - 1)
                ibrideSolutions.push_back(&computeCrossover(*individuals_[bestSolutions[0]],
                                                            *individuals_[bestSolutions[i]]));
        }

    }
    if (M_ == 2)
    {
        ibrideSolutions.push_back(&computeCrossover(*individuals_[bestSolutions[0]],*individuals_[bestSolutions[1]]));
        ibrideSolutions.push_back(&computeCrossover(*individuals_[bestSolutions[1]], *individuals_[bestSolutions[0]]));
    }
    return ibrideSolutions;
}

algorithms::Individual &algorithms::Population::computeCrossover(const algorithms::Individual &X1, const algorithms::Individual &X2) const {
    Individual* ibrideSolution;
    if (X1.getSize() == X2.getSize()) {
        int commonSize = X1.getSize();
        int cut = rand() % (commonSize - 2) + 1;
        for (int i = 0; i < cut; ++i) {
            ibrideSolution->setGene(X1.getGenes()[i]);
        }
        for (int i = cut; i < commonSize; ++i) {
            ibrideSolution->setGene(X2.getGenes()[i]);
        }
    } else {
        int min = (X1.getSize() < X2.getSize() ? X1.getSize() : X2.getSize());
        int max = (X1.getSize() > X2.getSize() ? X1.getSize() : X2.getSize());
        ibrideSolution->setSize((min + max) / 2);
        int cut = rand() % (ibrideSolution->getSize() - 2) + 1;
        for (int i = 0; i < cut; ++i) {
            ibrideSolution->setGene(X1.getGenes()[i]);
        }
        for (int i = cut; i < ibrideSolution->getSize(); ++i) {
            ibrideSolution->setGene(X2.getGenes()[i]);
        }

    }
    return *ibrideSolution;
}