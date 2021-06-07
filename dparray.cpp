#include<iostream>
using namespace std;
int DP[10000];
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;	
	}
	if(DP[n]!=-1)
	{
		return DP[n];
	}	
	return DP[n]=n*fact(n-1);
}
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		DP[i]=-1;
    }
	cout<<fact(num);
}
