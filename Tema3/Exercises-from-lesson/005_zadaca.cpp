#include <iostream>

using namespace std;

// Задача 5
//Напишете програма која ќе проверува дали внесен карактер е голема буква. Отпечатете го резултатот на екран.
//Големите букви во ASCII се во рангот [65,90]
int main()
{
    char character;

    cin>>character;

    int codeCharacter = (int) character;

    if(codeCharacter >= 65 && codeCharacter <= 90){
        cout<<"UPPER CASE LETTER"<<endl;
    }

    return 0;
}
