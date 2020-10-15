// Program for understanding cerr and clog

#include <iostream>

using namespace std;

int main()
{
    cerr << "An error occured";
    // cerr is the standard error stream used to output the errors.
    // cerr is unbuffered so used when need to display error message immidiately and doesn't 
    // have buffer allocated to store and displayed later.

    cout<<endl<<endl;

    clog << "An error occured";
    // clog is also used to display errors.
    // unlike cerr the error is first inserted into buffer and stored
    // error is also logged into the screen too.

    return 0;
}
