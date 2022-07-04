#include <iostream>
using namespace std;
class student
{
private:
    int roll;
public:
    void fun(int n) const
    {
        const_cast <student*> (this)->roll = n;
    }
	   int getRoll()  { return roll; }
};
int fun(int* ptr)
{
	*ptr=30;
	return (*ptr);
}
int main(void)
{
	const int val = 10;
	const int *ptr = &val;
	int *ptr1 = const_cast <int *>(ptr);
	cout<<"*ptr= "<<ptr<<end;
	cout <<"function call value= "<<fun(ptr1)<<endl;
	//cout<<"*ptr= "<<ptr<<end;
 	student s;
    	cout << "Old roll number: " << s.getRoll() << endl;
  
    	s.fun(3);
  
    	cout << "New roll number: " << s.getRoll() << endl;
	int *ptr2 = const_cast <int *>(ptr);
	*ptr2 = 20;
	cout<<val<<endl;
	cout<<*ptr2<<endl;
	return 0;
}

