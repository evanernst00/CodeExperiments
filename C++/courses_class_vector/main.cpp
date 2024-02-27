#include <iostream>
#include <vector>
#include <string>
#include "Course.hpp"
using namespace std;

int main()
{
    vector<Course*> Courses;

    Courses.push_back(new Course("CSCI200"));
    Courses.push_back(new Course("MATH121"));
    Courses.push_back(new Course("CSCI220"));
    Courses[0]->registerStudent();
    Courses[0]->registerStudent();
    Courses[1]->registerStudent();
    Courses[2]->registerStudent();
    Courses[2]->registerStudent();
    Courses[2]->withdrawStudent();

    for(size_t i = 0; i < Courses.size(); i++)
    {
        cout << "Course: " << Courses[i]->getTitle() 
        << " Enrollment: " << Courses[i]->getEnrollment() << endl;
    }

    return 0;
}
