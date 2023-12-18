#include <iostream>

using namespace std;

// Задача 1
// Од стандарден влез се читаат соодветно низа со М елементи и низа со N елементи. 
// Ваша задача е да ги споите двете низи во трета сортирана низа по растечки редослед.
// Се внесува M па должината на првата низа, па N, па втората низа.
// Напомена: Елементите во двете низи се сортирани.
// Максималната должина на низите е 100. Не смеете да користите алгоритам за сортирање.

void insertArray(int newArray[], int n)
{

    for(int i=0; i<n; i++)
    {

        int number;

        cin>>number;

        newArray[i]=number;
    }
}


void printArray(int newArray[], int n)
{

    for(int i=0; i<n; i++)
    {

        cout<<newArray[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int n, m;

    cin>>n;

    int niza1[n];

    insertArray(niza1, n);

    cin>>m;

    int niza2[m];

    insertArray(niza2, m);

    int resultN = m+n;

    int resultArray[resultN];

    int indexArray1=0;
    int indexArray2=0;

    for(int i=0; i< resultN ; i++)
    {


        if((indexArray1 < n && indexArray2 >= m) || niza1[indexArray1] <= niza2[indexArray2])
        {

            resultArray[i]=niza1[indexArray1];
            indexArray1++;
        }
        else if((indexArray1 >= n && indexArray2 < m) || niza1[indexArray1] > niza2[indexArray2])
        {

            resultArray[i]=niza2[indexArray2];
            indexArray2++;
        }
    }

    printArray(niza1, n);
    printArray(niza2, m);
    printArray(resultArray, resultN);

    return 0;
}
