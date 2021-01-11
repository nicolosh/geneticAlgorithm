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
        int M_; //numero di individui da sostituire ad ogni iteration
        int loops_; // numero di iterations
    public:
        Population(int N, int M, int loops, const std::vector<Individual *> &individuals) {
            assert(N > 0 && M > 0 && M < N);
            N_ = N, M_ = M, loops_ = loops;
            individuals_ = individuals;
        };

        const std::vector<Individual *> &getIndividuals() const { return individuals_; }

        int getNumberOfIndividuals() const { return N_; }

        int getNumberOfSubstitutions() const { return M_; }

        int getNumberOfLoops() const { return loops_; }

        const std::vector<Individual *> &computeCrossoverM_times(std::vector<int> &bestSolutions) const;

        Individual &computeCrossover(const Individual &X1, const Individual &X2) const;

        std::vector<int> bestIndividuals() const;

        std::vector<int> worstIndividuals() const;

        void execution() {
            std::cout << "Population of " << N_ << " individual(s)" << std::endl;
            for (int i = 0; i < loops_; ++i) {

                //punto 2
                for (int j = 0; j < individuals_.size(); ++j) {
                    individuals_[i]->computeFitness();
                }

                printInfo(i);

                //punto 3 (selezione dei bestIndividuals-->vettore di indici)
                std::vector<int> bestSolutions = bestIndividuals();

                //punto 4 (generazione M soluzioni ibride )
                std::vector<Individual *> ibrideSolutions = computeCrossoverM_times(bestSolutions);

                //punto 5(sostituzione M individui peggiori con le M ibride del punto precedente)
                substitution(ibrideSolutions);
            }
            std::cout << "Solution found in generation: " << loops_ - 1 << std::endl;
            //std::cout << "Index of winner individual: " << individuals_[i]->index_ << std::endl;
            std::cout << "Fitness: " << maxFitness() << std::endl;
            std::cout << "Genes: ";
            for (int i = 0; i < individuals_[i]->getSize(); ++i) {
                 std::cout << "1" << std::endl;
            }

        }

        void substitution(const std::vector<Individual *> &ibrideSolutions) {
            for (int i = 0; i < individuals_.size(); ++i) {
                bool found = false;
                for (int j = 0; j < M_ && !found; ++j) {
                    if (i == worstIndividuals()[j]) {
                        individuals_[i] = ibrideSolutions[j];
                        found = true;
                    }
                }
            }
        }

        int maxFitness() const {
            int max = individuals_[0]->getFitness();
            for (int i = 1; i < individuals_.size(); ++i) {
                if (individuals_[i]->getFitness() >= max)
                    max = individuals_[i]->getFitness();
            }
            return max;
        }

        void printInfo(int index) const {
            std::cout << "Generation: " << index << " Fittest score: " << maxFitness() << std::endl;
            std::cout << "==Genetic pool==" << std::endl;
            for (int i = 0; i < individuals_.size(); ++i) {
                individuals_[i]->printInfo(i);
            }
            std::cout << "================" << std::endl;
        }

    };
}

#endif //GENETICALGORITHMS_POPULATION_H
