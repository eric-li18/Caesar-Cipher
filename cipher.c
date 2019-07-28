#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STR_LEN 2048

void caesar_cipher(unsigned char plaintext[MAX_STR_LEN], int displacement){

    int i=0;
    while(plaintext[i]!='\0'){
        if(((int)plaintext[i] + displacement) != 0)
            plaintext[i] = (int)plaintext[i] + displacement;
        i++;
    }
}

void caesar_decipher(unsigned char cryptotext[MAX_STR_LEN],int displacement){
    int i=0;
    while(cryptotext[i]!='\0'){
        if(((int)cryptotext[i] - displacement) != 0)
            cryptotext[i] = (int)cryptotext[i] - displacement;
        i++;
    }
}

int main()
{
    unsigned char str[MAX_STR_LEN];

    while(1){
        printf("Enter text to be decoded or 'exit' to exit the program:\n");
        fgets((char* )str, MAX_STR_LEN,stdin);
        if(strcmp((char *)str,"exit\n") == 0){
            return 0;
        }
        printf("Original text: %s\n",str);
        int shift = rand()%256+1;
        caesar_cipher(str,shift);
        printf("Encrypted text: %s\n",str);
        caesar_decipher(str,shift);
        printf("Decrypted text: %s\n",str);
    }
   
    return 0;
    
}