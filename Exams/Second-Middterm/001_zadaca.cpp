#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

//Задача 1
//Се внесуваат низи од значи од стандарден влез.
//Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
//Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран,
//секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
//Читањето завршува кога ќе се прочита знакот #.
//
//Пример:
//
//IO is short for Input Output
//medioio medIo song
//#
//Излез:
//
//io
//ou
//io
//oi
//io
//io
//6

// The function returns 1 if the character is upper case or lower case vowel
int isVowel(char character)
{

    char upperLetter = toupper(character);

    return upperLetter == 'A' || upperLetter=='E'
           || upperLetter=='I' || upperLetter=='O'
           || upperLetter=='U';
}

// The function returns the number of contiguous vowels in the sentence
int checkArray(char characters[])
{

    int counter=0;

    int n = strlen(characters);

    for(int i=0; i<n-1; i++)
    {

        char firstChar = tolower(characters[i]);
        char secondChar = tolower(characters[i+1]);

        if(isVowel(firstChar)&& isVowel(secondChar))
        {
            counter++;
            cout<<firstChar<<secondChar<<endl;
        }
    }

    return counter;
}

int main()
{
    char characters[200];

    cin.getline(characters, 200);
    
    int counter = 0;

    // check the sentence while the sentence is not equal to "#"
    while(strcasecmp(characters, "#")!=0)
    {

        counter += checkArray(characters);

        cin.getline(characters, 200);
    }

    cout<<counter<<endl;

    return 0;
}
