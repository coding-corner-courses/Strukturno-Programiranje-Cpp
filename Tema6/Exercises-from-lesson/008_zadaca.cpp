#include <iostream>

using namespace std;

//Задача8
//Напиши програма која од стандарден влез ќе прочита две низи од цели броеви. Програмата е потребно да провери дали двете низи се еднакви.
//Да се испечати резултатот од споредбата.
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

bool checkEqual(int firstArray[], int n1, int secondArray[], int n2){

    if(n1 != n2){
        return 0;
    }

    for(int i=0; i<n1; i++){

        if(firstArray[i]!=secondArray[i]){
            return 0;
        }
    }

    return 1;
}

int main()
{

    int n1, n2;

    cin>>n1>>n2;

    int firstArray[n1];
    int secondArray[n2];

    cout<<"Fill first array"<<endl;
    fillArray(firstArray, n1);
    printArray(firstArray, n1);

    cout<<"Fill second array"<<endl;
    fillArray(secondArray, n2);
    printArray(secondArray, n2);

    bool areEqual = checkEqual(firstArray, n1, secondArray, n2);

    if(areEqual){
        cout<<"EQUAL"<<endl;
    }else {
        cout<<"NOT EQUAL"<<endl;
    }

    return 0;
}
