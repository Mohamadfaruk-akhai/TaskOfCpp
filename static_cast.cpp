#include <iostream>
using namespace std;
class Base {
    int x;
  
public:
    Base(int x_in = 0)
        : x{ x_in }
    {
        cout << "Conversion Ctor called" << endl;
    }
    operator string()
    {
        cout << "Conversion Operator" << endl;
        return to_string(x);
    }
};
class Derived : private Base { // Inherited private/protected not public
};
int main()
{
    	char c; 
    	int* q = (int*)&c; // pass at compile time, may fail at run time
	*q=3;
    	//int* p = static_cast<int*>(&c);
	//cout<<*q<<endl;
	//cout<<q<<endl;
 	Base obj(3);
    	string str = obj;
    	obj = 20;
    	string str2 = static_cast<string>(obj);
    	obj = static_cast<Base>(30);
	int i=10;
	void * V= static_cast<void*>(&i); // to void*
	int * p1= static_cast<int*>(V); // from void*
	Derived d1;
    	Base* b1 = (Base*)(&d1); // allowed
    	//Base* b2 = static_cast<Base*>(&d1); // This will give an error as is-a relationship is not followed
    	return 0;
    return 0;
}
