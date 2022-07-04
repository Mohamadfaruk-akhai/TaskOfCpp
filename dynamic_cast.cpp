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
	Base b;	
    	Derived d1;
    	Base* bp = dynamic_cast<Base*>(&d1);
	Derived *d = dynamic_cast<Derived *>(&b);
	cout<<bp<<endl;
	cout<<d<<endl;
    return 0;
}
