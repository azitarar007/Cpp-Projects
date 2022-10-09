#include<iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
	int a,b;
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	
	cout<<"\nBefore swaping A: "<<a<<endl;
	cout<<"Before swaping B: "<<b<<endl;
	
	swap(&a,&b);
	cout<<"\nAfter swaping A: "<<a<<endl;
	cout<<"After swaping B: "<<b<<endl;
	
	system("pause");
	return 0;
		
}
void swap(int *x, int *y)
{
	int tempo;
	tempo=*x;
	*x=*y;
	*y=tempo;
}
