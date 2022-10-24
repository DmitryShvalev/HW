#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n , i = 0;
    cout << "введите n ";
    cin >> n;
    while (n < 1) {
        i = i++;
        if (i == 3) {
            cout << "дорогой пользователь, лимит неправильных попыток ввода значения n исчерпан, программа закончила свою работу" << " " << "\n";
            return 0;
        }
        cout << "данному квадрату нельзя задавать нулевое значение стороны, пожалуйста введите новое значение n, n должно быть больше 0 " <<"\n" << "введите n ";
        cin >> n;
    }
    if (n == 1)
        cout << "*";

    else {
        for (int i = 1; i <= n; i++)
            cout << "*";
        for (int i = 1; i <= n - 2; i++) {
            cout << "\n";
            cout << "*";
            for (int j = 1; j <= n - 2; j++)
                cout << " ";
            cout << "*";
        }
        cout << "\n";
        for (int i = 1; i <= n; i++)
            cout << "*";
    }
    
}
