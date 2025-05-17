#include "Dementor.h"

Dementor::Dementor()
{
	name = "ディメンター";
	printf("%sがあらわれた！\n", name);
}

Dementor::~Dementor()
{
	//printf("%sをたおした\n", name);
}

void Dementor::Attack()
{
	printf("%sの吸魂鬼のキス\n", name);
}
