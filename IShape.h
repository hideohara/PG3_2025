#pragma once
#include <stdio.h>

// 基底クラス（インターフェイス）
class IShape
{
public:
	// 面積の計算
	virtual void Size() = 0;

	// 描画
	virtual void Draw() = 0;

protected:
	// 面積
	float erea_;
};

