#include "Enemy.h"
#include <stdio.h>
#include <Math.h>

// staticで宣言したメンバ関数ポインタテーブルの実体
void (Enemy::* Enemy::spFuncTable[])() = {
  &Enemy::Approach,	// 要素番号0
  & Enemy::Shot,	// 要素番号1
  & Enemy::Leave	// 要素番号1
};

void Enemy::Update()
{
	// メンバ関数ポインタに入っている関数を呼び出す
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	//(this->*spFuncTable[static_cast<int>(phase_)])();

	// 次のフェーズへ
	//phase_++;
	phase_ = static_cast<Phase>(static_cast<size_t>(phase_) + 1);
}

void Enemy::Approach()
{
	printf("Approach\n");
	//phase_ = Phase::Shot;
}

void Enemy::Shot()
{
	printf("Shot\n");
	//phase_ = Phase::Leave;
}

void Enemy::Leave()
{
	printf("Leave\n");
	//phase_ = Phase::Approach;
}
