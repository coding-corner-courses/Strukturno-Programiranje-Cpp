#include<iostream>
#include<cstring>

using namespace std;

//Задача
//Од стандарден влез се чита број n, а потоа се читаат и n броеви.
//Потребно е на екран да се испечатат сите броеви кои што се строго растечки,
//односно секоја цифра е поголема од претходната (1589 е растечки, 1529 не е растечки).
//
//Проверката за тоа дали бројот е растечки да се реализира со посебна функција која ќе врати 1
//ако е растечки и -1 ако не е растечки.
//
//Дополнително ако бројот е растечки за него треба да се повика функција која ќе ја пресмета сумата на цифрите од кои е составен.
//
//Дополнителнo: Функцијата за пресметување на сума на цифри да биде рекурзивна.
//Печатењето треба да е во следен формат: 1234 (suma: 10)
//
//Input:
//5
//257 391 423 789 269
//
//Output:
//257 (suma: 14)
//789 (suma: 24)
//269 (suma: 17)

int checkIsIncreasingNumber(int number){

    int newNumber = number;

    // ten will always be bigger than any digit,
    // so the check will be correct always for the first checked digit
    int lastDigit = 10;

    // Ex. number = 123
    // lastDigit=10, digit=3
    // lastDigit=3, digit=2
    // lastDigit=2, digit=1

    while(newNumber!=0){

        int digit = newNumber % 10;

        if(lastDigit<digit){
            // the number is not strongly increasing
            return -1;
        }

        lastDigit=digit;
        newNumber= newNumber/10;
    }

    return 1;
}

int sumOfDigits( int number){

    if(number < 10){
        return number;
    }

    return number%10 + sumOfDigits(number/10);
}

int main()
{

    char firstLine[100];

    cin.getline(firstLine, 100);

    // converts string to integer
    int n=stoi(firstLine);

    // line of input numbers as characters
    char line[100];
    cin.getline(line, 100);

    // array of the input numbers
    int numbers[100];

    // --- Convert the characters into integers
    int index=0;
    int previousDigit=0;

    for(int i=0; i<strlen(line); i++)
    {
        if( !isspace(line[i]))
        {
            int digit = ((int)line[i]) - '0';
            previousDigit=previousDigit*10+digit;
        }
        else
        {

            numbers[index]=previousDigit;
            index++;
            previousDigit=0;
        }
    }

    numbers[index]=previousDigit;
    index++;

    // --- Check which numbers are strongly increasing

    for(int i=0; i<index; i++){

        if(checkIsIncreasingNumber(numbers[i])==1){

            int sum = sumOfDigits(numbers[i]);

            cout<<numbers[i]<<" (suma: "<<sum<<")"<<endl;
        }
    }

    return 0;
}
