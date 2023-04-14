#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
if (argc < 2) {
printf("Usage: %s size\n", argv[0]);
return 1;
}
int size = atoi(argv[1]);

char str1[size + 1];
char str2[size + 1];

srand(time(NULL));

printf("Input string 1:\n");
for (int i = 0; i < size; i++) {
    str1[i] = rand() % 26 + 'a';
    printf("%c", str1[i]);
}
printf("\n");

printf("Input string 2:\n");
for (int i = 0; i < size; i++) {
    str2[i] = rand() % 26 + 'a';
    printf("%c", str2[i]);
}
printf("\n");

char result[size * 2 + 1];
int j = 0;
for (int i = 0; i < size; i++) {
    result[j++] = str1[i];
    result[j++] = str2[i];
}
result[size * 2] = '\0';

printf("Result:\n%s\n", result);

return 0;
}