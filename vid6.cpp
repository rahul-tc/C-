#include<bits/stdc++.h>
using namespace std;

/* 

// Condition 
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    //cout<<((a>b) && (a>c)); OP is 0
    //cout<<((a>b) || (a>c)); OP is 0
    cout<<((a<b) && (a<c)); OP is 1
}


//if else 
int main()
{
    int n;
    cin>>n;
    if(n%2 == 0)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}



//WHILE LOOP
int main()
{
    int i =1;
    while(i<=10)
    {
        cout<<i<<endl;
        i++;
    }
}


//FOR LOOP 
int main()
{
    
    //can be written as 
    //for(int i =1; i<=10; cout<<i++<<endl){

    //}
    //for(int i = 1; i<=10; i++)
    //{
    //    cout<<i<<" Rahul"<<endl;
    //}

    //Nested For Loop 
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

   //Test Cases
   int t;
    cin>>t;
    //for(int test=0; test<t; test++) //can use it or we can use below while loop also 

    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

}


//break statement and continue statement 
int main()
{
    for(int i=0; i<10; i++)
    {
        if(i == 8)
        {
            //break;
            continue; 
        }
        cout<< i <<endl;
    }
}



//Question - TEST - Life , the Universe, and Everything 
int main()
{
    while(true)
    {
        int x;
        cin>>x;
        if(x==42)
        {
            break;
        }
        cout<<x<<endl;
    }
}
*/

//SUM OF DIGITS //IP- 158 OP- 14 //codechef
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int digit_sum = 0;
        //cout<<n%100;
        while(n>0)
        {
            int last_digit = n%10;
            digit_sum = digit_sum + last_digit;
            n = n/10;
        }
        cout<<digit_sum<<endl;
    }
}
