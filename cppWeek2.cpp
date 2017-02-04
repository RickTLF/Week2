// cppWeek2.cpp : Defines the entry point for the console application.
//

////////////////////////////////////////////////////////////////////
// INCLUDES
////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "Provider.h"
#include "Mobiel.h"
#include "Sms.h"
////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////
// Theory
////////////////////////////////////////////////////////////////////
/*

Accessors vs Mutators
--------------------------

function (int someValue);
const -> do not change

Class::function(int someValue) 
	: field(someValue)		// Initializer list
{}

Vectors
--------------------------

std::vector<int> name

name.push_back();

squares[i]

Destructor
--------------------------

delete className // Explicitly delete instance

className copy = origin;	// constructor

className copy( origin );	// constructor

// Using call by value


Maps
--------------------------

#include <iostream>
#include <map>
#include <string>

map<std::string, double> salaries;

map<std::string, double> const_iterator itr;
itr = salaries.find("Mark");

if ( itr == salaries.end() ) {
	// do something
} else {
	// Do something else
	// itr->first.[something]
	// itr->second ...
}

Inheritance
--------------------------

(Base class)

virtual (all functions except constructor)

destructor: virtual	~Vorm

*/
////////////////////////////////////////////////////////////////////


int main()
{

	// Provider provides a list of 10 phones.

	// Provider receives the message

	// Provider sends sms to another phone

    return 0; 
}



