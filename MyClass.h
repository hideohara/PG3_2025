#pragma once


class MyClass
{
public :
	void Func();

private:
	// メンバ関数ポインタのテーブル
	static void (MyClass::* spFuncTable[])();

	void Func1();
	void Func2();

};

