#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
    private:
        int id;
    public:
        Student();
        Student(std::string name, int id);

        int getID();
        void setID(int id);
};

#endif