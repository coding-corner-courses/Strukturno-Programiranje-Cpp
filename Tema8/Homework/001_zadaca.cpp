#include<iostream>
#include<cstring>
using namespace std;

//Задача 1
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да провери дали карактерите ‘e’ и ‘g’ се оделени точно 2 места барем еднаш во низата.
//Резултатот да се отпечати.
//
//Sample Input: eagerer
//Sample Output: eagerer -> 1
//
//Sample Input: eaaagerer
//Sample Output: eaaagerer -> 0

int checkAppearanceOfCharacters(char *characters)
{

    // Counts the spaces between 'e' and 'g'
    int counter = -1;

    for(int i=0; i<strlen(characters); i++)
    {
        //when 'e' appeared start counting
        if(characters[i]=='e')
        {
            counter=0;
        }
        //when the first match is found, return 1
        else if(counter == 1 && characters[i]=='g')
        {
            return 1;
        }
        //when there is no match, re-initialize the variable
        else if(counter == 1 && characters[i]!='g' )
        {
            counter=-1;
        }
        else if(counter>=0){
            counter++;
        }
    }

    return 0;
}

int main()
{

    char characters[100];

    cin>>characters;

    int result = checkAppearanceOfCharacters(characters);

    cout<<"Result: "<<result<<endl;

    return 0;
}

