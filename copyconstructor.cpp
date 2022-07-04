#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	// Copy constructor
	Point(const Point& p1)
	{
		x = p1.x;
		y = p1.y;
		cout << "copy constructor called ..." << std::endl;
	}

	int getX() { return x; }
	int getY() { return y; }
	void setX( int argx ) {  x = argx; }
	void setY( int argy ) {  y = argy; }

	 void add(Point& p)
    {
        x = x + p.x;
    }
};


int main()
{
	Point p1(10, 15); 
	Point p2(p1);
	Point p3 = p2;
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY()<<endl;
	cout << "\np3.x = " << p3.getX()
		<< ", p3.y = " << p3.getY()<<endl;


	p1.setX(11);
	p1.setY(21);

	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();

	p2 = p1; 

	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY()<<endl;
	 p2.add(p1);
	cout<<"Value of object p2: "<<p2.getX()<<endl;
	return 0;
}

