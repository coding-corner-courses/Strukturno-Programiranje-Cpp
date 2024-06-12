#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

/*
Задача 1 - Дополнителни задачи за вежбање
Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

Влез:
9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
2
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321

Излез:
Kfd?vsvv98_89vvsv?dfK
*/

bool isPalindrome(char *characters){

    int n=strlen(characters);

    int hasSpecialCharacter = 0;

    for(int i=0; i<n/2; i++){

        if(characters[i]!=characters[n-i-1]){
           return 0;
        }

        // Check if the character is speacial char.
        if(!isalpha(characters[i]) && !isdigit(characters[i])){
            hasSpecialCharacter = 1;
        }
    }

    return hasSpecialCharacter;
}

int main()
{


    int n;
    cin>>n;

    char maxLengthPalindrome[80];
    char characters[80];
    int maxLength=0;

    for(int i=0; i<n; i++){

        cin>>characters;

        if(isPalindrome(characters)){

            if(strlen(characters)>maxLength){

                strcpy(maxLengthPalindrome, characters);
                maxLength = strlen(maxLengthPalindrome);
            }
        }

    }


    if(maxLength !=0 ){
        cout<<maxLengthPalindrome<<endl;
    }
    else {
        cout<<"Nema!"<<endl;
    }

    return 0;
}
