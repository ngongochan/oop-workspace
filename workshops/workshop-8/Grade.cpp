#include "Grade.h"

Grade::Grade() {}

Grade::Grade(std::string assignment, int value) {
    this->assignment = assignment;
    this->value = value;
}

std::string Grade::getAssignment() {
    return assignment;
}

void Grade::setAssignment(std::string assignment) {
    this->assignment = assignment;
}

int Grade::getValue() {
    return value;
}

void Grade::setValue(int value) {
    this->value = value;
}