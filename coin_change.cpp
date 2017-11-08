// Coin change problem

#include<iostream>
using namespace std;
int C[50][50];
int min(int a, int b)
{
	return a<b? a: b;
}
int change(int amt, int d, int den[])
{
	for(int i=0; i<d; i++)
	{
		C[i][0]=0;
	}
	for(int i=0; i<=amt; i++)
		C[0][i]=i;
	for(int i=1; i<d; i++)
	{
		for(int j=1; j<=amt; j++)
		{
			if(den[i]<=amt)
			{
				//cout<<1+C[i][j-den[i]];
				C[i][j]=min(1+C[i][j-den[i]],C[i-1][j]);
				//cout<<C[i][j]<<endl;
			}
			else
				C[i][j]=C[i-1][j];
		}
	}
	/*for(int i=0; i<d; i++)
	{
		for(int j=0; j<=amt; j++)
			cout<<C[i][j]<<" ";
		cout<<endl;
	}*/


	return C[d-1][amt];
}
int main()
{
	int d, den[10],amt;
	cout<<"\n Enter the number of denominations";
	cin>>d;
	cout<<"\n Enter denominations in increasing order";
	for(int i=0; i<d; i++)
		cin>>den[i];
	cout<<"\n Enter the amount to change";
	cin>>amt;
	int nc=change(amt,d, den);
	cout<<"\n The total coins is equal to"<<nc;
}