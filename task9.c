#include <stdio.h>
const char PREFIX[] = "FST-";
int nextToken() {
    static int token = 1001;
    return token++;
}
int main() {

    char name[3][30];
    int i, token;

    for (i = 0; i < 3; i++) {
        printf("Enter customer name: ");
        scanf("%29s", name[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        token = nextToken();

        printf("%s -> %s%d\n",
               name[i], PREFIX, token);
    }

    return 0;
}

