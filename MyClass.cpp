#include "MyClass.h"

#include <stdio.h>


// staticで宣言したメンバ関数ポインタテーブルの実体
void (MyClass::* MyClass::spFuncTable[])() = {
  &MyClass::Func1,	// 要素番号0
  &MyClass::Func2	// 要素番号1
};

void MyClass::Func()
{
	// 呼び出し
	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();

}

void MyClass::Func1()
{
	printf("Func1\n");
}

void MyClass::Func2()
{
	printf("Func2\n");

}
