// prog for longest increasing subsequence
#include<iostream>
using namespace std;
int LIS(int A[], int n)
{
	int I[n];
	for(int i=0; i<n; i++)
		I[i]=1;
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(A[i]>A[j] && I[j]+1>I[i])
				I[i]=I[j]+1;

		}
	}
	int max=0;
	for(int i=0; i<n; i++)
	{
		//cout<<I[i]<<" ";
		if(max<I[i])
			max=I[i];
	}
	cout<<endl;
	return max;
}
int main()
{
	int A[10],n;
	cout<<"Enter the number of terms in array";
	cin>>n;
	cout<<"\n Enter the elements of the array";
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	int lon=LIS(A,n);
	cout<<"longest increasing subsequence is"<<lon;
}