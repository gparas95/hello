//sum and product od digits

#include<iostream>
using namespace std;
int sum_digits(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	cout<<"the sum of digits "<<sum_digits(n);
}