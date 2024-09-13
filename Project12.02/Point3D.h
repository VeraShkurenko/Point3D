#pragma once
#include<iostream>
using namespace std;


class Point3D
{
	int x;
	int y;
	int z;

public:

	static unsigned int count;

	Point3D(const int x, const int y, const int z);
	~Point3D();

	static void InfoAboutObjects();


	static Point3D GetCount();

	Point3D();
	/*Point3D(int x, int y, int z);*/
	void Init(int x, int y, int z);
	void Show();
	Point3D Sum(Point3D& b);
	Point3D Mult(Point3D& b);
	Point3D Div(Point3D& b);
	Point3D& Sum(int x, int y, int z);
	Point3D& Mult(int x, int y, int z);
	Point3D& Div(int x, int y, int z);


};

