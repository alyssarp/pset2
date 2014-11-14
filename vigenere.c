#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    if(argc == 2){
        string key = argv[1];
        int l = strlen(key);
        for (int i = 0; i < l; i++){
            if(isalpha(key[i]) == 0){
                printf("That's not an accepted key");
                return 1;
            }
        }
        string message = GetString();
        int n = strlen(message);
        char cipher[n];
        int move = 0;
        for (int i = 0; i < n; i++){
            if(message[i] > 64 && message[i] < 97){
                if (isupper(key[move])){
                cipher[i] = ((message[i] - 65 + (key[move]-65)) % 26) + 65;
                } else {
                 cipher[i] = ((message[i] - 65 + (key[move]-97)) % 26) + 65;
                }
                printf("%c", cipher[i]);
                move =  (move + 1) % l ;
            } else if (message[i] > 96 && message[i] < 123){
                if (isupper(key[move])){
                cipher[i] = ((message[i] - 97 + (key[move]-65)) % 26) + 97;
                } else {
                 cipher[i] = ((message[i] - 97 + (key[move]-97)) % 26) + 97;
                }
                printf("%c", cipher[i]);
                move = (move + 1) % l ;
            } else {
                cipher[i] = message[i];
                printf("%c", cipher[i]);
            }
        }
        printf("\n");
    } else{
    printf("Error! You forgot to give me key");
    return 1;
    }
}
