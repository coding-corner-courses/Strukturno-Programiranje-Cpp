#include<iostream>
using namespace std;

//Задача 12
//Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
//Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи,
//кои ги има таа низа. Функцијата е зададена со следниот прототип:
//
//int BrojPozitivni(int niza[], int n);
//
//Да се напише и функција main() за тестирање на функцијата BrojPozitivni.
double BrojPozitivni(int *numbers, int n){

    int increment =0;

    // провери ја вредноста каде што покажува numbers
    if(*numbers>0){
        increment = 1;
    }

    if(n == 0){
        return increment;
    }

    // покажувачот на низата numbers го зголемуваме за 1
    return increment + BrojPozitivni(numbers+1, n-1);
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

    // n-1, бидејќи започнуваме со проверка на последниот елемент на низата
    double counter = BrojPozitivni(numbers, n-1);

    cout<<counter<<endl;

    return 0;
}
