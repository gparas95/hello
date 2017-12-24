//selection sort

#include<iostream>
using namespace std;
void selection_sort(int A[], int n)
{
	int temp;
	for(int i=0; i<n; i++)
	{
		//int small=A[i];
		for(int j=i; j<n; j++)
		{
			if(A[j]<A[i])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
}
void bubble_sort(int A[], int n)
{
	int temp;
	for(int i=0; i<n-1; i++)
	{
		//int small=A[i];
		for(int j=0; j<n-i-1; j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void insertion_sort(int A[],int n)
{
	for(int i=0; i<n; i++)
	{
		int j=i;
		int temp;
		while(A[j]<A[j-1] && j>0)
		{
			temp=A[j-1];
			A[j-1]=A[j];
			A[j]=temp;
			j--;
		}
	}
}
void display(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<endl<<A[i];
	}
}
int main()
{
	int A[20],n;
	cout<<"\n Number of numbers ";
	cin>>n;
	cout<<"\n Enter numebrs";
	for(int i=0; i<n; i++)
		cin>>A[i];
	insertion_sort(A,n);
	display(A,n);
}