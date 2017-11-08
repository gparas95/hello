// Prog to find the logest continuous substring
#include<iostream>
using namespace std;

int lon_sub(int * A, int n)
{
	int Ar[n+1];
	Ar[0]=1;
	for(int i=0; i<n-1; i++)
	{
		if(A[i+1]>A[i])
			Ar[i+1]=Ar[i]+1;
		else
			Ar[i+1]=1;
	}
	int max=0;
	for(int i=0; i<n; i++)
	{
		if(Ar[i]>max)
			max=Ar[i];
	}
	return max;
}
int main()
{
	int n;
	cout<<"Enter the length of the array ";
	cin>>n;
	int A[n];
	cout<<"\n Enter the elemenets of the array ";
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	int s=lon_sub(A,n);
	cout<<"\n The size of the longest continuous substring is "<<s;

}