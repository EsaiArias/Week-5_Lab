/**********************
Lab: Week 5
Student first name: Esai
Student last name: Arias
***********************/
#include <iostream>
using namespace std;

class Vehicle {
public:
  void print() const;
  Vehicle(int = 0, int = 0);

private:
  int wheels;
  int doors;
}; // Vehicle

class Car : public Vehicle {
public:
  void print() const;
  Car(int = 0, int = 0, int = 0, string = "");

private:
  int MPG;
  string model;
};

class Truck : public Vehicle {
public:
  void print() const;
  Truck(int = 0, int = 0, int = 0, int = 0, string = "");

private:
  int MPG;
  int tons;
  string model;
}; // Truck

int main() {
  int MPG, tons, wheels, doors;
  string model;

  cout << "Enter car details\n";
  cout << "Number of wheels: ";
  cin >> wheels;
  cout << "Number of doors: ";
  cin >> doors;
  cout << "MPG: ";
  cin >> MPG;
  cout << "Model name: ";
  cin >> model; 
    
  Car Tesla (wheels, doors, MPG, model);// declare Car object

  cout << endl;
  cout << "Enter truck details\n";
  cout << "Number of wheels: ";
  cin >> wheels;
  cout << "Number of doors: ";
  cin >> doors;
  cout << "MPG: ";
  cin >> MPG;
  cout << "How many tons can the truck carry: ";
  cin >> tons;
  cout << "Model name: ";
  cin >> model; 
  
  Truck Tacoma (wheels, doors, MPG, tons, model);// declare Truck object

  cout << endl;

  Tesla.print();
  Tacoma.print();// call print function for your car and for your truck

  cout << "\nGoodbye\n";
  return 0;
}
void Truck::print() const {
  cout << model << " gets " << MPG << " miles per gallon, can carry " << tons << " tons, and has "; 
  Vehicle::print();
}

Truck::Truck(int W, int D, int milesPerGallon, int T, string name)
    : Vehicle(W, D) {
  MPG = milesPerGallon;
  tons = T;
  model = name;
}

void Car::print() const {
  cout << model << " gets " << MPG << " miles per gallon and has ";
  Vehicle::print();
}

Car::Car(int W, int D, int milesPerGallon, string name) : Vehicle(W, D) {
  MPG = milesPerGallon;
  model = name;
}

void Vehicle::print() const {
  cout << wheels << " wheels and " << doors << " doors.\n";
}

Vehicle::Vehicle(int W, int D) {
  wheels = W;
  doors = D;
}
/***************************************
YOUR OUTPUT:

Enter car details
Number of wheels: 4
Number of doors: 4
MPG: 50
Model name: tesla3

Enter truck details
Number of wheels: 8
Number of doors: 4
MPG: 20
How many tons can the truck carry: 5
Model name: tacoma

tesla3 gets 50 miles per gallon and has 4 wheels and 4 doors.
tacoma gets 20 miles per gallon, can carry 5 tons, and has 8 wheels and 4 doors.

Goodbye

SAMPLE OUTPUT:
Enter car details
Number of wheels: 4
Number of doors: 4
MPG: 36
Model name: Toyota

Enter truck details
Number of wheels: 18
Number of doors: 2
MPG: 22
How many tons can the truck carry: 5
Model name: Peterbilt

Toyota gets 36 miles per gallon and has 4 wheels and 4 doors.
Peterbilt gets 22 miles per gallon, can carry 5 tons, and has 18 wheels and 2
doors.

Goodbye
****************************************/
