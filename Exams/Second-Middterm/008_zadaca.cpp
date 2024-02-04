#include<iostream>
#include <cstring>
#include<ctype.h>

using namespace std;

//Задача 8
//Од стандарден влез се читаат непознат број на редови додека не се прочита 0.
//Да се најде најдолгиот ред во кој има барем 2 цифри. Потоа, на стандарден излез да се
//испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра
//(заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот.
//Се претпоставува дека ниту еден ред не е подолг од 100 знаци.
//
//dat.txt:
//    aaa123aa222aa2aaa23aaaaa22
//    aaaaaaaaaaaa 23aaaa
//    123 aaa aaa aaa aaa 12345 aaa aaa 2a
//    0
//Излез:
//    123 aaa aaa aaa aaa 12345 aaa aaa 2

int main()
{

    char line[100];
    char maxLine[100];
    int indexOfLastDigit=0;

    cin.getline(line, 100);

    while(strcmp(line, "0")!=0)
    {

        int counterOfDigits = 0;

        for(int i=0; i<strlen(line); i++)
        {

            if(isdigit(line[i]))
            {
                counterOfDigits++;

                if(counterOfDigits==2 && strlen(maxLine)<=strlen(line))
                {
                    strcpy(maxLine, line);
                }
                else if(counterOfDigits>=2 && strcmp(maxLine,line)==0)
                {
                    indexOfLastDigit=i;
                }
            }

        }
        cin.getline(line, 100);
    }
    
    int firstDigit = 0;

    for(int i=0;i<=indexOfLastDigit;i++){
                
         if(isdigit(maxLine[i])){
            firstDigit=1;
         }
         
         if(firstDigit==1){
            cout<<maxLine[i];
         }
    }

    cout<<endl;
    
    return 0;
}
