#include <bits/stdc++.h>
using namespace std;
  
class Employee
{
public:
     void display ()
    { cout<< "Employee Class" <<endl; }
     void show ()
    { cout<< "show Base class" <<endl; }
};
   
class Engineer:public Employee
{
public:
    void display() 
    { cout<< "Engineer class" <<endl; }
   
    void show ()
    { cout<< "show derived class" <<endl; }
};
  
//main function
int main() 
{
    Employee *ptr;
    Engineer E;
    ptr = &E;
    ptr->display();
    ptr->show(); 
    cout<<"employee class size is"<<sizeof(Employee)<<endl;
    return 0;
} 
