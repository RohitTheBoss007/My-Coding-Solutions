#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if((n%i)==0)
        {
            while((n%i)==0)
                n/=i;
            
            count++;
            if(count==2)
            {
                if(n==1)
                return true;
                
                else
                return false;
                
            }
        }
    }
    return false;
}
int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(check(i))
        ans++;
        
    }
    cout<<ans;
    return 0;
}
