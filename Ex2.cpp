#include <bits/stdc++.h>

using namespace std;

bool check_prime_number(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Input n = ");
    scanf("%d", &n);
    int arr[n];
    printf("Input array: \n");
    for(int i = 1; i <= n; i++){
        printf("arr[i] = ");
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    printf("----------------\n");
    for(int i = 1; i <= n; i++){
        if(check_prime_number(arr[i])){
            printf("%d", arr[i]);
            cnt++;
        }
    }
    if(cnt == 0){
        printf("No prime number");
    }
    return 0;
}
