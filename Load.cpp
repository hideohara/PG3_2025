#include "Load.h"

Load::Load()
{
	name = "ヴォルデモート卿";
	printf("%sがあらわれた\n", name);
}

Load::~Load()
{
	//printf("%sをたおした\n", name);
}

void Load::Attack()
{
	printf("%sをたおした\n", name);
}
