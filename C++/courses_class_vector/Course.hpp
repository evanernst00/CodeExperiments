#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>

class Course
{
    private:
        int enrollment;
        string title;
    public:
        Course();
        Course(string);
        Course(string, int);
        string getTitle();
        int getEnrollment();
        void registerStudent();
        void withdrawStudent();
};

#endif // COURSE_HPP