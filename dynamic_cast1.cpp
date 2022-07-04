#include <iostream>
using namespace std;
class Base {
	virtual void print()
	{
		cout << "Base" << endl;
	}
};
class Derived : public Base {
	void print()
	{
		cout << "Derived1" << endl;
	}
};
int main()
{
	Base* pbd = new Derived;
	Base* pbb = new Base;
	Derived* pd;
	pd=dynamic_cast<Derived*>(pbd);
	cout<<pd<<endl;
	pd=dynamic_cast<Derived*>(pbb);
	cout<<pd<<endl;
	return 0;
}

