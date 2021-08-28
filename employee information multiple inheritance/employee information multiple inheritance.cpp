#include <iostream>
#include<string>
using namespace std;


class employee_information {
public:
	string employee_name;
	int employee_salary;

};

class employee_address {
public:
	string employee_address;

};
class employee_input_output : public employee_information, public employee_address {
public:
	void input() {
		cout << "enter name of the employee" << endl;
		cin >> employee_name;
		cout << "enter employee's salary" << endl;
		cin >> employee_salary;
		cout << "enter employe's address" << endl;
		cin >> employee_address;
	};

	void output() {
		cout << "name of the employee is..." << employee_name << endl;
		cout << "salary of the employee is..." << employee_salary << endl;
		cout << "address of the employee is..." << employee_address << endl;
	};
};

int main() {
	employee_input_output obj;

	obj.input();
	obj.output();




}