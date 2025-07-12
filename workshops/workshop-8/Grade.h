#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
    private:
        std::string assignment;
        int value;
        int student_id;
        int course_id;
    public:
        Grade();
        Grade(std::string assignment, int value);

        std::string getAssignment();
        void setAssignment(std::string assignment);

        int getValue();
        void setValue(int value);

};

#endif