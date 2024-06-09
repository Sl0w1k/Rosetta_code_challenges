//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below the provided parameter value number.

#include <stdio.h>

int multiplesOf3Or5(int number);

int main(){
    printf("%d",multiplesOf3Or5(10));
    return 0;
}

int multiplesOf3Or5(int number) {
    int sum = 0;

    for (int counter = 0; counter < number; counter++) {
        if (counter % 3 == 0 || counter % 5 == 0) {
            sum += counter;
        }
    }
    return sum;
}