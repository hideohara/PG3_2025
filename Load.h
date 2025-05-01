#pragma once
#include "DeathEater.h"

// Loadクラスの定義
class Load : public DeathEater {
public: /* メンバ関数 */
	// コンストラクタ（宣言）
	Load();
	// デストラクタ（宣言）
	~Load();
	// 攻撃（宣言）
	void Attack() override;

private: /* メンバ変数 */
};

