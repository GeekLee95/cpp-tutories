#include "Student.h"
#include <iostream>

int main(int argc, char** argv)
{
    Student s("a", 1, Female);
    Student a;
    std::cout << "Student" << s.get_name() << std::endl;
    return 0;
}
