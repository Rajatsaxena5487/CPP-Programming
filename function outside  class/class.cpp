#include <iostream>
using namespace std;
class A
{
public: void print();
};

void A::print()
{
	cout<<"Hello";
}

int main()
{
	A ob;
    ob.print();
	return 0;
}
