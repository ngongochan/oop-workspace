#include <iostream>

#include "University.h"
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"
#include "Grade.h"

int main() {
    University UoA("The University of Adelaide", "Adelaide");
    UoA.addCourse(1102, "OOP");
}