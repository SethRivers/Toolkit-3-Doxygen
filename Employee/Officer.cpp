/**
 * @file Officer.cpp
 * @author Unknown
 * @date 2024-12-06
 * @brief the cpp file for handling the data of officer employees 
 * 
 * 
 */

#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  //a parameter for how evil the officer is
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  //calls the Employee print function, and adds evilness
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  //Calculates pay based off of hourly rate and EEEEEVIIIIIIILLLLLL
  return (hourlyRate + evilness) * hoursWorked;
}
