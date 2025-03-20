#include <iostream>
#include <string> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char str[20];
    char res[20];
    cout << "Введите строку: ";
    cin.getline(str, 20, '\n');
    cout << "Введённая строка: " << str << endl;
    str[19] = '\0';
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] == '(') {
            while (str[i] != ')' && str[i] != '\0') {
                i++;
                if (str[i] == ')') {
                    i++;
                    break;
                }
            }
        }
        res[j] = str[i];
            j++;
        i++;
    }
    
    
    res[j] = '\0'; // Добавляем символ конца строки

    cout << "Результат: " << res << endl;

    return 0;
}
