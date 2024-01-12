#include <iostream>
#include <cstring>

using namespace std;

//Задача 8 (Решение 2)
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

int checkHorizontally(char matrix[][50], int n, char findWord[])
{
    int wordLength = strlen(findWord);

    for(int i=0; i<n; i++)
    {
        int indexOfWord = 0;
        int startI=-1;
        int startJ=-1;
        int endI=-1;
        int endJ=-1;

        // Regular order (LEFT-RIGHT)
        for(int j=0; j<n; j++)
        {
            int equalCharacters = matrix[i][j]==findWord[indexOfWord];

            if(startJ==-1 && equalCharacters==1)
            {
                startI=i;
                startJ=j;
                indexOfWord++;
            }
            else if(startJ!=-1 && equalCharacters!=1)
            {
                startI=-1;
                startJ=-1;
                indexOfWord=0;
            }
            else if(startJ!=-1 && equalCharacters==1 && indexOfWord!=wordLength-1)
            {
                indexOfWord++;
            }
            else if(indexOfWord==wordLength-1 && equalCharacters==1)
            {
                endI=i;
                endJ=j;
                cout<<startI<<", "<<startJ<<" -> "<<endI<<", "<<endJ<<endl;

                return 1;
            }
        }

        // Reset start and finish index
        indexOfWord = 0;
        startI=-1;
        startJ=-1;
        endI=-1;
        endJ=-1;

        // Reverse order (RIGHT-LEFT)
        for(int j=0; j<n; j++)
        {
            int equalCharacters = matrix[i][j]==findWord[wordLength-indexOfWord-1];

            if(startJ==-1 && equalCharacters==1)
            {
                startI=i;
                startJ=j;
                indexOfWord++;
            }
            else if(startJ!=-1 && equalCharacters!=1)
            {
                startI=-1;
                startJ=-1;
                indexOfWord=0;
            }
            else if(startJ!=-1 && equalCharacters==1 && indexOfWord!=wordLength-1)
            {
                indexOfWord++;
            }
            else if(indexOfWord==wordLength-1 && equalCharacters==1)
            {
                endI=i;
                endJ=j;
                cout<<startJ<<", "<<startI+1<<" -> "<<endJ<<", "<<endI+1<<endl;

                return 1;
            }
        }
    }

    return 0;
}

int checkVertically(char matrix[][50], int n, char findWord[])
{

    int wordLength = strlen(findWord);

    for(int j=0; j<n; j++)
    {
        int indexOfWord = 0;
        int startI=-1;
        int startJ=-1;
        int endI=-1;
        int endJ=-1;

        // Regular order (TOP-BOTTOM)
        for(int i=0; i<n; i++)
        {
            int equalCharacters = matrix[i][j]==findWord[indexOfWord];

            if(startJ==-1 && equalCharacters==1)
            {
                startI=i;
                startJ=j;
                indexOfWord++;
            }
            else if(startJ!=-1 && equalCharacters!=1)
            {
                startI=-1;
                startJ=-1;
                indexOfWord=0;
            }
            else if(startJ!=-1 && equalCharacters==1 && indexOfWord!=wordLength-1)
            {
                indexOfWord++;
            }
            else if(indexOfWord==wordLength-1 && equalCharacters==1)
            {
                endI=i;
                endJ=j;
                cout<<startI<<", "<<startJ<<" -> "<<endI<<", "<<endJ<<endl;

                return 1;
            }
        }
        
        // Reset start and finish index
        indexOfWord = 0;
        startI=-1;
        startJ=-1;
        endI=-1;
        endJ=-1;

        // Reverse order (BOTTOM-TOP)
        for(int i=0; i<n; i++)
        {
            int equalCharacters = matrix[i][j]==findWord[wordLength-indexOfWord-1];

            if(startJ==-1 && equalCharacters==1)
            {
                startI=i;
                startJ=j;
                indexOfWord++;
            }
            else if(startJ!=-1 && equalCharacters!=1)
            {
                startI=-1;
                startJ=-1;
                indexOfWord=0;
            }
            else if(startJ!=-1 && equalCharacters==1 && indexOfWord!=wordLength-1)
            {
                indexOfWord++;
            }
            else if(indexOfWord==wordLength-1 && equalCharacters==1)
            {
                endI=i;
                endJ=j;
                cout<<endI<<", "<<endJ<<" -> "<<startI<<", "<<startJ<<endl;

                return 1;
            }
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

    if(checkHorizontally(matrix, n, word)==1)
    {
        return 0;
    }

    if(checkVertically(matrix, n, word)==1)
    {

        return 0;
    }

    cout<<"Not Found"<<endl;

    return 0;
}
