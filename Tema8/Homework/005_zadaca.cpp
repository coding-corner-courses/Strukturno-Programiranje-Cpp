#include<iostream>
#include<cstring>
using namespace std;

//Задача 5
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да провери дали има два последователни исти карактери во низата.
//Резултатот да се отпечати.
//
//Пр.:
//("Exercises") -> 0
//("Yellow") -> 1

int checkEqualConsecutiveChars(char *characters)
{
    int n = strlen(characters);

    for(int i=0; i<n-1; i++)
    {

        if(characters[i] == characters[i+1])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    char characters[50];

    cin>>characters;

    int result = checkEqualConsecutiveChars(characters);

    cout<<"Result: "<<result<<endl;

    return 0;
}
