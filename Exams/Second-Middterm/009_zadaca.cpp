#include<iostream>
using namespace std;

//Задача 9
//Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$
//ќе ја пресмета вредноста на непрекинатата дропка дефинирана.
//Пр. n = 3
//Array: 10, 15, 20
//
//Calculation = 10 + 1/(15 + 1/20);
//Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100).
//Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.

double findSum(int numbers[], int indexOfElement, int n){
    
    // Од примерот може да се забележи дека рекурзијата завршува кога ќе се стигни до последниот елемент од низата (n-1)
    if(indexOfElement == n-1){
        return numbers[indexOfElement];
    }

    return numbers[indexOfElement] + 1.0 /findSum(numbers, indexOfElement+1, n);
}

int main()
{
    int n;
    cin>>n;

    int numbers[n];

    for(int i=0; i<n; i++){
        int number;
        cin>>number;
        numbers[i]= number;
    }

    double sum = findSum(numbers, 0, n);

    cout<<sum<<endl;

    return 0;
}
