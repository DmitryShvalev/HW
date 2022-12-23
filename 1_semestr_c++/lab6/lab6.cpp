
#include <iostream>
using namespace std;

void Print(char* s) {
    char* begin = s;  //начало текущего слова
    int counter = 0;    //счетчик цифр

    while (true) {      //текущий символ - цифра
        if (*s >= '0' && *s <= '9') {
            counter++;
            s++;
            continue;
        }
                
        if (*s == ' ' || *s == '\0') {   //текущий символ - конец слова
           
            if (counter == 1) {     //если в слове 1 цифра                
                while (begin < s) {   //вывод слова в консоль
                    cout << *begin;
                    begin++;
                }
                cout << endl;
            }           
            if (*s == '\0')     //Если конец строки - завершить поиcк
                break;
            Print(++s);    //Поиск следующего слова
            break;
        }
        
        s++;     //переход к следующему символу
    }
}

void main()
{
    char s[256];
    cout << "Enter sentence: ";
    cin.getline(s, 255);
    s[255] = '\0';
    Print(s);
    system("pause");
}
