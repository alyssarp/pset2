#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]){
    if(argc == 2){
        int key = atoi(argv[1]);
        string message = GetString();
        int n = strlen(message);
        char cipher[n];
        for (int i = 0; i < n; i++){
            if(message[i] > 64 && message[i] < 97){
                cipher[i] = ((message[i] - 65 + key) % 26) + 65;
                printf("%c", cipher[i]);
            } else if (message[i] > 96 && message[i] < 123){
                cipher[i] = ((message[i] - 97 + key) % 26) + 97;
                printf("%c", cipher[i]);
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
