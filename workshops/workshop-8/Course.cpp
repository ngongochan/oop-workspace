#include "Course.h"
#include "Person.h"

Course::Course() {}

Course::Course(int id, std::string name) {
    this->name = name;
    this->id = id;
}

void Course::addPerson(Person*p) {
    persons = new*Person[numPersons];
    if (currentNumPersons < numPersons) {
        persons[currentNumPersons] = p;
        currentNumPersons++;
    }
}

std::string Course::getName() {
    return name;
}

void setName(std::string name) {
    this->name = name;
}

int getID() {
    return id;
}

void setID(int id) {
    this->id = id;
}