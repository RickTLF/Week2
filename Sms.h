#pragma once
#include <iostream>

using namespace std;

class Sms {
	int van;
	int naar;
	string tekst;

public:
	Sms(int van, int naar, string tekst);
	int getNaar();
	string smsInfo();

private:
};
