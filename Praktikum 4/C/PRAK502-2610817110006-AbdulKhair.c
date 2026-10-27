#include <stdio.h>
#include <math.h>

int count(int first, int second){
    return abs(first - second);
}

int absolute(int number){
    return abs(number);
}

int main() {
    int a,b,c,d;
    int result;

    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);

    result = count(a,b) + count(c,d);
    printf("%d",absolute(result));

    return 0;
}