#include <iostream>
#include <string>
using namespace std;

void task1() {
    char str[] = "Hello, world! This is a test string.";
    for (char* p = str; *p != '\0'; ++p) {
        if (*p == ' ') {
            *p = '\t';
        }
    }
    cout << str << endl;
}

void task2() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int words = 0;
    const char* p = str.c_str();
    while (*p) {
        if (*p == ' ') {
            words++;
        }
        p++;
    }
    cout << "Number of words: " << words + 1 << endl;
}

void task3() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    const char* left = str.c_str();
    const char* right = left + str.length() - 1;
    bool isPalindrome = true;
    while (left < right) {
        if (*left != *right) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
}