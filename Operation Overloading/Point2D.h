#pragma once

class Point2D
{
private:
	float mX;
	float mY;

public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator + (const Point2D & other);
	Point2D operator - (const Point2D & other);
	Point2D operator * (const Point2D & other);
	Point2D operator * (float other);
	Point2D operator += (const Point2D & other);
	Point2D operator -= (const Point2D & other);
	float GetX();
	float GetY();
	void PrintPoint();
	bool operator == (const Point2D & other);
	Point2D Point2D::Add(Point2D point);
	
};