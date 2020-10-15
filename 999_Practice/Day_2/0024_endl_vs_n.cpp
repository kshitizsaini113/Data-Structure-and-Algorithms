// Program for 

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello"<<endl;

    cout<<"Hello\n";

    // cout<<endl <-> cout<<"\n"<<flush
    // 
    // \n is performance-wise better unless flushing of memery is reqd.
    // endl is a manipulator while \n is a character.
    // endl doesnt occupy memory while \n does.

    return 0;
}
