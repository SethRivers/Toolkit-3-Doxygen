/**
 * @file Supervisor.cpp
 * @author Unknown
 * @date 2024-12-07
 * @brief the supervisor file for calculating the pay and data of supervisors
 * 
 * 
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
  numSupervised = -1;//amount of people supervised
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

void Supervisor::print() {
  //calls the employee data of the supervisor, and adds how many people they supervised. 
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  //the pay of a supervisor is over double that of a normal employee, as seen by this equation. This company must be Amazon. 
  val = val + val * (.01 * numSupervised);
  return val;
}
