#include <stdio.h>

int maximal(int a, int b){
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int minimum(int a, int b) {
    if( a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int limit = 0;
    int max = -100000;
    int min = 100000;
    int numeral;
    scanf("%d", &numeral);

    while(limit < numeral) {
        int value;
        scanf("%d", &value);
        max = maximal(max, value);
        min = minimum(min, value);
        limit++;
    }
    printf("%d %d", max, min);
}