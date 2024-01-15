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

int countOcurrence(char *mainWord, char *subWord){

    int counter = 0;
    int index = 0;

    for(int i=0; i<strlen(mainWord); i++){

        if(toupper(mainWord[i])!= toupper(subWord[index]) && index!=0){
            index=0;
        }

        if(toupper(mainWord[i])== toupper(subWord[index])){
            index++;
        }

        if(index==strlen(subWord)){

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
