#include "DeathEater.h"
#include "Dementor.h"
#include "Load.h"

int main() {
    DeathEater* death_eaters[4];

    // 生成フェーズ
    for (int i = 0; i < 4; i++) {
       if (i != 3)
            death_eaters[i] = new Dementor;
       else
            death_eaters[i] = new Load;
    }

    printf("\n");

    // 攻撃フェーズ
    for (int i = 0; i < 4; i++) {
        death_eaters[i]->Attack();
    }

    printf("\n");

    // 破棄フェーズ
    for (int i = 0; i < 4; i++) {
        delete death_eaters[i];
    }

    return 0;
}

