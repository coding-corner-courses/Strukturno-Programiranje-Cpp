#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

//Задача 8
// Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално,
//одлево-надесно и оддесно-налево. Притоа секој елемент од матрицата претставува буква од англиската азбука.

//пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)
//
//T H A I R E
//E S N K N E
//M I M J O L
//M F S P S T
//I F G E L O
//X U T Y O E
//Од стандарден влез се чита квадратна матрица од ред n (3 <= n <= 50), составена од знаци.
//Прво се чита бројот n - бројот на редици (колони) на матрицата, а потоа и самите елементи на матрицата (види пример).
//По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.
//
//Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот
//(хоризонтално или вертикално, одлево-надесно или оддесно-налево).
//Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот.
//Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување,
//гледано елемент по елемент како што се чита матрицата.
//
//Доколку не се пронајде зборот, тогаш се печати Not Found.

void insertMatrix(char matrix[][50], int n, int m)
{

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            char character;

            cin>>character;

            matrix[i][j]=character;
        }
    }
}

void printMatrix(char matrix[][50], int n, int m)
{

    cout<<"Matrix: "<<endl;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }
}

int checkByRowLeftToRight(char matrix[][50], int n, char findWord[])
{

    for(int i=0; i<n; i++)
    {
        char word[n];

        for(int j=0; j<n; j++)
        {
            word[j]=matrix[i][j];
        }

        // converts c string to c++ string object, so we can use the find function
        int index= string(word).find(findWord);

        if(index!=-1)
        {
            cout<<i<<", "<<index<<" -> "<<i<<", "<<index+strlen(findWord)-1<<endl;
            return 1;
        }
    }

    return -1;
}

int checkByRowRightToLeft(char matrix[][50], int n, char findWord[])
{

    for(int i=0; i<n; i++)
    {
        char word[n];

        for(int j=0; j<n; j++)
        {
            word[n-j-1]=matrix[i][j];
        }

        // converts c string to c++ string object, so we can use the find function
        int index= string(word).find(findWord);

        if(index!=-1)
        {
            cout<<index<<", "<<i+1<<" -> "<<index+strlen(findWord)-1<<", "<<i+1<<endl;
            return 1;
        }
    }

    return -1;
}

int checkByColumnTopDown(char matrix[][50], int n, char findWord[])
{
    //iterate by column
    for(int j=0; j<n; j++)
    {
        char word[n];

        // iterate by row
        for(int i=0; i<n; i++)
        {
            word[i]=matrix[i][j];
        }

        // converts c string to c++ string object, so we can use the find function
        int index= string(word).find(findWord);

        if(index!=-1)
        {
            cout<<index<<", "<<j<<" -> "<<index+strlen(findWord)-1<<", "<<j<<endl;
            return 1;
        }
    }

    return -1;
}

int checkByColumnDownTop(char matrix[][50], int n, char findWord[])
{
    //iterate by column
    for(int j=0; j<n; j++)
    {
        char word[n];

        // iterate by row
        for(int i=0; i<n; i++)
        {
            word[n-i-1]=matrix[i][j];
        }

        // converts c string to c++ string object, so we can use the find function
        int index= string(word).find(findWord);

        if(index!=-1)
        {
            cout<<index+strlen(findWord)-1<<", "<<j<<" -> "<<index<<", "<<j<<endl;
            return 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    int MAX_LEN=10;

    char matrix[50][50];
    char word[MAX_LEN];

    insertMatrix(matrix, n, n);

    cin.ignore();
    cin.getline(word, MAX_LEN);

    if(checkByRowLeftToRight(matrix, n, word)!=-1)
    {
        return 0;
    }
    
    if(checkByColumnTopDown(matrix, n, word)!=-1)
    {
        return 0;
    }

    if(checkByRowRightToLeft(matrix, n, word)!=-1)
    {
        return 0;
    }

    if(checkByColumnDownTop(matrix, n, word)!=-1)
    {
        return 0;
    }


    cout<<"Not Found"<<endl;

    return 0;
}
