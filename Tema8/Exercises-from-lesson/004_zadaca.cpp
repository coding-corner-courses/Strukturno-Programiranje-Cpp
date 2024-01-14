#include<iostream>
#include<cstring>
using namespace std;

// Задача 4
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 20 карактери и должина n за трансформација.
//Внесениот пасворд да се трансформира во нов пасворд така што првите n карактери ќе бидат на крајот од пасвордот,
//а останатите length - n карактери ќе бидат поставени на почетокот на стрингот.
//Новодобиениот пасворд да се отпечати.
//
//Пр. n = 5
//      testP asvord123
//Output: asvord123testP
//
//Пр. n = 3
//       @vt0m0bil
//Output: 0m0bil@vt

void transformPassword(char *password, int n){

    char firstPart[n];

    strncpy(firstPart, password, n);

    char secondPart[strlen(password)-n];

    for(int i=0; i<strlen(password)-n;i++){
        secondPart[i]=password[i+n];
    }

    secondPart[strlen(password)-n]='\0';

    strcat(secondPart, firstPart);

    strcpy(password, secondPart);

}

int main()
{
    int n;

    cin>>n;

    char password[20];

    cin>>password;

    transformPassword(password, n);

    cout<<password<<endl;

    return 0;
}
