//Compute the Root Mean Square (RMS) of the numbers 1 through 10 inclusive.
//The RMS is calculated by taking the square root of the mean of the squares of the numbers, given by the equation:

#include <stdio.h>
#include <math.h>

float rms(int arr[]);

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Root mean square value of all numbers from 1 to 10 is equal to: %.4f",rms(arr));
    return 0;
}

float rms(int arr[]){
    int sum = 0;
    float RMS = 0;
    for (int i = 0; i <=10; i++){
        sum += pow(arr[i],2);
    }
    RMS = sqrt((float)sum/10);
    return RMS;
}