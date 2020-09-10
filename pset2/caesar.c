
#include <cs50.h>
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


// C = (plaintext[i] - 'a' + k) % 26 +'a'
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("key must be positive\n");
        return 1;
    }
    string plaintext = get_string("plaintext: "); // get text
    //loops over the plain text AND OUTPUT ciphertext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        
        if (islower(plaintext[i]))
          printf("%C", (plaintext[i] - 'a' + key) % 26 + 'a');
          
          
        else if (isupper(plaintext[i]))
          printf("%c", (plaintext[i] - 'A' + key) % 26 +'A');
          
          
        else
          printf("%c", plaintext[i]);
    }
    
       printf("\n");
    
    
}        
