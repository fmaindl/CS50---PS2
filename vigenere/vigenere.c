#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
     string key;
     if (argc == 2)
     {
          key = argv[1];
     }
     else
     {
         printf("Say ...what?");
     }

     string plaintext = get_string("Please enter a word or sentence you want to encrypt: ");

     string lowercase = "abcdefghijklmnopqrstuvwxyz";
     string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

     int length = strlen(key);
     int j;




     for (int i = 0; i < strlen(plaintext); i++)
          if ((isalpha(plaintext[i])) && (isupper(plaintext[i])))
          {
               j = (i % length);
               if (isupper(key[j]))
               {
                    printf("%c", uppercase[((int) plaintext[i] - 65 + (int) key[j] - 65) % 26]);
               }
               else if (islower(key[j]))
               {
                    printf("%c", uppercase[((int) plaintext[i] - 65 + (int) key[j] - 97) % 26]);
               }
               else
               {
                    printf("%c", plaintext[i]);
               }
          }
          else if ((isalpha(plaintext[i])) && (islower(plaintext[i])))
          {
               j = (i % length);
               if (isupper(key[j]))
               {
                    printf("%c", lowercase[((int) plaintext[i] - 97 + (int) key[j] - 65) % 26]);
               }
               else if (islower(key[j]))
               {
                    printf("%c", lowercase[((int) plaintext[i] - 97 + (int) key[j] - 97) % 26]);
               }
               else
               {
                    printf("%c", plaintext[i]);
               }
          }
          else
          {
               printf("%c", plaintext[i]);

          }
          printf("\n");
}
