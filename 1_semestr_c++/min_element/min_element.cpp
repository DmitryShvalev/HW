#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, min, i = 0;
    cout << "введите a ";
    cin >> a;
    min = a;

    while (a == 0) {
        i = i++;
        if (i == 3) {
            cout << "Дорогой пользователь, лимит неправильных попыток ввода значения n исчерпан, программа закончила свою работу. У вас получилась нулевая последовательность. Вот ваше минимальное значение последовательности." << "\nmin = " << a << "\n";
            return 0;
        }
        cout << "данная последовательность не может начинаться с нуля, пожалуйста введите новое значение";
        cout << "\n" << "введите a ";
        cin >> a;
        min = a;

    }

    while (a != 0) {
        cout << "\n" << "введите a ";
        cin >> a;
        if (a != 0 && a < min) min = a;
    }
    cout << "\nmin = " << min << "\n";
    return 0;
}
