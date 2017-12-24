// design
#include<iostream>
using namespace std;

void draw_design(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<(2*i)+1; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"\n enter the number of lines ";
	cin>>n;
	draw_design(n);
}