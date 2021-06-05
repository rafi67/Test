#include <iostream>
#include "Encapsulation.h"

using namespace std;

int main() {

    Employee object;
    object.setSalary(12000);

    cout << "Salary is " << object.getSalary() << endl;
    
    return 0;

}