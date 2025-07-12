#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

#include "Person.h"
#include "Course.h"
#include "Gradebook.h"

class University {
    private:
        std::string location;
        std::string name;

        Course* courses;
        Gradebook* gradebooks;

        int numCourses = 4;
        int currentNumCourses = 0;

        int numGradebooks = 10;
        int currentNumGradebooks = 0;

    public:
        University();
        University(std::string name, std::string location);

        ~University();
        
        void addCourse(int id, std::string name);

        std::string getLocation();
        void setLocation(std::string location);

        std::string getName();
        void setName(std::string name);
};

#endif