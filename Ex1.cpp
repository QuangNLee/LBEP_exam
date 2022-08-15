#include <bits/stdc++.h>

using namespace std;

int check_substr(const char  *str1, const char *str2) {
    if (strstr(str1,str2)){
        return 1;
    }else{
        return 0;
    }
}

int main () {
    char str1 [100];
    char str2 [100];
    printf("Input 2 string\n");
    printf("String 1: ");
    scanf("%s",str1);
    fflush(stdin);
    printf("String 2: ");
    scanf("%s",str2);
    int result = check_substr(str1, str2);
    if(result == 1){
        printf("Yes.");
    } else {
        printf("No.");
    }
    return 0;
}
