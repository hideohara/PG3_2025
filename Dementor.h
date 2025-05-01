#pragma once
#include "DeathEater.h"

// スライムクラスの定義
class Dementor : public DeathEater {
public: /* メンバ関数 */
	// コンストラクタ（宣言）
	Dementor();
	// デストラクタ（宣言）
	~Dementor();
	// 攻撃（宣言）
	void Attack() override;

private: /* メンバ変数 */
};

