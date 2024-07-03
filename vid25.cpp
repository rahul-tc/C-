//VID 24 WAS A SHORTS 

#include<bits/stdc++.h>
using namespace std;

void func(int n)
{
    if(n==0) return;
    
    func(n-1);
    cout<<n<<endl;
}

int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}

int main()
{
    func(5);
    int n;
    cin>>n;
    cout<<fact(n);
}