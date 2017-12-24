// Check if the string is pallindrome or not
#include<iostream>
#include<string.h>
using namespace std;
bool pallindrome(char *P)
{
	int len=strlen(P);
	int j=len-1;
	for(int i=0; i<=j; i++, j--)
	{
		if(P[i]!=P[j])
			return false;
	}
	return true;
}
int main()
{
	char P[50];
	cout<<"\n Enter a string ";
	cin.get(P, 50);
	pallindrome(P)? cout<<"\n pallindrome" :cout<<"\n Not a pallindrome" ;
}