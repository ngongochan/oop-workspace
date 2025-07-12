#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Person.h"

class Course {
    private: 
        std::string name;
        int id;
        Person** persons;
        
        int numPersons = 10;
        int currentNumPersons = 0;

    public:
        Course();
        Course(int id, std::string name);

        void addPerson(Person*p);

        std::string getName();
        void setName(std::string name);

        int getID();
        void setID(int id);
};

#endif