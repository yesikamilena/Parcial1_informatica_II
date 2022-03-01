#include <iostream>
#include<math.h>

using namespace std;
string int2bin(int texto);

int main()
{
    int entero=171;
    string binario;
    binario=int2bin(entero);
    cout<<binario;
    return 0;
}

string int2bin(int entero)
{
    string binario;
    for(int i=7; i>=0; i--){;
        if(entero>=pow(2, i)){
            binario.push_back('1');
            entero=entero-pow(2,i);
        }
        else{
            binario.push_back('0');
        }
    }
    return binario;
}
