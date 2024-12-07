/**
 * @file Employee.cpp
 * @author Unknown
 * @date 2024-12-06
 * @brief The Employee file - which will handle the data modification of each regular employee
 * 
 * 
 */

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  //extracts the ID data from file
  this->ID = ID;
  //extracts the years working there from file
  this->years = years;
  //Extracts the hourly rate data from file
  this->hourlyRate = hourlyRate;
  //extracts the worked hours data from file
  this->hoursWorked = hoursWorked;
}

void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

void Employee::anniversary() {
  //adds a year to the employee's file
  years++;
  //in accordance to company policy, with every year you work at the company, your pay goes up. 
  hourlyRate = hourlyRate + hourlyRate * .002;
  //Little automated and impersonal congratulation message for the employee
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

double Employee::calculatePay() {
  //calculates how much the company owes the employee
  return hourlyRate * hoursWorked;
}

