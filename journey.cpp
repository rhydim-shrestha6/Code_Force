#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
       int sum = a+b+c;
int cycles = n / sum;
int d = cycles * sum;
int i = cycles * 3;
int arr[3]={a,b,c};
while(d < n){
    d += arr[i % 3];
    i++;
}
 cout<<i<<"\n";
         }
}
    