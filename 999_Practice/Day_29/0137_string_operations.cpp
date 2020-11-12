// Program for studying string operations.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Kshitiz";
    string s2 = " Saini";

    s1.append(s2);
    cout<<s1<<endl;

    s1 = s1 + s2;
    cout<<s1<<endl;

    s1.clear();
    cout<<s1<<endl;

    if(s1.empty())
    {
        cout<<"String is empty"<<endl;
    }

    s1 = "Kshitiz";

    if(s1.empty())
    {
        cout<<"String is empty"<<endl;
    }
    else
    {
        cout<<"String is not empty"<<endl;
    }

    string s3(5, 'd');
    cout<<s3<<endl;

    s1 = "A";
    s2 = "A";
    cout<<s1.compare(s2)<<endl;

    s3 = "AA";
    cout<<s1.compare(s3)<<endl;
    cout<<s3.compare(s1)<<endl;

    s1 = "Kshitiz Saini";
    s1.erase(2,3);
    cout<<s1<<endl;

    cout<<s1.find("ini")<<endl;
    
    s1.insert(2, "test");
    cout<<s1<<endl;

    cout<<s1.size()<<"  "<<s1.length()<<endl;

    s3 = s1.substr(3,7);
    cout<<s3<<endl;

    s3 = "780";
    int x = 1;
    x += stoi(s3);
    cout<<x<<endl;

    s3 += to_string(x);
    cout<<s3<<endl;
    
    return 0;
}