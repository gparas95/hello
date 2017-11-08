// cut a rod to find max sum

#include<iostream>
using namespace std;
int max(int a, int b)
{
	return a>b ?a:b;
}
int max_cost(int p[], int s)
{
	int pr[s+1];
	pr[0]=0;
	//cout<<pr[0];
	for(int i=1; i<=s; i++)
	{	int sum=0;
		for(int j=0; j<i; j++)
		{
			sum=max(sum,p[j]+pr[i-j-1]);
			pr[i]=sum;
		}
		//pr[i]=max(sum,p[i]);
		cout<<pr[i]<<" ";
		
	}
	return pr[s];
}
int main()
{
	int s, p[10];
	cout<<"\n Enter the size of rod";
	cin>>s;
	cout<<"\n Enter the prices for each cut 1...s";
	for(int i=0; i<s; i++)
	{
		cin>>p[i];
		//cout<<p[i];
	}
	cout<<"the max price is"<<max_cost(p,s);
}

