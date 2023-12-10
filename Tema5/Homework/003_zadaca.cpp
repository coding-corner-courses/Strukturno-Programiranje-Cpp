#include <iostream>

using namespace std;

//Задача 3
//Напиши програма каде што ќе може да се внесат два броеви и да се провери дали сумата од најголемата
//и најмалата цифра од првиот број е еднаква со производот на најмалата и најголемата цифра на вториот број. Резултатот да се отпечати.
//а. Направи функција која ќе најдува најголема цифра за даден број
//б. Направи функција која ќе најдува најамла цифра за даден број
//ц. Направи функција која ќе пресметува сума на два броеви
//д. Направи функција која ќе пресметува производ на два броеви

int getMaxDigit(int number)
{

    int maxDigit = 0;
    int newNumber = number;

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        if(digit>maxDigit)
        {
            maxDigit= digit;
        }

        newNumber = newNumber / 10;
    }

    return maxDigit;
}

int getMinDigit(int number)
{

    int minDigit = 10;
    int newNumber = number;

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        if(digit<minDigit)
        {
            minDigit= digit;
        }

        newNumber = newNumber / 10;
    }

    return minDigit;
}

int findSum (int number1, int number2)
{

    return number1 + number2;
}

int findProduct (int number1, int number2)
{

    return number1 * number2;
}

int main()
{
    int firstNumber, secondNumber;

    cin>>firstNumber>>secondNumber;

    int maxDigitForFirstNumber = getMaxDigit(firstNumber);
    int minDigitForFirstNumber = getMinDigit(firstNumber);

    int maxDigitForSecondNumber = getMaxDigit(secondNumber);
    int minDigitForSecondNumber = getMinDigit(secondNumber);

    int sumOfFirstNumber = findSum(maxDigitForFirstNumber, minDigitForFirstNumber);
    int productOfSecondNumber = findProduct(maxDigitForSecondNumber, minDigitForSecondNumber);

    if(sumOfFirstNumber == productOfSecondNumber)
    {
        cout<<"EQUAL"<<endl;
    }
    else
    {
        cout<<"NOT EQUAL"<<endl;
    }

    return 0;
}
