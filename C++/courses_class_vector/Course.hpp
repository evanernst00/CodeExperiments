#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>

class Course
{
    private:
        int enrollment;
        std::string title;
    public:
        Course();
        Course(std::string);
        Course(std::string, int);
        std::string getTitle();
        int getEnrollment();
        void registerStudent();
        void withdrawStudent();
};

#endif // COURSE_HPP
