#pragma once

#include "stdafx.h"
#include "Mobiel.h"
#include "Provider.h"

#include <iostream>
#include <string>

using namespace std;

class Mobiel {
	int telnr;
	Provider * provider;
	Sms bericht;	// for one sms message

public:
	Mobiel(Provider *provider = nullptr, int telnr = 0);
	void ontvang(const Sms & sms);
	void verzend(string tekst, int naar);
	string mobielInfo() const; // returns string with info

private:

};