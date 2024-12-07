/**
 * @file Supervisor.h
 * @author Unknown
 * @date 2024-12-07
 * @brief the .h file of the supervisor file
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised; //amount of supervised individuals
 public:
  

/**
 * prints the data of the supervisor
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates the pay of the supervisor
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

/**
 * constructor of the supervisor program
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();

/**
 * collects the data on a supervisor
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
