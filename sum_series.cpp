// sum of series 1 + 1/2 + 1/3 + 1/4 ...

#include<iostream>
using namespace std;
float sum_series(int n)
{
	float sum=0;
	for(float i=1; i<=n; i++)
		sum=sum+ 1.0/i;
	return sum;
}
int main()
{
	int n;
	cout<<"Enter the number ";
	cin>>n;
	cout<<"the sum of series is "<<sum_series(n);
}