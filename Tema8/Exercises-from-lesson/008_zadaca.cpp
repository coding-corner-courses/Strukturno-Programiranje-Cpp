#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

//Задача 8
//Да се напиши програма со која ќе може да се внеси стринг од 30 карактери и стринг кој претставува слог.
//Програмата е потребно да провери колку пати слогот се соддржи првовнесениот стринг. Да се игнорираат мали и големи карактери.
//Резултатот да се отпечати.
//
//Пр. pоnrtOnxyzonLMNоNOpqrsTUVwXyZ123
//       on
//
//Output: 4

int countOcurrence(char *mainWord, char *subWord)
{

    int counter = 0;
    int index = 0;

    for(int i=0; i<strlen(mainWord); i++)
    {

        // Ако сме започнале со проверка на subWord (index!=0)
        // и ако соодветните карактери се различни,
        // тогаш сетирај го индексот на subWord да е 0
        if(toupper(mainWord[i])!= toupper(subWord[index]) && index!=0)
        {
            index=0;
        }

        // Ако соодветните големи карактери се исти, тогаш зголеми го индексот на subWord
        if(toupper(mainWord[i])== toupper(subWord[index]))
        {
            index++;
        }

        // Ако сме стигнале до крајот на subWord, тогаш сетирај го индексот на 0
        if(index==strlen(subWord))
        {

            index=0;
            counter++;
        }
    }

    return counter;
}
int main()
{
    char mainWord[30];
    cin>>mainWord;

    char subWord[30];
    cin>>subWord;

    int result = countOcurrence(mainWord, subWord);

    cout<<"Result: "<<result<<endl;

    return 0;
}
