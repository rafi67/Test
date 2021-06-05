#include <iostream>

using namespace std;

class Employee {

    short salary;

    public:
        void setSalary(short s) {
            salary = s;
        }

        short getSalary() {
            return salary;
        } 

};