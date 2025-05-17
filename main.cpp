#include <stdio.h>

template <typename T1, typename T2>
class Min {
public:
    T1 num1;
    T2 num2;

    Min(T1 num1, T2 num2) : num1(num1), num2(num2){}
    // ※ページ都合でheader内で定義している

    T1 Size() {
        if (num1 < num2)
            return static_cast<T1>(num1);
        else
            return static_cast<T1>(num2);
    }
};

int main() {
    Min<int,int> minIntInt(10, 20);
    Min<float, float> minFloatFloat(1.2f, 3.4f);
    Min<double, double> minDoubleDouble(1.2, 3.4);
    Min<int, float> minIntFloat(10, 20.5f);
    Min<int, double> minIntDouble(10, 5.5);
    Min<float, double> minFloatDouble(10.3f, 5.5);
    printf("int, int 小さい値は%d\n", minIntInt.Size());
    printf("float, float 小さい値は%f\n", minFloatFloat.Size());
    printf("double, double 小さい値は%lf\n", minDoubleDouble.Size());
    printf("int, float 小さい値は%d\n", minIntFloat.Size());
    printf("int, double 小さい値は%d\n", minIntDouble.Size());
    printf("float, double 小さい値は%f\n", minFloatDouble.Size());
    return 0;
}
