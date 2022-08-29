#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    a = 1000;
    float b;
    b = 0.0001;
    cout << a << " " << b << " ";
    float s;
    s = (pow((a + b), 3) - pow(a, 3)) / (3 * a * pow(b, 2) + pow(b, 3) + 3 * b * pow(a, 2));
    cout << s;
    return 0;
}
