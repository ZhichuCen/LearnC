#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char check_digit[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

void upgrade_to_18(char id15[], char id18[]) {
    strcpy(id18, id15);
    memmove(id18 + 6 + 2, id18 + 6, 9);
    id18[6] = '1';
    id18[7] = '9';
    int sum = 0;
    for (int i = 0; i < 17; i++) sum += (id18[i] - '0') * weight[i];
    id18[17] = check_digit[sum % 11];
    id18[18] = '\0';
}

int validate_18(char id18[]) {
    int sum = 0;
    for (int i = 0; i < 17; i++) {
        if (id18[i] < '0' || id18[i] > '9') return 0;
        sum += (id18[i] - '0') * weight[i];
    }
    return id18[17] == check_digit[sum % 11];
}

int main() {

    int n;
    scanf("%d",&n);

    for(int nn=0;nn<n;nn++){
    char id[19];
    scanf("%18s", id);
    int len = strlen(id);
    if (len == 15) {
        char id18[19];
        upgrade_to_18(id, id18);
        printf("%s\n", id18);
    } else if (len == 18) {
        printf("%s\n", validate_18(id) ? "Valid" : "Invalid");
    } else {
        printf("Invalid\n");
    }}
    return 0;
}