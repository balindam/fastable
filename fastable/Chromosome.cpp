

#include<iostream>
#include<vector>
#include<iterator>
#include<map>
#include<list>

void Chromosome::Chromosome() {

}

string Chromosome::toStringChromosome() {
        string chromo;
        for(auto i = this.Genes.begin(); i != this.Genes.end(); i++) {
            for(auto j = i->slots.begin(); j != i->slots.end(); j++) {
                chromo += j->setBit;
            }
        }
        return chromo;
}



