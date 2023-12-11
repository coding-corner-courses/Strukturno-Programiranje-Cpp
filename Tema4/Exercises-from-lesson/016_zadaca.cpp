#include <iostream>

using namespace std;

// Напиши програма која за внесен број преку тастатура ќе го отпечати бројот во обратен редослед.
//	Input: 45986
//	Output: 68954
int main()
{

    int number;

    cin>>number;

    int newNumber = number;
    int reverseNumber = 0;

    // Пр. 246
    // Итерација 1:
    // reverseNumber = 0;
    // reverseNumber = 0 * 10 + 6;
    // Итерација 2:
    // reverseNumber = 6;
    // reverseNumber = 6 * 10 + 4;
    // Итерација 3:
    // reverseNumber = 64;
    // reverseNumber = 64 * 10 + 2 = 642;

    while(newNumber != 0){

        int digit = newNumber % 10;
        reverseNumber = reverseNumber *10 + digit;
        newNumber = newNumber / 10;
    }

    cout<<reverseNumber;

    return 0;
}
