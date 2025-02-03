//
// Created by Adam Mirski on 1/27/25.
//

#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "inherit2.h"

/**
 * @class partTimeEmployee
 * @brief Represents a part-time employee, derived from personType.
 */
class partTimeEmployee : public personType {
public:
    /**
     * @brief Outputs the name and wages of the employee.
     */
    void print();

    /**
     * @brief Calculates and returns the wages of the employee.
     * @return The calculated wages.
     */
    double calculatePay();

    /**
     * @brief Sets the employee's details: name, pay rate, and hours worked.
     * @param first The first name.
     * @param last The last name.
     * @param rate The pay rate.
     * @param hours The number of hours worked.
     */
    void setNameRateHours(string first, string last, double rate, double hours);

    /**
     * @brief Constructor with parameters.
     * @param first The first name.
     * @param last The last name.
     * @param rate The pay rate.
     * @param hours The number of hours worked.
     */
    partTimeEmployee(string first, string last, double rate, double hours);

    /**
     * @brief Default constructor.
     */
    partTimeEmployee();

private:
    double payRate;     ///< The pay rate of the employee.
    double hoursWorked; ///< The number of hours worked by the employee.
};

#endif