#include<iostream>
#include<cstring>
using namespace std;

//Задача 4
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да ги тргне сите специјални карактери од низата. Резултатот да се отпечати.
//
//Sample Input: a@@b?c``d
//Sample Output: abcd

void removeSpecialCharacters(char *characters)
{

    char removedSpecialCharacters[50];

    int n = strlen(characters);
    int index = 0;

    for(int i=0; i<n; i++)
    {

        if(isalnum(characters[i])){
            removedSpecialCharacters[index]=characters[i];
            index++;
        }
    }

    removedSpecialCharacters[index]='\0';

    cout<<removedSpecialCharacters<<endl;
}

int main()
{

    char characters[50];

    cin>>characters;

    removeSpecialCharacters(characters);

    return 0;
}
