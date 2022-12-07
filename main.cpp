#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char a ;
    cin >>a ;
    bool car (char &a);
    if (car (a)){
        cout<<a;
    }else{
        cout<<"errore";
    }
    return 0;
}
