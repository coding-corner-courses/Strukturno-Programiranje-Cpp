#include <iostream>
#include <cstring>

using namespace std;

//Задача 3 - Дополнителни задачи за вежбање
//Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци.
//Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
//Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c
//најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот.
//При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.
//
//Влез:
//6
//Ekjqh!!lkjsdh
// A1c01АA1c92
//12A1cwwA1cxy
//12A1cwwA1bxy
//аA1cwA1cA1ccA1cxab
//nemaA1c_povekjepati
//
//Излез:
//а1c01аа1c92
//12а1cwwа1cxy
//аа1cwа1cа1ccа1cxab

// Return 1 if the substring is contained 2 or more times, otherwise return false
int getArrayShouldBePrinted(char *arr)
{
    int countSubstring = 0;


    while(*arr != '\0')
    {
        if(strncmp(arr,"a1c",3)==0)
        {
            countSubstring++;
        }

        arr++;
    }

    return countSubstring>=2;
}


int main()
{
    int n;

    char arr[50];

    cin>>n;
    getchar(); // consumes the new line character /n

    // Read the n arrays
    for(int i=0; i<n; i++)
    {
        cin.getline(arr, 51);

        // Convert string to lower case only
        for(int j=0 ; j<strlen(arr); j++)
        {
            arr[j]=tolower(arr[j]);
        }


        int check = getArrayShouldBePrinted(arr);

        if(check ==1)
        {
            cout<<arr<<endl;
        }

    }

    return 0;
}
