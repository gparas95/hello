//find element in a sorted array (binary search)

#include<iostream>
using namespace std;
int bsearch(int arr[], int low, int high, int ele)
{
	int mid;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==ele)
			return mid;
	 	else if(arr[mid]>ele)
			return bsearch(arr,low, mid-1, ele);
		else
			 return bsearch(arr, mid+1, high, ele);


	}
	else
		return -1;
}
int main()
{
	int ar[10],n, sum;
	cout<<"\n Enter the size of the array (max 10)";
	cin>>n;
	cout<<"\n Enter the elements of the array in sorted order";
	for(int i=0; i<n; i++)
		cin>>ar[i];
	cout<<"\n Enter the element to find ";
	cin>>sum;
	int f= bsearch(ar,0,n-1, sum);
	if (f==-1)
		cout<<"\n element not found";
	else
		cout<<"\n Elemnet found at pos "<<f;
}