#include <string>
enum Gender { Male = 1,
    Female = 2 };
class Student {
public:
    Student() {}
    Student(std::string n, int a, Gender g)
	: name_(n)
	, age_(a)
	, gender_(g)
    {
    }
    void set_name(const std::string name);
    void set_age(int age);
    void set_gender(Gender gender);
    inline std::string get_name() { return this->name_; }
    inline int get_age() { return this->age_; }
    inline Gender get_gender() { return this->gender_; }
private:
    std::string name_;
    int age_;
    Gender gender_;
};
