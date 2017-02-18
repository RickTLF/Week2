// cppWeek2.cpp : Defines the entry point for the console application.
//

////////////////////////////////////////////////////////////////////
// INCLUDES
////////////////////////////////////////////////////////////////////

#pragma once

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

#include "Provider.h"
#include "Mobiel.h"
// #include "Sms.h"
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

Pointers
--------------------------

C++ provides two pointer operator:
- Address of operator
- Indiraction operator *

Pointer is a variable that contains the address
of another variable

*/
////////////////////////////////////////////////////////////////////


using namespace std;


int main()
{
	// zero-initialized elements of Mobiel
	std::vector<Mobiel>mobileVector;

	// Mobiel *mo = nullptr;		// Used for testing purposes only.

	// Provider provider(mo);

	// Add mobile phones to list
	for (int i = 0; i < 10; i++) {
		Mobiel mobiel(i); ///&provider, i);
		mobileVector.push_back(mobiel);
	}

	for (size_t j = 0; j < mobileVector.size(); j+=1) {
		std::cout << "test: " << mobileVector[j].mobielInfo() << std::endl;
	}

	// std::vector<Mobiel>::size_type sz = mobileVector.size();

	// Every phone has a unique number
	// Every provider has ten phones
	// A phone belongs to a provider
	// the phone uses sms
	// Provider ref -> phone ref -> sms

	

	// Provider provides a list of 10 phones.
	// What type of list?
	// What is the pointer Mobiel * lijst for?
	// How do I set the list?

	// Provider provider;

	// Provider receives the message

	// Provider sends sms to another phone
	cin.get();

    return 0; 
}

/*int myVar = 5;
int *address = &myVar;
int valueAtAddress = *address;

cout << myVar << " has address: "
<< address << " and value: " << valueAtAddress;*/



