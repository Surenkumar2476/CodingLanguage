#include<iostream>

using namespace std;

int main()
{
    //string a = "hello suren";
    /*string a("hello surenkumar");
    cout<<a<<endl;
    return 0;*/

    //String Concatination
    // string firstname = "suren";
    // string lastname = "kumar";

    // cout<<firstname+" "+lastname<<endl;
    // string fullname = firstname.append(lastname);
    // cout<<fullname<<endl;

    //String Access
    // string name="Suren Kumar";
    // cout<<name<<endl;
    // cout<<name[0]<<endl;
    // name[0]='N';
    // cout<<name<<endl;
    // return 0;

    //Input Functions
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    cout<<"String: "<<str<<endl;
    fflush(stdin);                                //used to remove the garbage value 
    cout<<"Enter the String: "<<endl;
    getline(cin, str);
    cout<<"String: "<<str;
    return 0;
}
