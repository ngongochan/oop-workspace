#include "Student.h"

Student::Student() {}

Student::Student(std::string name, int id) {
    this->name = name;
    this->id = id;
}

int Student::getID() {
    return id;
}

void Student::setID(int id) {
    this->id = id;
}