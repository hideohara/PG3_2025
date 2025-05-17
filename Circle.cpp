#include "Circle.h"

Circle::Circle()
{
	radius_ = 3;
}

Circle::~Circle()
{
}

void Circle::Size()
{
	erea_ = 3.14f * radius_ * radius_;
}

void Circle::Draw()
{
	printf("円の面積：%f\n", erea_);
}
