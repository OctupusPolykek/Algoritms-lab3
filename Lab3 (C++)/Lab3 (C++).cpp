#include <iostream>
#include <string>

using namespace std;

void taskEase18()
{
    cout << "Task 18 (ease)" << endl;

    //Из заданной символьной строки выбрать те символы, которые встречаются в ней только один раз, в том порядке, в котором они встречаются в тексте.
    
    char s[] = "dwegwergewq";
    cout << "Символьная строка: " << s << endl;
    cout << "Символы который встречаются 1 раз: ";
    for (int i = 0; i < strlen(s); i++) {
        char x = s[i];
        int y = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (x == s[i])
                y++;
        }
        if (x == s[i] && y < 2)
            cout << x << " ";
    }
}

void taskMedium18()
{
    cout << "\n\nTask 18 (medium)" << endl;

    //Введите массив символов из 11 элементов. Определить самый часто встречающийся символ и количество его повторений.
    char s[11];

    cout << "Введите 11 символов:" << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << "Еще нужно (" << 11 - i << ") символов: ";
        cin >> s[i];
        cout << endl;//Не знаю как добавить проверку
    }

    int max = 0;
    int newmax = 0;
    char x, y;
    bool maxones = true, printed = true;

    for (int i = 0; i < strlen(s); i++) {
        x = s[i];
        newmax = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (x == s[i]) {
                if (maxones) {
                    max++;
                    y = x;
                }
                newmax++;
            }
        }
        maxones = false;
        if (newmax > max) {
            max = newmax;
            y = x;
        }
    }
    for (int i = 0; i < strlen(s); i++) {
        if (y == s[i] && printed) {
            cout << "Самый часто встречающийся: " << y << "; Количество повторений [" << max << "]" << endl;
            printed = false;
            break;
        }
    }
}

void taskHard18() 
{
    cout << "\nTask 18 (hard)" << endl;

    //Дан массив символов, содержащий слова, разделенные точкой с запятой (;). Набор заканчивается двоеточием (:). Определить, сколько в нем слов, заканчивающихся буквой а .

    char s[35] = "leg ; lefa ; apple ; road ; aloxa:";

    cout << "Массив символов: " << s << endl;

    int maxA = 0, y = 1;
    for (int i = 0; i < strlen(s); i++) {
        y = 1;
        if (s[i] == ';' || s[i] == ':') {
            while (s[i - y] == ' ') {
                y++;
            }
            if (s[i - y] == 'a') {
                maxA++;
            }
        }
    }
    cout << "Число слов которые заканчиваются на  а: ";
    cout << maxA;
}

int main()
{
    setlocale(0, "ru");
    taskEase18();
    taskMedium18();
    taskHard18();
}

