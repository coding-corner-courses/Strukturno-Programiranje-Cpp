#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

// Задача 5
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 20 карактери.
//Внесениот пасворд да се трансформира во нов пасворд така што секоја мала буква ќе биде трансформирана во голема буква,
//а секоја голема буква ќе биде трансформирана во мала буква.Новодобиениот пасворд да се отпечати.
//
//	Пр. #teST123vO
//
//	Output: #TEst123Vo


void transformPassword(char *password){

    for(int i=0;i<strlen(password); i++){

        if(isalpha(password[i]) && isupper(password[i])){
            password[i]=tolower(password[i]);
        }
        else if(isalpha(password[i]) && islower(password[i])){
            password[i]=toupper(password[i]);
        }
    }
}

int main()
{
    char password[20];

    cin>>password;

    transformPassword(password);

    cout<<password<<endl;

    return 0;
}
