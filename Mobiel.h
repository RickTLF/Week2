#pragma once

#include "stdafx.h"
#include "Mobiel.h"
#include "Provider.h"

#include <iostream>
#include <string>

using namespace std;

class Mobiel {

private:
	int telnr;
	//Provider provider;
	//Sms bericht;	// for one sms message

public:
	// Mobiel();
	Mobiel(int telnr = 0); // Provider *provider = nullptr, int telnr = 0) {
	string mobielInfo() const; // returns string with info
	//void ontvang(const Sms & sms);
	//void verzend(string tekst, int naar);
	

// private:

};