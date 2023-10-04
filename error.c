
#include <stdio.h>
#include <math.h>
// aproximate value 0.3433 true value 1/3
int main() {
    double trueValue, approxValue, absoluteError;
    double relativeError,percentageError;
    trueValue=1/3.0;

    printf("Enter the approximate value: ");
    scanf("%lf", &approxValue);

    absoluteError = fabs(trueValue - approxValue);

    printf("The absolute error is: %lf\n", absoluteError);
    relativeError=absoluteError/(double)trueValue;
    printf("The relative error is:%lf\n",relativeError);
    percentageError=100* relativeError;
    printf("The percentage error is:%lf\n", percentageError);

    

    return 0;
}
