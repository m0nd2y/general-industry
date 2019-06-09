#include <stdio.h>

void shell() {
    FILE *in;
    char s[100];
    in = fopen("test.txt", "rt");
    while (fgets(s, 100, in) != NULL) {
        printf(s);
    }
    fclose(in);
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    char data[1024];
    
    printf("hello everyone!\n");
    printf("please change return ^^\n");
    printf("program is [buf + sfp + ret]!!\nhave a good luck~\n\n\n\n");
    gets(data);
    printf("hello %s\n", data);
    return 0;
}
