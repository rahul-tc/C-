/*
#include<bits/stdc++.h>
using namespace std;


//SELECTION SORT

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; ++i)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; ++i)
    {
        int midIndex = i;
        for(int j=i+1; j<n; ++j)
        {
            if(a[j]<a[midIndex])
            {
                midIndex = j;
            }
        }
        swap(a[i], a[midIndex]);
    }
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
}

// O/P - 4
//       3 1 4 2
//       1 2 3 4 

// TC - O(n^2)

*/

#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
int a[N];

void merge(int l, int r, int mid)
{
    int l_sz = mid-l+1;
    int L[l_sz+1];
    int r_sz =r-mid;
    int R[r_sz+1];

    for(int i=0; i<l_sz; ++i)
    {
        L[i] = a[i+l];
    }
    for(int i=0; i<r_sz; ++i)
    {
        R[i] = a[i+mid+1];
    }
    L{l_sz} = R[r_sz] = INT_MAX;
    int l_i = 0;
    int r_i = 0;

    for(int i=l; i<= r; ++i)
    {
        if(L[l-i] <= R[r-i])
        {
            a[i] = L{l-i};
            l_i++;
        }
        else{
            a[i] = R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int l, int r)
{
    if(l==r) return;
    int mid =(l+r)/2;
    mergeSort (l, mid);
    mergeSort (l, mid+1, r);
    merge (l,r,mid);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    mergeSort(0,n-1);
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
}

//vector_name.rbegin()