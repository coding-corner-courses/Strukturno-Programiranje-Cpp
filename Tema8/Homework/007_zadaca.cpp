#include<iostream>
#include<cstring>
using namespace std;

//Задача 7
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да провери дали низата се состои само од уникатни карактери.
//Резултатот да се отпечати.
//
//Пр.:
//("Filename") -> 0
//("abc") -> 1

int checkUniqueCharacters(char *characters)
{
    char uniqueCharacters[50];
    uniqueCharacters[0]='\0';

    int n = strlen(characters);
    int index = 0;

    for(int i=0; i<n; i++)
    {

        // if the character doesn't exist in the string, strchr returns NULL
        if(strchr(uniqueCharacters, characters[i])==NULL)
        {

            uniqueCharacters[index]=characters[i];
            index++;
            uniqueCharacters[index]='\0';
        }
    }

    return strlen(uniqueCharacters)==n;
}

int main()
{
    char characters[50];
    cin>>characters;

    int isUnique = checkUniqueCharacters(characters);
    cout<<"Unique: "<<isUnique<<endl;

    return 0;
}
