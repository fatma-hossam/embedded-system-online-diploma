#include <stdio.h>
#include <string.h>

int main() {
    //str HW
    //EX1

  /*  char str[100];
    char ch;
    int i, count = 0;

    printf("Enter a string: ");
    fflush(stdout);
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find frequency: ");
    fflush(stdout);
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of %c = %d\n", ch, count);*/

    //EX2
       /* char str[100];
           int i, count = 0;
        printf("Enter a string: ");
           fflush(stdout);
           fgets(str, sizeof(str), stdin);
           for (i = 0; i <100; i++) {
               count++;
               if (str[i]==0) { break;


               }
          }

           printf("the length of the string = %d\n", count-2);
           // -2 Because fgets reeds \n before \0
    */
    //EX3
    char str[100], temp;
    int i, j;
    printf("Enter a string: \n");
    fflush(stdout);
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("the reverse string is : %s\n", str);
    return 0;
}
