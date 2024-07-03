#include<bits/stdc++.h>
using namespace std;

/*
//ARRAYS
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        cout<<a[i]<<endl;
    }
    //cout<<a[i];
    int sum = 0;
    for(int i=0; i<n; ++i)
    {
        sum = sum + a[i];
    }
    cout<<sum;
}


//2D Array

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r; ++i)
    {
        //cout<<arr[i]<<endl;
        for(int j=0; j<c; ++j)
        {
            cin>>arr[i][j];
            //cout<<arr[i][j];

        }
    }
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

//SIZE LIMIT IN ARRAY 
//whenever we declare globally we should be applying constant number 
const int n = 1e7;
int a[n]; // OP is 7
int main()
{
    //int n=1e7;
    //int n = 1e5; // OP is 7;
    //int a[n]; hid eit and go globally 
    a[n-1] = 7;
    cout<<a[n-1];
} //OP Segmentation Fault because locally we cannot declare this much of size 
// we can create upto 10^5 locally . 

//globally we can give order upto 10^7 but try to avoid that much of high
// array try to cap it aroud 10^5 in local and global also . it can take 
//10^6 10^7 it depends on the machine of the question giver.

