#include "Point3D.h"
#include<iostream>
using namespace std;

unsigned int Point3D::count = 0U;

Point3D Point3D::GetCount()
{
	return Point3D();
}

Point3D::Point3D()
{
	x = y = z = 0;
}

//Point3D::Point3D(int x, int y, int z)
//{
//	this->x = x;
//	this->y = y;
//	this->z = z;
//
//}




Point3D::Point3D(const int x, const int y, const int z) : x(x), y(y), z(z)
{
	++count;
}

Point3D::~Point3D()
{
	--count;
}

void Point3D::InfoAboutObjects()
{
	cout << "Live objects: " << count << endl;
}


void Point3D::Init(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::Show()
{
	cout << "\tx: " << x << "\ty: " << y << "\tz: " << z << endl;
}

Point3D Point3D::Sum(Point3D& b)
{
	Point3D rez;
	rez.x = x + b.x;
	rez.y = y + b.y;
	rez.z = z + b.z;
	return rez;
}

Point3D Point3D::Mult(Point3D& b)
{
	Point3D rez;
	rez.x = x * b.x;
	rez.y = y * b.y;
	rez.z = z * b.z;
	return rez;
}

Point3D Point3D::Div(Point3D& b)
{
	Point3D rez;
	rez.x = x - b.x;
	rez.y = y - b.y;
	rez.z = z - b.z;
	return rez;;
}

Point3D& Point3D::Sum(int x, int y, int z)
{
	this->x += x;
	this->y += y;
	this->z += z;
	return *this;


}

Point3D& Point3D::Mult(int x, int y, int z)
{
	this->x *= x;
	this->y *= y;
	this->z *= z;
	return *this;
}

Point3D& Point3D::Div(int x, int y, int z)
{
	if (x != 0) this->x /= x;
	if (y != 0) this->y /= y;
	if (z != 0) this->z /= z;
	return *this;
}
