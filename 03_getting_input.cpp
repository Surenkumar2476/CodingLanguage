#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    //float a, b, c;
    //char a;
    //string a;    using string while getting the input without using the space, if given a input with space it will print only before space

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b and c : "<<endl;
    cin>>b>>c;
    cout<<"Total is = "<<a+b+c;

    // string a;
    // cout<<"Enter the name : ";
    // getline(cin,a);                  //getline is used for giving the string input with spaces like paragraph
    // cout<<a;

    return 0;
}
