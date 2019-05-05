#ifndef SCHEDULER_H_INCLUDED
#define SCHEDULER_H_INCLUDED

#include<iostream>
#include<vector>
#include<iterator>
#include<map>
#include<list>

class Scheduler
{
protected:
    vector<Chromosome> populationPool;
    vector<
public:
    void displayTimeTable();

    int isValidChromosome(Chromosome individual);

    Chromosome crossoverProcess(Chromosome parent1, Chromosome parent2);

    Chromosome mutationProcess(Chromosome offspring);

    Chromosome fitnessScoreEvaluator(Chromosome individual);

};

#endif // SCHEDULER_H_INCLUDED
