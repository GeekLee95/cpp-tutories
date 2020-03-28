#include "Student.h"
#include <iostream>

int main(int argv, char **argc) {
    Student s("a",1, Female );
	std::cout << "Student" << s.get_name() << std::endl;
	return 0;
}
