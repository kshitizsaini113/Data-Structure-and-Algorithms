// Divya has an analog clock which consists of two hands one for hour and another for minute. She wants 
// to calculate the shorter angle formed between hour and minute hand at any given time.

// Input format
// The first line contains the number of test cases T. Each test case contains two integers h and m 
// representing the time in hour and minute format.

// Output format
// For each test case on a new line, print the required shorter angle.

#include <iostream>

using namespace std;

int clockAngle(int hour, int minute)
{
    int minuteAngle, hourAngle;

    minuteAngle = (minute * 6);
    hourAngle = (hour * 30 + minute/2);

    int diff = abs(hourAngle - minuteAngle);

    if(diff < 360-diff)
    {
        return diff;
    }
    return 360-diff;
}

int main()
{
    int numberOfTestCases;
    cin>>numberOfTestCases;

    for(int i=0; i<numberOfTestCases; i++)
    {
        int hour, minute;
        cin >> hour >> minute;
        cout<<clockAngle(hour, minute)<<endl;
    }

    return 0;
}