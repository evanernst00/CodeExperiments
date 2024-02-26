#include "Course.hpp"
#include <string>
using namespace std;

Course::Course()
{
    enrollment = 0;
}

Course::Course(string courseTitle)
{
    title = courseTitle;
    enrollment = 0;
}

Course::Course(string courseTitle, int courseEnrollment)
{
    title = courseTitle;
    enrollment = courseEnrollment;
}

string Course::getTitle()
{
    return title;
}

int Course::getEnrollment()
{
    return enrollment;
}

void Course::registerStudent()
{
    enrollment++;
}

void Course::withdrawStudent()
{
    enrollment--;
}
