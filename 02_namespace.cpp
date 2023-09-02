#include<iostream>   //header file std reference are store in this file

/*using std::cout;
using std::cin;*/

using namespace std;
// the purpose of namespace is use to declare a same variable name multiple times... to avoid the repetaiton issue
namespace name1{
    string name = "ram";
}

namespace name2{
    string name = "sam";
}

int main()
{
    /*int a;
    cout<<"Enter the value : ";
    cin>>a;
    cout<<"Value of A is : "<<a;*/

    cout<<name1::name;    //you must specifically refer the particular namespace name then use to tell that using :: scope resolution
    cout<<name2::name;
    return 0;
}

