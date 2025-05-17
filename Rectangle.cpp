#include "Rectangle.h"

Rectangle::Rectangle()
{
	width_ = 5.0f;
	height_ = 2.0f;
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	erea_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("長方形の面積：%f\n", erea_);
}

