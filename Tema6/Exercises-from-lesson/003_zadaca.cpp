#include <iostream>

using namespace std;

// Задача3
//Напиши програма која од стандарден влез ќе прочита број на елементи (n < 100) што ќе ги содржи една низа од природни броеви.
//Од стандарден влез внеси ги n-те броеви.
//Програмата е потребно да ги промени местата на минималната и максималната вредност во низата.

void fillArray(int numbers[], int n){

    for(int i=0; i<n;i++){

        int number;
        cin>>number;

        numbers[i]=number;
    }
}

void printArray(int numbers[], int n){

    for(int i=0; i<n; i++){
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
}

void transformArray(int numbers[], int n){

    int maxElement = numbers[0];
    int minElement = numbers[0];

    int maxIndex = 0;
    int minIndex = 0;

    for(int i=0; i<n; i++){

        if(numbers[i]> maxElement){

            maxElement = numbers[i];
            maxIndex = i;
        }

        if(numbers[i]<minElement){

            minElement = numbers[i];
            minIndex = i;
        }
    }

    numbers[minIndex] = maxElement;
    numbers[maxIndex] = minElement;
}

int main()
{

    int n;

    cin>>n;

    int numbers[n];

    fillArray(numbers, n);
    printArray(numbers, n);

    cout<<"Transform"<<endl;
    transformArray(numbers, n);
    printArray(numbers, n);

    return 0;
}
