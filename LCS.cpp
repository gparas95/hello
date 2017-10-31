//Find the longest common subsequence in 2 strings

#include<iostream>
#include<string.h>
using namespace std;
int L[100][100];
int max(int a, int b)
{
	return (a>b)?a:b;
}
void findsubstring(int m,int n, char * a, char * b)
{
	if(L[m][n]==0)
		return;
	else if(L[m][n]==L[m][n-1])
		findsubstring(m,n-1,a,b);
	else if(L[m][n]==L[m-1][n])
		findsubstring(m-1,n,a,b);
	else
	{
		cout<<a[m-1];
		findsubstring(m-1,n-1,a,b);
	}
}

int LCS(char * a, char * b, int m, int n)
{
	//int L[m+1][n+1];
	for(int i=0; i<=m; i++)
	{
		for(int j=0; j<=n; j++)
		{
			if(i==0 || j==0)
				L[i][j]=0;
			else if(a[i-1]==b[j-1])
			{
				L[i][j]=1+L[i-1][j-1];
			}
			else
				L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	findsubstring(m,n,a,b);
	return L[m][n];
}

int main()
{
	char a[50], b[50];
	int m,n,ans;
	cout<<"Enter the string1 length less than 50";
	cin.getline(a,50);
	cout<<"Enter the string2 length less than 50";
	cin.getline(b,50);
	m=strlen(a);
	n=strlen(b);
	ans = LCS(a,b,m,n);
	cout<<"the length of the string is "<<ans;
}