// sum of series 1 - 2 + 3 - 4 + ...

#include<iostream>
using namespace std;
int sum_series(int n)
{
	int sum=0;
	for(int i=1; i<=n; i++)
	{
		if(i%2==0)
			sum=sum-i;
		else
			sum=sum+i;
	}
	return sum;
}

int main()
{
	int n;
	cout<<"Enter the number ";
	cin>>n;
	cout<<"the sum of series is "<<sum_series(n);
}