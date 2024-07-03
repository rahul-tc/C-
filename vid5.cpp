#include<bits/stdc++.h>
using namespace std;
/*
//self
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    scanf("%d", &n );

    cout<<"number is "<<n;

    return 0;
}  
//its better to use scanf and printf instead of cout/cin because its execution
//is much more faster then exceution of cin/cout and many time it used to solve
//the problem of TLE in many problem . 
int main()
{
    //cout<<7/2; //OP is 3 
    //cout<<7/2.0;  //OP is 3.5 
    //basically jo calculation jo hai wo higher data types me hogi

    //cout<<'C' + 1; //OP is 68 (ascii value of c and +1 )
    double a =3/2;
    cout<<a; 
} 

int main()
{
    /*
    //cout<<7/2*3<<endl; //OP 9
    //cout<<3*7/2<<endl; //OP 10
    int a = 100000;
    int b = 100000;
    int c =a*b;
    cout<<c<<endl;
    int mx = INT_MAX;
    cout<<mx<<endl;
    cout<<mx+1;
    */

    /*long long int a = 100000;
    long long int b = 100000;
    long long int c =a*b;
    cout<<c<<endl;
    //

   double a = 100000;
   double b = 100000;
   double c = a*b;
   c = 1e24;
   //cout<<fixed<<c<<endl; //OP - 999999999999999983222784.000000
   //cout<<fixed<< setprecision(0)<<c<<endl; //OP is 10000000000
} */

// Given rectangle of length l and b, print area of rectangle.

//constraints:
//1<= l <= 10^9
//1<= b <= 10^9

//input format: 2 Space separated integer l and b
//output format: single number which is area of rectangle 

//sample input = 3 4
//sample output = 12;

int main()
{
    //long long int l, b;
    int l,b;
    cout<<" enter the Length and bredth : "<<endl;
    cin>>l>>b;
    //cout<<"area "<<l*b<<endl;
    //or if we dont want to write long long int and we want to keep the
    //thing in int then we can use 
    cout<<"area is "<<l* 1ll*b<<endl;
    //cout<<"are of rectangle is "<<l*b<<endl;
    //but writing above line is wrong because in basic test case is passed
    //but in above constraint i.e in overflow case it will not give exact answer.
    // so to get save from this we will use long long int 
}