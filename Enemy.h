#pragma once
class Enemy
{
public:
    // 行動フェーズ
    enum class Phase {
        Approach, // 接近する
        Shot,       // 射撃する
        Leave,    // 離脱する
    };

    void Update();

private:
    void Approach();

    void Shot();

    void Leave();

    // メンバ関数ポインタのテーブル
    static void (Enemy::* spFuncTable[])();

    Phase phase_;
};

