#include "University.h"

University::University() {}

University::University(std::string name, std::string location) {
    this->name = name;
    this->location = location;
    
    courses = new Course[numCourses];

    gradebooks = new Gradebook[numGradebooks];
}

University::~University() {
    delete[] courses;
    delete[] gradebooks;
}

void University::addCourse(int id, std::string name) {
    courses[currentNumCourses] = Course(id, name);
    currentNumCourses++;
}

std::string University::getLocation() {
    return location;
}

void University::setLocation(std::string location) {
    this->location = location;
}

std::string University::getName() {
    return name;
}

void University::setName(std::string name) {
    this->location = location;
}