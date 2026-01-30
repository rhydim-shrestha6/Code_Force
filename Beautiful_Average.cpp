#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        vector<int> a(n);
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
}
for(int i=0;i<n;i++)
{
    s=0;
    for(int j=i;j<n;j++)
    {
        s+=a[j];
            s=s/(j-i+1);
 ans=max(ans,s); 
    }
  
}
cout<<ans<<"\n";
 }
}