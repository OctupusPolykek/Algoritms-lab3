#include <iostream>
#include <string>

using namespace std;

void taskEase18()
{
    cout << "Task 18 (ease)" << endl;

    //Из заданной символьной строки выбрать те символы, которые встречаются в ней только один раз, в том порядке, в котором они встречаются в тексте.
    
    string s = "dwegwergewq";
    cout << "String: " << s << endl;
    cout << "Symbols that occur 1 time: ";
    for (int i = 0; i < s.length(); i++) {
        char x = s[i];
        int y = 0;
        for (int i = 0; i < s.length(); i++) {
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
   
    string s;

    cout << "Enter string[11]: ";
    getline(std::cin, s);

    int max = 0;
    int newmax = 0;
    char x, y;
    bool maxones = true, printed = true;

    for (int i = 0; i < s.length(); i++) {
        x = s[i];
        newmax = 0;
        for (int i = 0; i < s.length(); i++) {
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
    for (int i = 0; i < s.length(); i++) {
        if (y == s[i] && printed) {
            cout << "Most common symbol: " << y << "; Number of repetitions [" << max << "]" << endl;
            printed = false;
            break;
        }
    }
}

void taskHard18() 
{
    cout << "\nTask 18 (hard)" << endl;

    //Дан массив символов, содержащий слова, разделенные точкой с запятой (;). Набор заканчивается двоеточием (:). Определить, сколько в нем слов, заканчивающихся буквой а .

    string s = "leg ; lefa ; apple ; road ; aloxa:";

    cout << "String: " << s << endl;
    cout << "Number of words that end with the letter a: ";
    int maxA = 0, y = 1;
    for (int i = 0; i < s.length(); i++) {
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
    cout << maxA;
}

int main()
{
    taskEase18();
    taskMedium18();
    taskHard18();
}

