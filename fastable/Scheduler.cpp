




void Scheduler::displayTimeTable() {

}

int Scheduler::isValidChromosome(Chromosome individual) {

}


Chromosome Scheduler::crossoverProcess(Chromosome parent1, Chromosome parent2) {
    string p1 = parent1.toStringChromosome();
    string p2 = parent2.toStringChromosome();
    string offspring = "";
    int mid = strlen(p1);
    int crossoverPoint1 = 1 + (rand() % (( mid - 1 ) - 1 + 1));
    int crossoverPoint2 = (mid + 1) + (rand() % ( ( strlen(p1) - 1) - (mid + 1) + 1));
    for( int i = 0; i < strlen(p1); i++ ) {
        if( i <= crossoverPoint1) {
            offspring += p1[i];
        }
        else if(( i > crossoverPoint1) && ( i < crossoverPoint2)) {
            offspring += p2[i];
        }
        else {
            offspring += p1[i];
        }
    }
    // convert back string offspring to Chromosome object
}


Chromosome Scheduler::mutationProcess(Chromosome individual) {
    string target = individual.toStringChromosome();
    int range = strlen(target) - 0;
    int pos = 0 + (rand() % range + 1);
    string mutated = "";
    for( int i = 0; i < strlen(target); i++) {
        if( i == pos) {
            mutated += (target[i] ^ 1); // XOR to invert the bit
        }
        else {
            mutated += target[i];
        }
    }
}


Chromosome Scheduler::fitnessScoreEvaluator(Chromosome individual) {

}
