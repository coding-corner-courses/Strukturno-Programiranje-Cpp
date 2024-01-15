#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

//Задача 9
//Да се напиши програма која ќе генерира магичен збор.
//Програмата треба да овозможи внесување на еден збор со минимум 6 карактери
//и потребно е да генерира магичен збор така што првите 4 карактери од внесениот
//збор ќе бидат прилепени на крајот од зборчето “magic”.
//
//	Пр. w@t3rmelon
//
//	Output: magicw@t3

int main()
{
    char magic[]="magic";

    char word[30];
    cin>>word;

    if(strlen(word)<6)
    {
        cout<<"Not valid word"<<endl;
    }
    else
    {

        strncat(magic, word, 4);

        cout<<"Magic: "<<magic<<endl;
    }

    return 0;
}
