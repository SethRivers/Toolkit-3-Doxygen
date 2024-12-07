/**
 * @file Officer.h
 * @author Unknown
 * @date 2024-12-07
 * @brief the .h file used to ready the parameters used in the Officer file
 * 
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness; //Measure of officer's nefarious actions
 public:
   

/**
 * prints out the officer's information
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();
  

/**
 * calculates the pay of the officer using hourly rate and SHEER DASTERDLY BEHAVIOR
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();
  

/**
 * constructor for the officer file
 *
 * @pre 
 * @post 
 * 
 */
  Officer();
  

/**
 * extracts the information data of the officer. Which includes CURSED DEEDS
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre 
 * @post 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
