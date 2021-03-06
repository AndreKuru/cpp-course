#ifndef SCHOOL_FUNCTIONS_H
#define SCHOOL_FUNCTIONS_H


#include "student.h"
#include <vector>
#include <iosfwd>


namespace school {

std::vector<Student> approved(std::vector<Student> const& students);
std::vector<Student> dismissed_by_time(std::vector<Student> const& students, int actual_year);
std::vector<Student> read_students(std::istream& in);

}
#endif