#include "Point3D.h"
#include<iostream>
using namespace std;

int main()
{

	Point3D p1(1, 2, 3);
	Point3D p2(4, 5, 6);
	Point3D p3(7, 8, 9);

	p1.Show();
	p2.Show();
	p3.Show();


	{
		Point3D p4(4, 5, 6);
		Point3D p5(7, 8, 9);

		cout << "\t{" << endl;

		p4.Show();
		p5.Show();

		cout << "\t}" << endl;


	}


	cout << "Live objects: " << Point3D::count << endl;

	Point3D p4(10, 2, 9); 
	p4.Show();

	cout << "Count: " << Point3D::GetCount() << endl;
}