#include<stdio.h>

int custom_strlen(char* st) {
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    return len;
}

int main() {
    char st[] = "keieno";
    int l = custom_strlen(st);
    printf("The length of the string is %d\n", l);
    return 0;
}
