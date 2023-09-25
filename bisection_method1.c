// Bisection Method for n number of iterations
#include<stdio.h>

float function(float x){
   return x*x*x - 2*x - 5;
}

float bisect(float x1,float x2){
    return (x1 + x2)/2;
}

int main(){
    int maxIteration = 1, i = 1;
    float x1,x2,x;
    printf("enter max number of iterations: ");
    scanf("%d", &maxIteration);

    do{
        printf("enter value of x1 and x2(initial boundaries): ");
        scanf("%f %f", &x1, &x2);

        if(function(x1) * function(x2) > 0){
            printf("Invalid Roots !\n");
            continue;
        }
        else{
            printf("Roots lie between %f and %f \n", x1, x2);
            break;
        }

    // Taking input values by hit and trial for x1 and x2 until valid values are not given
    }while (1);

    while(i <= maxIteration){
        x = bisect(x1,x2);
        if(function(x)*function(x1) < 0){
            x2 = x;   // x2 is shifted
        }
        else{
            x1 = x;    // x1 is shifted
        }

        printf("iterations: %d , root: %f \n",i,x);
        i++;
    }

    printf("final root: %f , no. of iterations: %d \n", x, --i);


    return 0;
}