/*
CH-230-A
a7_p4.c
Eunchong Kim
ekim01@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void printing_upper(char str[]) {
// print lowercase in uppercase and uppercase as it is
for (int i = 0; i < strlen(str); i++) {
if (str[i] >= 'a' && str[i] <= 'z')
printf("%c", toupper(str[i]));
else
printf("%c", str[i]);
}
puts("");
}

void printing_lower(char str[]) {
// print upppercase in lowercase and lowercase as it is
for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
        printf("%c", tolower(str[i]));
    else
        printf("%c", str[i]);
    }
    puts("");
}

void printing_combined(char str[]) {
// print lowercase in uppercase, uppercase in lowercase, else as it is
for (int i = 0; i < strlen(str); i++) {
if (str[i] >= 'a' && str[i] <= 'z')
printf("%c", toupper(str[i]));
else if (str[i] >= 'A' && str[i] <= 'Z')
printf("%c", tolower(str[i]));
else
printf("%c", str[i]);
}
puts("");
}

// quit execution
void quit(char str[]) { exit(1); }

int main()
{
// function pointer (array)
void (*printing[4])(char[]);

// string input
char str[100];
fgets(str, 100, stdin);
str[strlen(str) - 1] = '\0';

// each poiter points to each element of function pointer array
printing[0] = &printing_upper;
printing[1] = &printing_lower;
printing[2] = &printing_combined;
printing[3] = &quit;

char input;
while (1) {
scanf("%c", &input);
getchar();
// b/c input is character, we must subtract 49 from it to get correct position in array
printing[input - 49](str);
}

return 0;
}
