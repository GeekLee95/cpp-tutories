#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;
int main(int argv, char** argc)
{
    std::vector<int> q;
    std::vector<float> f;
    Student s("a", 1, Female);
    std::cout << "Student" << s.get_name() << std::endl;
    return 0;
}
