#include <iostream>
#include <string>
using namespace std;
//C рядки 1

 /* Завдання 1
   Дано рядок символів. Замінити в ньому всі пробіли на табуляції.

   Завдання 2
   Підрахувати кількість слів у введеному реченні.

   Завдання 3
   Дано рядок символів. Необхідно перевірити чи є цей рядок паліндромом.

//C рядки 2

/* Завдання 1
   Написати функцію, яка видаляє з рядка символ із заданим номером.

   Завдання 2
   Написати функцію, яка видаляє з рядка всі входження в нього заданого символу.

   Завдання 3
   Написати функцію, яка вставляє в рядок у вказану позицію заданий символ.

   Завдання 4
   Написати програму, яка замінює всі символи крапки "." у рядку, введеному користувачем, на символи знака оклику "!".

   Завдання 5
   Користувач вводить рядок символів і шуканий символ. Порахувати скільки разів він зустрічається в рядку.

   Завдання 6
   Користувач вводить рядок. Визначити кількість літер, кількість цифр і кількість інших символів, присутніх у рядку.
*/
void task1() {
    cout << "Task1: " << endl;
    char str[] = "War never changes."; // Ініціалізація рядка
    for (char* p = str; *p != '\0'; ++p) { // Прохід по всіх символах рядка
        if (*p == ' ') { // Якщо символ - пробіл
            *p = '\t'; // Замінити пробіл на табуляцію
        }
    }
    cout << str << endl; // Вивести змінений рядок
}
void task2() {
    cout << "Task2: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    int words = 0;
    const char* p = str.c_str(); // Перетворення рядка на масив символів
    while (*p) { // Прохід по всіх символах рядка
        if (*p == ' ') { // Якщо символ - пробіл
            words++; // Збільшити лічильник слів
        }
        p++;
    }
    cout << "Number of words: " << words + 1 << endl; // Вивести кількість слів
}
void task3() {
    cout << "Task3: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    const char* left = str.c_str(); // Вказівник на початок рядка
    const char* right = left + str.length() - 1; // Вказівник на кінець рядка
    bool isPalindrome = true;
    while (left < right) { // Перевірка на паліндром
        if (*left != *right) { // Якщо символи не співпадають
            isPalindrome = false; // Рядок не є паліндромом
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl; // Рядок є паліндромом
    } else {
        cout << "The string is not a palindrome." << endl; // Рядок не є паліндромом
    }
}
void task2_1() {
    cout << "Task2.1: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    int pos;
    cout << "Enter a position: ";
    cin >> pos; // Введення позиції символу для видалення
    str.erase(pos, 1); // Видалення символу з заданої позиції
    cout << str << endl; // Виведення зміненого рядка
}
void task2_2() {
    cout << "Task2.2: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    char ch;
    cout << "Enter a character: ";
    cin >> ch; // Введення символу для видалення
    for (int i = 0; i < str.length(); i++) { // Прохід по всіх символах рядка
        if (str[i] == ch) { // Якщо символ співпадає з введеним
            str.erase(i, 1); // Видалення символу
            i--; // Зменшення індексу для коректного проходу по рядку
        }
    }
    cout << str << endl; // Виведення зміненого рядка
}
void task2_3() {
    cout << "Task2.3: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    int pos;
    cout << "Enter a position: ";
    cin >> pos; // Введення позиції для вставки символу
    char ch;
    cout << "Enter a character: ";
    cin >> ch; // Введення символу для вставки
    str.insert(pos, 1, ch); // Вставка символу у вказану позицію
    cout << str << endl; // Виведення зміненого рядка
}
void task2_4() {
    cout << "Task2.4: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    for (int i = 0; i < str.length(); i++) { // Прохід по всіх символах рядка
        if (str[i] == '.') { // Якщо символ - крапка
            str[i] = '!'; // Замінити крапку на знак оклику
        }
    }
    cout << str << endl; // Виведення зміненого рядка
}
void task2_5() {
    cout << "Task2.5: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    char ch;
    cout << "Enter a character: ";
    cin >> ch; // Введення символу для підрахунку
    int count = 0;
    for (int i = 0; i < str.length(); i++) { // Прохід по всіх символах рядка
        if (str[i] == ch) { // Якщо символ співпадає з введеним
            count++; // Збільшити лічильник
        }
    }
    cout << "Number of occurrences: " << count << endl; // Виведення кількості входжень
}
void task2_6() {
    cout << "Task2.6: " << endl;
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Введення рядка користувачем
    int letters = 0;
    int digits = 0;
    int other = 0;
    for (int i = 0; i < str.length(); i++) { // Прохід по всіх символах рядка
        if (isalpha(str[i])) { // Якщо символ - літера
            letters++;
        } else if (isdigit(str[i])) { // Якщо символ - цифра
            digits++;
        } else { // Інші символи
            other++;
        }
    }
    cout << "Letters: " << letters << endl; // Виведення кількості літер
    cout << "Digits: " << digits << endl; // Виведення кількості цифр
    cout << "Other: " << other << endl; // Виведення кількості інших символів
}