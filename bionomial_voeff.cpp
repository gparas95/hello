#include<iostream>
int bionomial(int n, int k)
{
	int b[n+1][n+1];
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(j==0 || i==j)
				b[i][j]=1;
			else
				b[i][j]=b[i-1][j-1]+b[i-1][j];
		}
	}
	
	return b[n][k];
	
}
int main()
{
	int n, k, ans;
	std::cout<<"enter the value of n and k";
	std::cin>>n>>k;
	//std::cout<<n<<k;

	ans=bionomial(n,k);
	std::cout<<"the answer is "<<ans;
}