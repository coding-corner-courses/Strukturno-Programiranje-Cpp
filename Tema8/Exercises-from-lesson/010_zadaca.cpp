#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

//Задача 10
//Напиши програма која ќе овозможи внесување на два стрингови од минимум 5 карактери.
//Доколку првиот стринг е поголем од вториот стринг тогаш трансформрај ги првите три карактери од првиот стринг да бидат еднакви на “+”.
//Доколку првиот стринг е помал од вториот стринг тогаш трансформирај ги првите три карактери од првиот стринг да бидат “-_-”.
//Доколку двата стрингови се еднакви, тогаш трансформирај ги првите три карактери од двата стрингови да бидат еднакви на “=”.
//Двата стрингови да се отпечатат.
//
//Пр.1
//Input: ananas123	banana123
//Output: -_-nas123 	banana123
//
//Пр.2
//Input: banana123	ananas123
//Output: +++ana123 ananas123
//
//Пр.3
//Input: jabolko123	jabolko123
//Output: ===olko123 	===olko123

int main()
{
    char firstWord[30];
    cin>>firstWord;

    char secondWord[30];
    cin>>secondWord;

    if(strlen(firstWord)<5 || strlen(secondWord)<5)
    {
        cout<<"Invalid input"<<endl;
    }
    else
    {

        if(strcmp(firstWord, secondWord)<0)
        {
            strncpy(firstWord, "-_-", 3);
        }
        else if (strcmp(firstWord, secondWord)>0)
        {
            strncpy(firstWord, "+++", 3);
        }
        else
        {
            strncpy(firstWord, "===", 3);
            strncpy(secondWord, "===", 3);
        }

        cout<<firstWord<<endl;
        cout<<secondWord<<endl;
    }

    return 0;
}
