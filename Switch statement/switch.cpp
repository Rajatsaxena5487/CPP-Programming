#include<iostream>
using namespace std;
int main()
{
	int a,b,n;
	cout<<"Enter the value of a:-";
	cin>>a;
	cout<<"Enter the value of b:-";
	cin>>b;
	cout<<"1.)Addition\n";
	cout<<"2.)Subtraction\n";
	cout<<"3.)Multiplication\n";
  	cout<<"4.)Division\n";
	cout<<"Enter the choice:-";
	cin>>n;

	switch(n)
	{
		case 1: {
				int c=a+b;
				cout<<c;
		      	break;
		      }
		case 2:{
				int d=a-b;
				cout<<d;
		      	break;
           		}
	 	case 3 :{
				int e=a*b;
		      	cout<<e;
				break;	
				}
		case 4: {	
				int f=a/b;
		      	cout<<f;
				break;
			}
		default:{
			
		cout<<"The choice is not present.!";
	              break;}      	
	}
		return 0;
}

