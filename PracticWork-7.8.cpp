#include <iostream>

using namespace std;

int main()
{
    int hight;
    bool condition = false;
    do {
        cout << "Введите высоту ёлочки: ";
        cin >> hight;
        cin.ignore(100, '\n');
        if (hight < 1) {
            cout << "Не корректный ввод данных\n";
            condition = true;
        }
        else condition = false;
    } while (condition);

    int lenght = 1;
    hight--;

    while (hight >= 0) {
        for (int i = 0; i < hight; i++) {
            cout << " ";            
        }
        hight--;
        
        for (int i = 0; i < lenght; i++) {
            cout << "#";
        }
        lenght += 2;
        cout << "\n";
    } // я не знаю как уменьшить количество циклов до 2. один цикл рисует пробелы, другой елку, третий перенос строки.
    return 0;
}