#ifndef SCHOOL_FUNCTIONS_H
#define SCHOOL_FUNCTIONS_H


#include <vector>
#include "student.h"


namespace school {

std::vector<Student> approved(std::vector<Student> const& students);
std::vector<Student> dismissed_by_time(std::vector<Student> const& students, int actual_year);

}
#endif