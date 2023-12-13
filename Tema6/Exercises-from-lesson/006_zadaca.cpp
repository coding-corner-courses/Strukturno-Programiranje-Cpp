#include <iostream>

using namespace std;

//Задача6
//Напиши програма која од стандарден влез ќе прочита број на елементи (n<100) што ќе ги содржи една низа од природни броеви.
//Од стандарден влез внеси ги n-те броеви.
//Програмата е потребно да ги избрише дупликатите од низата. Резултатот да се испечати.
void fillArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {

        int number;
        cin>>number;

        numbers[i]=number;
    }
}

void printArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
}

bool findNumber(int numbers[], int n, int number)
{

    if(n == 0)
    {
        return 0;
    }

    for(int i=0; i<n; i++)
    {

        if(number == numbers[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    int n;

    cin>>n;

    int numbers[n];
    int numbersWithoutDuplicates[n];
    int newN = 0;

    fillArray(numbers, n);
    printArray(numbers, n);

    // numbers: 2 3 5 8 2 8 11 5
    // numbersWithoutDuplicate: 2 3 5 8 11

    for(int i=0; i<n; i++)
    {
        bool foundNumber = findNumber(numbersWithoutDuplicates, newN, numbers[i]);

        if(foundNumber == 0)
        {

            numbersWithoutDuplicates[newN]=numbers[i];
            newN++;
        }
    }

    printArray(numbersWithoutDuplicates, newN);

    return 0;
}
