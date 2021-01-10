//
// Created by nicol on 09/01/2021.
//

#ifndef GENETICALGORITHMS_POPULATION_H
#define GENETICALGORITHMS_POPULATION_H

#include "algorithms/individual.h"

namespace algorithms {
    class Population {
    protected:
        std::vector<Individual *> individuals_;
        int N_; // N = numero individui nella popolazione

    public:
        Population(int N, int M) {
            assert(N > 0 && M > 0 && M < N);
            N_ = N;
        };

        const std::vector<Individual *> &getIndividuals() const { return individuals_; }

        bool addIndividual(Individual &individual) {
            if (individuals_.size() >= 0 && individuals_.size() < N_) {
                individuals_.push_back(&individual);
                return true;
            }
            return false;
        }

        void computeFitness();

        void computeCrossover(const Individual &X1, const Individual &X2);

        const std::vector<Individual *> &computeCrossoverM_times() {
            for (int i = 0; i < M_; ++i) {
                computeCrossover();
            }
        }

        std::vector<int> bestIndividuals() const {
            std::vector<int> res;
            int conta = 0;
            /*for (int i = 0; i < individuals_.size() - 1; ++i) {
                for (int j = i + 1; j < individuals_.size(); ++j) {
                    if (individuals_[i]->getFitness() >= individuals_[j]->getFitness())
                    max = individuals_[j]->getFitness();
            }
            res.push_back(max);
            conta++;
            return res;*/
        }

        std::vector<int> worstIndividuals() const {
            std::vector<int> res;
            bool found = false;
            int conta = 0;
            for (int i = 0;
                 i < individuals_.size() - 1 && conta != (individuals_.size() - bestIndividuals().size()); ++i) {
                for (int j = i + 1; j < individuals_.size(); ++j) {
                    if (individuals_[i]->getFitness() <= individuals_[j]->getFitness()) {
                        found = true;
                    }
                }
                if (found) {
                    res.push_back(i);
                    conta++;
                }
            }
            return res;
        }

        void substitution() {
            for (int i = 0; i < individuals_.size(); ++i) {
                if (i == worstIndividuals()[i]) {
                    /*individuals_[i] = solutionIbride;*/
                }
            }
        }


        void printInfo(int index) const;

    };
}

#endif //GENETICALGORITHMS_POPULATION_H
