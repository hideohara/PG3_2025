#pragma once
#include <stdio.h> 

// 死喰い人クラスの定義
class DeathEater
{

public: /* メンバ関数 */
	// コンストラクタ（宣言）
	DeathEater();
	// デストラクタ（宣言）
	 virtual ~DeathEater();
	//~DeathEater();
	// 攻撃（宣言）
	virtual void Attack();

protected: /* メンバ変数 */
	// 名前
	const char* name;
};
