#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

//Задача 10
//Од стандарден влез прво се читаат два знака z1 и z2 ,
//а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).
//
//Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се
//наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
//
//Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2,
//знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
//
//Input:
//0 9
//nfjskdz0nvjkfdmnlks9bvfkjmcdz,
//bfhjdskvfdkl0fvkdzddjmje k dmkldz kdfds!%mlacsd9
//0fbnrjkdn9
//fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka
//#

int main()
{
    char firstLine[5];

    cin.getline(firstLine, 5);

    char firstCharacter = firstLine[0];
    char secondCharacter = firstLine[2];

    char line[80];

    cin.getline(line, 80);

    while(strcmp(line, "#")!=0)
    {

        int firstCharacterAppeared = 0;

        for(int i=0; i<strlen(line); i++)
        {

            if(line[i]==firstCharacter)
            {
                firstCharacterAppeared=1;
            }
            else if(firstCharacterAppeared && line[i]!=secondCharacter)
            {
                cout<<line[i];
            }

            if(line[i]==secondCharacter)
            {
                cout<<endl;
                break;
            }
        }
        cin.getline(line, 80);
    }

    return 0;
}
