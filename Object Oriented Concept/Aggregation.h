#include <iostream>

using namespace std;

class Address {

    public:
        string address, city, state;

        Address(string address, string city, string state) {
            this->address = address;
            this->city = city;
            this->state = state;
        }

        ~Address() {
            cout << "Address class Destructor is called" << endl;
        }

};

class Employee {

    private:
        Address *address;
    
    public:
        short id; string name;

        Employee(short id, string name, Address *address) {
            this->id = id;
            this->name = name;
            this->address = address;
        }

        ~Employee() {
            cout << "Employee class Destructor is called" << endl;
        }

        void display() {
            cout << "Id = " << id << endl;
            cout << "Name = " << name << endl;
            cout << "Address = " << address->address << endl;
            cout << "City = " << address->city << endl;
            cout << "State = " << address->state << endl;
        }

};

class Do {

    public:
        Do() {
            Address a("College Para", "Tangail", "Bangladesh");
            Employee e(12, "Rafi", &a);
            e.display();
        }

        ~Do() {
            cout << "Do class Destructor is called" << endl;
        }

};