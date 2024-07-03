#include<bits/stdc++.h>
using namespace std;

/* 

//without optimise approach 


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int ct = 0;
        for(int i = 0; i<n; ++i)
        {
            if(a[i] == x)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }

    // O(N) + O(Q*N) = O(N^2) = 10^10;
} 
*/

//OPTIMISED APPROACH 


const int N = 1e7+10;
int hsh[N];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        
        cout<<hsh[x]<<endl;
    }

    // O(N) + O(Q) = O(N) = 2*10^5
} 