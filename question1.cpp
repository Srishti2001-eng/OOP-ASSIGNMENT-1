//WAP using Employee with members name, employee No, dept and salary. Demonstrate the use of inline functions and overloaded functions.
#include <iostream>
using namespace std;

class Employee
{
	public:
	string name,dept;
	float number, salary;
	inline void display(const std::string &str)
    {
		cout << "Name : " << str << endl;
	}
	inline void display(float num)
    {
		cout << "Number : " << num << endl;
	}
	inline void display(const std::string &str, float num)
    {
		cout << "Department : " << str << "\nSalary : " << num << endl;
	}
};
int main(void)
{
	Employee obj;
	obj.name = "MICHAEL";
	obj.dept = "SCIENTIST";
	obj.number = 456;
	obj.salary = 5000000;
	obj.display(obj.name);
	obj.display(obj.number);
	obj.display(obj.dept, obj.salary);
	return 0;
}
