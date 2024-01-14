#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

// Задача 6
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 20 карактери.
//Внесениот пасворд треба да се провери дали е валиден.
//Валиден пасворд е оној кој има минимална должина од 8 карактери и во себе соддржи барем една голема буква,
//барем една мала буква и барем една цифра. Резултатот да се отпечати.
//
//	Валидни пасворди: loCAT1on, sw33Et123!, 123TeSt567
//	Невалидни пасворди: tRy12, try123456, TRY1234567, 12345!

int checkIfValid(char *password){

    if(strlen(password)<8){
        return 0;
    }

    int hasUpperAlpha,hasLowerAlpha,hasDigit=0;

    for(int i=0; i< strlen(password); i++){

        if(isalpha(password[i]) && isupper(password[i])){
            hasUpperAlpha=1;
        }

        if(isalpha(password[i]) && islower(password[i])){
            hasLowerAlpha=1;
        }

        if(isdigit(password[i])){
            hasDigit=1;
        }
    }

    return hasUpperAlpha && hasLowerAlpha && hasDigit;
}

int main()
{
    char password[20];

    cin>>password;

    int isValid = checkIfValid(password);

    cout<<"Is valid: "<<isValid<<endl;

    return 0;
}
