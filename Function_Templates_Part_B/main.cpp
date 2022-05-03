// Catlynne Quarles
// CIS 1202 R02
// May 3, 2022
// Function Templates Part B


#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

template <typename T>
T half(T num)
{
    return num / 2;
}
int half(int num)
{
    float tempNum = static_cast<float>(num);
    return round(tempNum / 2);
}

int main()
{
    double a = 7.0;
    float b = 5.0;
    int c = 3;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}
