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
       int sq=ceil(sqrt(n));
       if(sq*sq==n)
       {
       int a=sq/2;
       int b=sq-a;
       cout<<a<<' '<<b<<"\n";
       }
       else 
       cout<<"-1\n"; 
    }
    
} 