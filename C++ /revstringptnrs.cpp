//wap to reverse a string using pointers

#include <iostream>
#include <string.h>
using namespace std;

void revString(char* str){
    char *start= str;
    char *end= str + strlen(str) - 1;
    char temp;
    while (end > start){
        temp= *start;
        *start= *end;
        *end= temp;
        ++start;
        --end;
    }
}

int main() {
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);

    revString(str);

    cout<<"Reversed Str: "<<str<< endl;
    return 0;
}
