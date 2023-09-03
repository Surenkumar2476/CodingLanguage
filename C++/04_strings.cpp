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
    // string str;
    // cout<<"Enter the String: ";
    // cin>>str;
    // cout<<"String: "<<str<<endl;
    // fflush(stdin);                                //used to remove the garbage value
    // cout<<"Enter the String: "<<endl;
    // getline(cin, str);
    // cout<<"String: "<<str;
    // return 0;

    //Input Function
    // string str = "welcome bro";
    // cout<<str<<endl;
    // str.push_back('o');    //add this o character at the end using push_back
    // cout<<str<<endl;
    // str.pop_back();        //remove the last character using pop_back
    // cout<<str<<endl;
    // return 0;

    //Capacity Function
    // string str("suren kumar");
    // cout<<str<<endl;
    // cout<<"size of : "<<str.size()<<endl;
    // cout<<"length of : "<<str.length()<<endl;
    // cout<<"max size of : "<<str.max_size()<<endl;
    // return 0;

    // //Iterator Function
    // string str("hello surenkumar");
    // string::iterator it;
    // for(it=str.begin();it!=str.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    // cout<<"********************************************"<<endl;
    // string::reverse_iterator it2;
    // for(it2=str.rbegin();it2!=str.rend();it2++)
    // {
    //     cout<<*it2<<endl;
    // }

    //Manipulating Function
    string x = "suren";
    string y = "kumar";
    cout<<"Before swap X: "<<x<<endl;
    cout<<"Before swap Y: "<<y<<endl;
    x.swap(y);
    cout<<"After swap X: "<<x<<endl;
    cout<<"After swap Y: "<<y<<endl;

    return 0;

}
