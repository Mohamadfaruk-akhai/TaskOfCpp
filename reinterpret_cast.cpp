#include <iostream>
using namespace std;
class A {
public:
	int x1,x2;
	A():x1(10),x2(20){}
    void printA()
    {
        cout << "x1= "<<x1<<" x2= "<<x2<<endl; ;
    }
};
 
class B {
public:
   char c;
	B():c('A'){}
    void printB()
    {
        cout << "c= "<<c<<endl; ;
    }
};
struct S{
	int i1;
	int i2;
	char c;
	bool b;
};
int main()
{
	int a=70;
	int* p =&a;
	char* ch = reinterpret_cast<char*>(p);
	cout << *p << endl;
	cout << *ch << endl;
	int* p1 = reinterpret_cast<int*>(a);
	cout<<p1<<endl;
	cout<<reinterpret_cast<long>(p1)<<endl;
	A a1;
	B b1;
	A* PA = reinterpret_cast<A*>(&b1);
	B* PB = reinterpret_cast<B*>(&a1);
	PA->printA();
	PB->printB();
	A* PA1 = reinterpret_cast<A*>(PB);
	B* PB1 = reinterpret_cast<B*>(PA);
	PA1->printA();
	PB1->printB();
	const int* p2 =&a;
	const char* c1 = reinterpret_cast<const char*>(p2);
	S s;
	s.i1=10;
	s.i2=20;
	s.c='B';
	s.b=true;
	int* ps = reinterpret_cast<int*>(&s);
	cout<<*ps<<endl;
	ps++;
	cout<<*ps<<endl;
	ps++;
	char* psc = reinterpret_cast<char*>(ps);
	cout<<*psc<<endl;
	psc++;
	bool* psb = reinterpret_cast<bool*>(psc);
	cout<<*psb<<endl;
	return 0;
}

