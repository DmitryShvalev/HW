#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a = 1000, b = 0.0001, s, c, e, r, t, i, h, l, v;
    c = pow((a + b), 3);
    e = pow(a, 3);
    r = pow(b, 2);
    t = pow(b, 3);
    i = pow(a, 2);
    s = (c - e) / (3 * a * r + t + 3 * b * i);
    cout << "float: " << "a " << a << " " << "b " << b << " " << "s " << s << "\n";
    double a1 = 1000, b1 = 0.0001, s1, c1, e1, r1, t1, i1, h1, l1, z1, v1;
    c1 = pow((a1 + b1), 3);
    e1 = pow(a1, 3);
    r1 = pow(b1, 2);
    t1 = pow(b1, 3);
    i1 = pow(a1, 2);
    s1 = (c1 - e1) / (3 * a1 * r1 + t1 + 3 * b1 * i1);
    cout << "double: " << "a1 " << a1 << " " << "b1 " << b1 << " " << "s1 " << s1;
    return 0;
}