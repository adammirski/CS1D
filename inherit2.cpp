//
// Created by Adam Mirski on 1/27/25.
//
#include <iostream>
#include "inherit2.h"
using namespace std;

void personType::print() const {
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

void personType::getName(string &first, string &last) {
    first = firstName;
    last = lastName;
}

personType::personType(string first, string last) {
    firstName = first;
    lastName = last;
}

personType::personType() {
    firstName = "";
    lastName = "";
}