#include<iostream>
using namespace std;
long long int table[100];
long long int fibonacci_memo(int a)
{
	if(table[a]!=0)
		return table[a];
	else
		return table[a]=(fibonacci_memo(a-1)+fibonacci_memo(a-2));

}
long long int fibonacci_tabul(int a)
{
	
		for(int j=2; j<=a; j++)
		{
			table[j]=table[j-1]+table[j-2];
		}
		return table[a];
	
}
int main()
{
	
	for(int i=0; i<100; i++)
		table[i]=0;
	table[0]=table[1]=1;
	int a;
	cin>>a;
	cout<<fibonacci_tabul(a)<<endl;
}