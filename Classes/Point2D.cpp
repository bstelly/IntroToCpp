#include "Point2D.h"

Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}

Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}

Point2D Point2D::Add(Point2D point)
{
	Point2D newPoint;
	newPoint.mX = mX + point.mX;
	newPoint.mY = mY + point.mY;
	return newPoint;
}