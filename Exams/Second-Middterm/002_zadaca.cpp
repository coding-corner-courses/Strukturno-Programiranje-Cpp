#include<iostream>

using namespace std;

//Задача 2
//На стандарден влез се дадени повеќе редови со броеви така што секој ред
//започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во истиот ред.
//Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра.
//Читањето на броеви завршува кога ќе се прочита бројот 0.


int findMainDigit(int number)
{

    if(number/10==0)
    {
        return number;
    }

    return findMainDigit(number/10);
}

void insertArrayAndFindMainDigit(int numbers[], int n)
{

    int number;

    int mainDigit;

    int maxIndex=0;
    int mainMaxDigit=0;


    for(int i=0; i<n; i++)
    {

        cin>>number;
        numbers[i]=number;

        mainDigit = findMainDigit(number);

        if(mainDigit>mainMaxDigit)
        {
            mainMaxDigit=mainDigit;
            maxIndex=i;
        }

    }

    cout<<numbers[maxIndex]<<endl;
}

int main()
{
    int firstNumber;

    int numbers[100];

    cin>>firstNumber;

    while(firstNumber!=0)
    {
        insertArrayAndFindMainDigit(numbers, firstNumber);
        cin>>firstNumber;
    }

    return 0;
}
