#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double n, m;
   
    cout << "Введите n\n";
    cin >> n;

    cout << "Введите m\n";
    cin >> m;
    
    cout << "n++ * m = " << (n++ * m);

    cout << "\nn++ < m = " << (n++ < m);
    
    cout << "\nm-- > m = " << (m-- > m);

    return 0;
}
