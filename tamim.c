#include <stdio.h>
int main() {
    int n;
    double num,sum = 0;
    printf("Enter the last length of the series: ");
    scanf("%d", &n);
    num = 0;

    for(int i = 1; i <= n; i++){
        num = 1.0/(i*i);
        sum = sum + num;
    }

    printf("Sum = %lf", sum);
    return 0;
}
