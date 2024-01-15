#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

//Задача 8
//Да се напиши програма со која ќе може да се внеси стринг од 30 карактери и стринг кој претставува слог.
//Програмата е потребно да провери колку пати слогот се соддржи првовнесениот стринг. Да се игнорираат мали и големи карактери.
//Резултатот да се отпечати.
//
//Пр. ponrtOnxyzonLMNoNOpgrsTUVwXyZ123
//       on
//
//Output: 4

int countOccurence(char *mainWord, char *subWord)
{
    int counter = 0;
    int subWordIndex=0;


    for(int i=0; i<strlen(mainWord); i++){

        if(toupper(subWord[subWordIndex])!=toupper(mainWord[i]) && subWordIndex!=0 ){
            subWordIndex=0;
        }

        if(toupper(subWord[subWordIndex])==toupper(mainWord[i])){
            subWordIndex++;
        }

        if(subWordIndex==strlen(subWord))
        {
            counter++;
            subWordIndex=0;
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

    cout<<countOccurence(mainWord, subWord);

    return 0;
}
