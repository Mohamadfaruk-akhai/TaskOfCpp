#include <iostream>
#include <stdlib.h>
using namespace std;
 
class twoStacks {
    int arr[15];
    int size=15;
    int top1=-1, top2=size;
 
public:
    void pushA(int x)
    {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        }
        else {
            cout << "Stack Overflow"<<endl;
            //exit(1);
        }
    }
    void pushB(int x)
    {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        }
        else {
            cout << "Stack Overflow"<<endl;
            //exit(1);
        }
    }
    	int popA()
    	{
        	if (top1 >= 0) {
            	int x = arr[top1];
            	top1--;
            	return x;
			
        }
        else {
            cout << "StackA UnderFlow"<<endl;;
            //exit(1);
        }
    }
    int popB()
    {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        }
        else {
            cout << "StackB UnderFlow"<<endl;;
            //exit(1);
        }
    }
void printEleOfStackA()
{	
	int temp=top1;
	if(top1==-1)
	{
		cout<<"No Element present in StackA"<<endl;
		return;
	}
	cout<<"Element present in StackA are: ";
	while(temp!=-1)
	{
		cout<<arr[temp]<<" ";
		temp--;	
	}
	cout<<endl;
} 
void printEleOfStackB()
{
	int temp=top2;
	if(temp==size)
	{
		cout<<"No Element present in StackB"<<endl;
		return;
	
	}
	cout<<"Element present in StackB are: ";
	while(temp!=size)
	{
		cout<<arr[temp]<<" ";
		temp++; 
	}
	cout<<endl;
} 	
};
int main()
{
    	twoStacks ts;
	int choice,ele;
	do
	{
		cout<<"1.To Push into Stack A\n2.To Push into Stack B\n3.To Pop from Stack A\n4.To Pop From Stack B\n5.To Print the eleme nt present in StackA\n6.To Print the eleme nt present in StackB\n7.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter the element you want to push into the stackA"<<endl;
				cin>>ele;
				ts.pushA(ele);
				cout<<"Element Pushed into StackA Succesfully"<<endl;
				break;
			case 2: cout<<"Enter the element you want to push into the stackB"<<endl;
				cin>>ele;
				ts.pushB(ele);
				cout<<"Element Pushed into StackB Succesfully"<<endl;
				break;
			case 3: ts.popA();
				break;
			case 4: ts.popB();
				break;
			case 5: ts.printEleOfStackA();
				break;
			case 6: ts.printEleOfStackB();
				break;
			case 7: break;
			default: cout<<"please Enter the valid choice"<<endl;
		}
	}while(choice!=7);
    return 0;
}
