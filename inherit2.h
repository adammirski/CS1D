//
// Created by Adam Mirski on 1/27/25.
//
#ifndef H_PersonType
#define H_PersonType

#include <string>
using namespace std;

/**
 * @class personType
 * @brief Represents a person with a first and last name.
 */
class personType {
public:
    /**
     * @brief Outputs the full name of the person.
     */
    void print() const;

    /**
     * @brief Sets the first and last name of the person.
     * @param first The first name.
     * @param last The last name.
     */
    void setName(string first, string last);

    /**
     * @brief Gets the first and last name of the person.
     * @param first Reference to store the first name.
     * @param last Reference to store the last name.
     */
    void getName(string &first, string &last);

    /**
     * @brief Constructor with parameters.
     * @param first The first name.
     * @param last The last name.
     */
    personType(string first, string last);

    /**
     * @brief Default constructor.
     */
    personType();

private:
    string firstName; ///< The first name of the person.
    string lastName;  ///< The last name of the person.
};

#endif