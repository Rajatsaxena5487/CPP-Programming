#include <iostream>
using namespace std;
class A
{
	public :void add(int a,int b)
	{
		int c=a/b;
		cout<<"Division:="<<c;
	}
};

int main()
{
	A ob;
    int a,b;
	cout<<"Enter the value of a&b";
	cin>>a>>b;
	ob.add(a,b);
	return 0;
}
