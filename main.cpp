#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    char *str = new char[200];
    cin.getline(str,200,'\n');
    unsigned int i=0;
    unsigned int space_counter = 0;
    while (str[i] != '\0'){
        if (str[i] == ' ') {
            ++space_counter;
        }
        i+=1;
    }
    int k = i-space_counter;
    if (polindrom(str, i, k)){
        cout << endl << ("yes");
    }else{
        cout << endl << ("nop");
    }
    return 0;
}