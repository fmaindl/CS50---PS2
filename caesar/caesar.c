#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
     int x;
     if (argc == 2)
     {
         x = atoi(argv[1]);
         printf("%x\n", x);
     }
     else
     {
         printf("Say ...what?");
     }

     string plaintext = get_string("Please enter a word or sentence you want to encrypt: ");

     string lowercase = "abcdefghijklmnopqrstuvwxyz";
     string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";




     for (int i = 0; i < strlen(plaintext); i++)
          if ((isalpha(plaintext[i])) && (isupper(plaintext[i])))
          {

               printf("%c", uppercase[((int) plaintext[i] - 65 + x) % 26]);
          }
          else if ((isalpha(plaintext[i])) && (islower(plaintext[i])))
          {
               printf("%c", lowercase[((int) plaintext[i] - 97 + x) % 26]);

          }
          else
          {
               printf("%c", plaintext[i]);

          }
}
