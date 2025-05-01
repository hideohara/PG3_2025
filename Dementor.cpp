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
	printf("%sの『お辞儀を　するのだ！』\n", name);
}
