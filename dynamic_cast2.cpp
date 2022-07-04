#include <exception>
#include <iostream>
using namespace std;
class Base {
	virtual void print()
	{
		cout << "Base" << endl;
	}
};
class Derived: public Base {
	void print()
	{
		cout << "Derived" << endl;
	}
};
int main()
{
	Derived d;
	Base b;
	try {
		Base& rb = dynamic_cast<Base&>(d);
		Derived& rd = dynamic_cast<Derived&>(b);
	}
	catch (std::exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}

