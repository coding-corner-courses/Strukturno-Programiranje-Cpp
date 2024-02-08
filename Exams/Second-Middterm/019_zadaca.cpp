#include<iostream>
#include<ctype.h>
#include<cstring>

using namespace std;

//Задача 19
//Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци.
//На почетокот на програмата се читаат два цели броеви:
//
//N - бројот на низи од знаци кои ќе се читаат и
//X - поместување.
//Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите
//и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z).
//Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
//
//Трансформацијата да се имплементира со посебна рекурзивна функција.
//
//Пример:
//
//Welcome -> трансформирано со поместување 5 -> Bjqhtrj

char transformChar(char character, int pomestuvanje)
{

    int vozmozhnoPomestuvanje=pomestuvanje %26;
    int pomestuvanjeDoKraj =0;
    char firstChar;

    if(!isalpha(character))
    {
        return character;
    }

    if(isupper(character))
    {
        pomestuvanjeDoKraj=(int)'Z'- (int)character;
        firstChar='A';
    }
    else if(islower(character))
    {
        pomestuvanjeDoKraj=(int)'z'- (int)character;
        firstChar='a';
    }

    if(pomestuvanje<=pomestuvanjeDoKraj)
    {
        return (char)((int)character + pomestuvanje);
    }

    pomestuvanje=pomestuvanje-pomestuvanjeDoKraj;

    return (char)((int)firstChar + pomestuvanje -1);
}

void convertString(char *characters, int pomestuvanje)
{
    if(*characters == '\0')
    {
        return;
    }

    *characters=transformChar(*characters, pomestuvanje);
    characters++;
    convertString(characters, pomestuvanje);
}

int main()
{
    int n,x;

    scanf("%d %d", &n, &x);

    char firstLine[80];

    // ignore the first line which was read with scanf
    cin.getline(firstLine, 80);

    for(int i=0; i<n; i++)
    {
        char input[80];
        cin.getline(input, 80);
        
        convertString(input,x);
        
        cout<<input<<endl;
    }

    return 0;
}
