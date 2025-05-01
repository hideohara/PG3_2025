#include "DeathEater.h"

// コンストラクタ
DeathEater::DeathEater()
{
	name = "DeathEater";
	//printf("コンストラクタ\n");
}

// デストラクタ
DeathEater::~DeathEater()
{
	//printf("デストラクタ\n");
	printf("%sをたおした\n", name);
}


void DeathEater::Attack()
{
	printf("Attack\n");
}
