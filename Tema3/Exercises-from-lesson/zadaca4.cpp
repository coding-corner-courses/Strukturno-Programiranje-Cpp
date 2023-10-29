#include <iostream>

using namespace std;

// Задача 4
//Напишете програма која ќе проверува дали внесен број е делив со 3, 5 ,7 или 11. Програмата соодветно го печати бројот и неговиот делител.
//Доколку бројот не е делив со ниеден од наведените броеви да се отпечати “The number is not divisible with the expected numbers”.
int main()
{
    int number;

    cin>>number;

    if(number % 3 == 0){
        cout<<"Divisible with 3"<<endl;
    }
    else if(number % 5 == 0){
        cout<<"Divisble with 5"<<endl;
    }
    else if(number % 7 == 0){
        cout<<"Divisible with 7"<<endl;
    }
    else if(number % 11 == 0){
        cout<<"Divisble with 11"<<endl;
    }
    else {
        cout<<"The number is not divisble with the expected numbers";
    }

    return 0;
}
