#include<bits/stdc++.h>
using namespace std;

//ARRAY SUM 

//sum(n,a) = sum of element in a uptill n index
//sum(n,a) = a[n] + sum(n-1, a)

/*

int sum(int n, int a[])
{
    if(n<0) return 0;
    return sum(n-1,a) + a[n];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }

    cout<< sum(n-1, a);


    return 0;

}

*/

//function calls = n times
//time complexity of each function = O(1)
//time complexity = O(n) = O(1)

// O/P 6
// 1 2 3 4 5 6
// 21

//DIGIT SUM
int digit_sum(int n)
{
    if(n==0) return 0;
    return digit_sum(n/10) + (n%10);
}

int main()
{
    int n; 
    cin>>n;
    cout<<digit_sum(n);
}

// O/P 1234
//     10

// number of function calls = no of digit in n
// what is complexity of each function = O(1)
// Time Complexity = log(n)