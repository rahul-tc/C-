#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int x = 4;
    int *p_x = &x;
    cout<<"add x: "<<&x<<endl;
    cout<<"val p_x: "<<p_x<<endl;
    cout<<"val *p_x: "<<*p_x<<endl;
    *p_x=5;
    cout<<"x: "<<x<<endl;
    cout<<"p-x + 1: "<<p_x + 1 <<endl;
    int **p_p_x = &p_x;
    cout<<"Addr p_x: "<<&p_x<<endl;
    cout<<"Val p_p_x: "<<p_p_x<<endl;
    cout<<"Val *p_p_x: "<<*p_p_x<<endl;
    cout<<"Val **p_p_x: "<<**p_p_x<<endl;
    **p_p_x = 7;
    cout<<"x: "<<x<<endl;

}


//ARRAYS
int main()
{
    int a[10];
    a[0] = 2;
    a[1] = 4;

    cout<<"a: "<<a<<endl;
    cout<<"&a[0]: "<< &a[0]<<endl;
    cout<<"*a: "<<*a<<endl;
    cout<<"a+1: "<<a+1<<endl;
    cout<<"&a[1]: "<< &a[1]<<endl;
    cout<<"*(a+1): "<<*(a+1)<<endl;
}
*/

//PASSING POINTER TO A FUNCTION
void increment(int *x)
{
    (*x)++;
    //*x =*x + 2;
}

int main()
{
    int a = 4;
    cout<<a<<endl;
    increment(&a);
    cout<<a<<endl;
}


