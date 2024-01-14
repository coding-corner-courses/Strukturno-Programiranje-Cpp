#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

// Задача 7
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 20 карактери.
//Внесениот пасворд треба да се провери дали е валиден.
//Валиден пасворд е оној кој има минимална должина од 6 карактери и не соддржи ниеден од следните карактери (A,a,@, i, I, !)
//Резултатот да се отпечати.
//
//Валидни пасворди: test12345, room###123, pool$5976
//Невалидни пасворди: te123, location23, loc@897, locAL000

int checkIfValid(char *password){

    if(strlen(password)<6){
        return 0;
    }

    // strpbrk ( const char * str1, const char * str2 ) - Returns a pointer to the first occurrence in str1 of any of the characters
    // that are part of str2, or a null pointer if there are no matches.

    char characters[]="Aa@iI!";

    char *pnt = strpbrk(password, characters);

    if(pnt==NULL){
        return 1;
    }

    return 0;
}

int main()
{
    char password[20];

    cin>>password;

    int isValid = checkIfValid(password);

    cout<<"Is valid: "<<isValid<<endl;

    return 0;
}
