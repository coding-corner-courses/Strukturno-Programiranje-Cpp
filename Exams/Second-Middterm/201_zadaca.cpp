#include <iostream>
#include<cstring>

using namespace std;

//Испит Јуни 13, 2024 (Задача 2)
//Напиши програма која ќе овозможи внесување на низа од знаци.
//Програмата е потребно да отпечати кој карактер се појавува најмалку пати во низата и да се отпечати бројот на појавувања.
//Доколку има повеќе такви карактери да се отпечати првиот карактер кој се појавува во низата.
//Пр.  Test
//
//Излез: T 1

//Пр.  kalabalak
//
//Излез: b 1


// Бидејќи не го знам целосниот текст на задачата, имам две претпоставки направено
// Препоставка: Доколку има повеќе карактери кои се појавуваат ист број на пати, да се отпечати првиот карактер кој што се појавува во низата
// Претпоставка: Мали од големи букви се бројат како различен карактер

// Доколку знаете како е точниот текст на задачата, контактирајте ме за да ја поправам задачата и решението

int main()
{
    char characters[100];

    cin>>characters;

    int lengthOfArray = strlen(characters);

    char charWithMinOcurrences = characters[0];
    int minOccurences = lengthOfArray;

    for(int i=0; i<lengthOfArray; i++)
    {
        int charOccurences = 0;
        for(int j=0; j<lengthOfArray; j++)
        {
            if(characters[i]==characters[j])
            {
                charOccurences++;
            }
        }

        if(minOccurences>charOccurences)
        {
            minOccurences = charOccurences;
            charWithMinOcurrences= characters[i];
        }
    }

    cout<<charWithMinOcurrences<<" "<<minOccurences<<endl;


    return 0;
}
