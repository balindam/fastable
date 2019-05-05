#ifndef BATCH_H_INCLUDED
#define BATCH_H_INCLUDED

#include<iostream>
#include<vector>
#include<iterator>
#include<map>
#include<list>

class Batch
{
protected:
    string batchID;
    int bsize;
    list<Course> courseOpted;
    string major;
};

#endif // BATCH_H_INCLUDED
