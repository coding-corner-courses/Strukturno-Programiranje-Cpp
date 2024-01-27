#include<iostream>
#include<cstring>
using namespace std;

//Задача 6
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да отстрани специфичен карактер од низата. Резултатот да се отпечати.
//Пр.:
//("Filename", "e") -> "Filnam"
//("CompilationTime", "i") -> "ComplatonTme"

void removeCharFromArray(char *characters, char deleteChar)
{
    char removedCharacters[50];

    int n = strlen(characters);
    int index = 0;

    for(int i=0; i<n; i++)
    {

        if(characters[i]!=deleteChar){
            removedCharacters[index]=characters[i];
            index++;
        }
    }

    removedCharacters[index]='\0';

    cout<<removedCharacters<<endl;
}

int main()
{
    char characters[50];

    // Read the string including the white space
    cin.getline(characters,50);
    
    char deleteChar;

    cin>>deleteChar;

    removeCharFromArray(characters, deleteChar);

    return 0;
}
