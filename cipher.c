#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 2048

void caesar_cipher(unsigned char plaintext[MAX_STR_LEN], int displacement)
{
    int i=0;
    while(plaintext[i]!='\0'){
        if(((int)plaintext[i] + displacement) != 0)
            plaintext[i] = (int)plaintext[i] + displacement;
        i++;
    }
}

void caesar_decipher(unsigned char cryptotext[MAX_STR_LEN],int displacement)
{    
    int i=0;
    while(cryptotext[i]!='\0'){
        if(((int)cryptotext[i] - displacement) != 0)
            cryptotext[i] = (int)cryptotext[i] - displacement;
        i++;
    }
}

int main(){
    return 0;
}