#include <iostream>

using namespace std;

// Задача 6
//Напиши програма каде преку тастатура ќе биде внесен цел број.
//Доколку бројот е поголем од 5 и е делив со 5, отпечати “Bingo!”.
//Реши ја задачата со и без вгнезден if израз.
int main()
{
    int number;

    cin>>number;

    // Со вгнездена if структура
//    if(number > 5){
//        if(number % 5 == 0){
//            cout<<"Bingo!"<<endl;
//        }
//    }


    // Без вгнездена if структура
    if(number > 5 && number % 5 == 0){
        cout<<"Bingo!"<<endl;
    }

    return 0;
}
