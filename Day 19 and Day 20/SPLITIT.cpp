// Day 19 and Day 20 : 13th and 14th November , 2020
// Author : Bikram Purkait

// Split the Str Ing  //Codechef October Cookoff
// https://www.codechef.com/COOK123B/problems/SPLITIT




#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int k;
	cin>>k;
	while(k--)
	{
		int n;
		bool flag=false;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<=n-2;i++)
		{
			if(str[i]==str[n-1])
			flag=true;
		}
		if(flag==true)
			cout<<"YES"<<"\n";
			else
			cout<<"NO"<<"\n";
	}
}