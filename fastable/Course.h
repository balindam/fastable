#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED

#include<iostream>
#include<vector>
#include<iterator>
#include<map>
#include<list>

class Course
{
protected:
    string courseID;
    string courseName;
    //int credits;
    string typeRequired;
    list<Teacher> taughtBy;
};

#endif // COURSE_H_INCLUDED
