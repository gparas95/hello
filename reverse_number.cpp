// reverse a number

#include<iostream>
using namespace std;
int rev_digits(int n)
{
	int rev=0;
	while(n>0)
	{
		rev*=10;
		rev=rev+(n%10);
		
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	cout<<"the reverse of number "<<rev_digits(n);
}