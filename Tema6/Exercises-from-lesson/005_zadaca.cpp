#include <iostream>

using namespace std;

// Задача5
//Напиши програма која од стандарден влез ќе прочита број на елементи (n<100) што ќе ги содржи една низа од природни броеви.
//Од стандарден влез внеси ги n-те броеви.
//Програмата да го пресмета збирот на парните елементи во низата и збирот на непарните елементи во низата. Резултатот да се испечати.
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

int main()
{

    int n;

    cin>>n;

    int numbers[n];

    fillArray(numbers, n);
    printArray(numbers, n);

    int sumOdd =0;
    int sumEven =0;

    for(int i=0; i<n; i++){

        if(numbers[i]%2==0){
            sumEven+=numbers[i];
        }else {
            sumOdd+=numbers[i];
        }
    }

    cout<<"Sum even: "<<sumEven<<endl;
    cout<<"Sum odd: "<<sumOdd<<endl;

    return 0;
}
