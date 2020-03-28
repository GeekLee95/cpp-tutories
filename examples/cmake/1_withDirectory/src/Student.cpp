#include "Student.h"

void Student::set_name(const std::string name){
    this->name_ = name;
}

void Student::set_age(int age) {
    this->age_ = age;
}

void Student::set_gender(Gender gender) {
    this->gender_ = gender;
}

