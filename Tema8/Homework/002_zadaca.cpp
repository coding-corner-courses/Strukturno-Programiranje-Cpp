#include<iostream>
#include<cstring>
using namespace std;

//Задача 2
//Напиши програма каде преку тастатура ќе се внеси низа од карактери.
//Програмата е потребно да провери низата е палиндром или не, не земајќи во предвид мала/голема буква.
//Резултатот да се отпечати.
//
//Sample Input: Мadam
//Sample Output: 1

int checkPalindrome(char *characters)
{

    int n = strlen(characters);

    for(int i=0; i<n/2; i++)
    {
        if(toupper(characters[i])!=toupper(characters[n-i-1])){
            return 0;
        }
    }

    return 1;
}

int main()
{

    char characters[100];

    cin>>characters;

    int result = checkPalindrome(characters);

    cout<<"Result: "<<result<<endl;

    return 0;
}
