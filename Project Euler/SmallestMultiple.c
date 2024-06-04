#include <stdio.h>
#include <math.h>

int SmallestMultiple(int n);
int gcd(int a, int b);

int main(){
    int n = 0;
    printf("Insert an integer: \n");
    scanf("%d", &n);
    printf("The smallest multiple is: %lld\n", SmallestMultiple(n));
    return 0;
}

int SmallestMultiple(int n){
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i / gcd(i, ans);
    }
    return ans;
}

int gcd(int a, int b){
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}