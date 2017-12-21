//Program to rotate an array
#include<iostream>
using namespace std;
void arr(int ar[], int d, int n)
{
	
	for(int i=0; i<d; i++)
	{
		int temp=ar[0];
		//cout<<ar[0];
		for(int j=0; j<n-1; j++)
		{
			ar[j]=ar[j+1];

		}
		ar[n-1]=temp;
	}
}
int main()
{
	int d, n;
	int ar[10];
	cout<<"\n Enter the size of the array (max 10)";
	cin>>n;
	cout<<"\n Enter the elements of the array ";
	for(int i=0; i<n; i++)
		cin>>ar[i];
	cout<<"\n Enter the no of rotations ";
	cin>>d;
	arr(ar, d, n);
	cout<<"\n The array after "<<d<<"rotations is ";
	for(int i=0; i<n; i++)
		cout<<ar[i]<<" ";
}