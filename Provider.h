#pragma once
// #include "Mobiel.h"
// #include "Sms.h"

class Mobiel;

class Provider {
private:
	Mobiel *lijst;

public:
	// Provider(Mobiel *lst);
	void setLijst(Mobiel *lst);
	// Mobiel *getMobiel(int nr);
	// void verwerkBericht(const Sms &sms);
};
