#include <iostream>
using namespace std;
class A
{
	public: void print()
	{
		cout<<"Class A ";
	}
};
 class B:public A
 {
 	public: void display()
 	{
 		cout<<"class B";
 		
	 }
};
 int main()
{
	B ob;
    ob.print();
   ob.display();
	return 0;
}
