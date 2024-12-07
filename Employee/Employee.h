/**
 * @file Employee.h
 * @author Unknown
 * @date 2024-12-06
 * @brief the .h file for the Employee file; readying whatever data bits are present inside. 
 * 
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * The employee class made to house the library of the Employee file
 *
 * @class Employee Employee.h "Employee/Employee.h"
 * @brief 
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; //years working in the company
  
 protected:
  double hourlyRate; //the hourly rate in which someone is paid
  float hoursWorked; // how many hours they have worked
 public:

/**
 * prints the data of the chosen employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * Calculates the pay for the week of this employee
 *
 * @pre 
 * @return virtual double
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * On the anniversary of an employee's career at the company, 
 * This function congratulates them and gives them a raise. 
 * 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary(); 

/**
 * Constructor for the Employee file
 * 
 */
  Employee();

/**
 * Loads in the data of an employee 
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
