#ifndef CHROMOSOME_H_INCLUDED
#define CHROMOSOME_H_INCLUDED

#include<iostream>
#include<vector>
#include<iterator>
#include<map>
#include<list>

class Chromosome
{
protected:
    vector<Gene> Genes;
    int validBit;
    int fitnessScore;
public:
    string toStringChromosome();

};

#endif // CHROMOSOME_H_INCLUDED
