
#include <stdio.h>

// 関数テンプレートを使用して小さい値を返す
template <typename Type>
Type Min(Type num1, Type num2) {
	if (num1 < num2) {
		return static_cast<Type>(num1);
	}
	else {
		return static_cast<Type>(num2);
	}
}

template <>
char Min<char>(char a, char b) {
	printf("文字処理\n");
	return ' ';
}


// メイン処理
int main() {
	// 整数で呼び出す
	printf("小さい値は%d\n", Min<int>(114, 514));
	// 小数で呼び出す
	printf("小さい値は%f\n", Min<float>(11.4f, 51.4f));
	// doubleで呼び出す
	printf("小さい値は%f\n", Min<double>(11.4, 51.4));
	// 文字で呼び出す
	printf("%c\n", Min<char>('1', '2'));
	return 0;
}
