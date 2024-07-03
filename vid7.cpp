#include<bits/stdc++.h>
using namespace std;

//STRING and STRING OPERATIONS 
/*

int main()
{
    string str = "Hello";
    string str1 = "hello";
    string result = str +str1;
    if(str == str1)
    {
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
}



//String access and size
int main()
{

    string str = "Hello";
    cout<<str[0]<<endl;
    str[0] = 'B';
    cout<<str<<endl;
    cout<<str.size()<<endl;
    for(int i=0; i<str.size(); i++)
    {
        cout<<str[i]<<endl;
    }

}


//GETLINE IN DETAIL
int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
}

//OP
abc   def
abcd ef    ghi
abc   def
abcd ef    ghi


int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
}

//OP 
2
ab cd    ef
ab cd    ef
abc    fgh   
abc    fgh  



//Reverse a String
//SELF APPROACH
int main()
{
    string str;
    cin>>str;
    for(int i=str.size()-1; i>=0; i--)
    {
        cout<<str[i];
    }
}


//LUV APPROACH
int main()
{
    string str;
    cin>>str;
    string str_rev;
    for(int i = str.size()-1; i>=0; --i)
    {
        str_rev.push_back(str[i]);
    }
    cout<<str_rev;
}


//Palindrome in a string 
int main()
{
    string str;
    cin>>str;
    string str2;
    for(int i = str.size()-1; i>=0; i--)
    {
        str2.push_back(str[i]);
    }
    cout<<str2<<endl;
    if(str == str2)
    {
        cout<<"yes it is  a Palindrome .";
    }
    else
    {
        cout<<"It is not a palindrome .";
    }
}

*/ 

//DEALING WITH LARGE ARRAY 
int main()
{
    string s;
    cin>>s;
    int last_digit = s[s.size() - 1] - '0';
    cout<<last_digit;
}