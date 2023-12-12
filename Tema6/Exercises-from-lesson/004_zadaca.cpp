#include <iostream>

using namespace std;

// Задача4
//Напиши програма која од стандарден влез ќе прочита број на елементи (n < 100) што ќе ги содржи една низа од природни броеви.
//Од стандарден влез внеси ги n-те броеви.
//Креирај нова низа која ќе биди трансформација на внесената низа така што секој елемент ќе биди трансформиран во својот број на единици.
//Отпечати ја добиената низа.
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

    for(int i=0; i<n; i++){

        numbers[i]=numbers[i]%10;
    }
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
