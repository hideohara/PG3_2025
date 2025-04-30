#include <stdio.h>

template <typename T>
class Min {
public:
    T num1;
    T num2;

    Min(T num1, T num2) : num1(num1), num2(num2){}
    // ※ページ都合でheader内で定義している

    T Size() {
        if (num1 < num2)
            return num1;
        else
            return num2;
    }
};

int main() {
    Min<int> minInt(10, 20);
    Min<float> minFloat(1.2f, 3.4f);
    Min<double> minDouble(1.2, 3.4);
    printf("int 小さい値は%d\n", minInt.Size());
    printf("float 小さい値は%f\n", minFloat.Size());
    printf("double 小さい値は%lf\n", minDouble.Size());
    return 0;
}
