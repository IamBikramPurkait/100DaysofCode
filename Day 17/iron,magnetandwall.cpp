#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,p,i,j,f=0,to=0,m;
        cin>>n>>k;
        string str;
        cin>>str;
        p=k+1;
        while(i<n && j<n)
        {
            if(str[i]=='M')
            {
                if(str[j]=='I')
                {
                    f=p-abs(i-j);
                    if(f>0){
                        to++;
                        i++;
                        j++;
                    }
                    else
                    if(i>j)
                    j++;
                    else
                    i++;
                    }
                    else if(str[j]=='X')
                    {
                        i=j;
                        j++;
                        i++;
                    }
                    else
                    j++;
                }
                else if(str[i]=='X')
                {
                    j=i;
                    i++;
                    j++;
                }
                else
                i++;
                }
                cout<<m<<endl;
            }
    return 0;
}  