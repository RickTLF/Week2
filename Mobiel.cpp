#include "stdafx.h"
#include "Mobiel.h"
// #include <iostream>


Mobiel::Mobiel(int telnr) { // Provider *provider = nullptr, int telnr = 0) {
	telnr = telnr;
}
/*
void Mobiel::ontvang(const Sms & sms) {

}

void Mobiel::verzend(string tekst, int naar) {

}*/

string Mobiel:: mobielInfo() const {
	return to_string(telnr); // "Test string."
}