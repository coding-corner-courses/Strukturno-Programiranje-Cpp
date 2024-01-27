#include<iostream>
#include<cstring>
using namespace std;

//Задача 3
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да внеси цртка помеѓу два непарни броеви во низата од карактери. Резултатот да се отпечати.
//
//Sample Input: 1345789
//Sample Output: Result-> 1-345-789


void transformCharacters(char *characters)
{

    char transformedCharacters[50];

    int n = strlen(characters);
    int index = 0;

    for(int i=0; i<n; i++)
    {
        int firstDigit = characters[i]-'0';
        int secondDigit = 0;

        if(i+1<n){
            secondDigit = characters[i+1]-'0';
        }

        transformedCharacters[index]=characters[i];
        index++;

        if(firstDigit%2==1 && secondDigit%2==1){
            transformedCharacters[index]='-';
            index++;
        }
    }

    transformedCharacters[index]='\0';

    cout<<transformedCharacters<<endl;
}

int main()
{

    char characters[50];

    cin>>characters;

    transformCharacters(characters);

    return 0;
}
