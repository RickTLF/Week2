#pragma once

#include "Mobiel.h"
#include "Sms.h"

class Provider {
	Mobiel *lijst;

public:
	void setLijst(Mobiel *lst);
	Mobiel *getMobiel(int nr);
	void verwerkBericht(const Sms &sms);

private:

};
