// Bisection Method for getting correct upto n places of decimals
#include<stdio.h>
#include<math.h>
#define allowed_error 0.0001  // getting values upto 3 decimal places here

float function(float x){
   return x*x*x - 2*x - 5;
}

float bisect(float x1,float x2){
    return (x1 + x2)/2;
}

int main(){
    int maxIteration = 1, i = 1;
    float x1,x2,x,x3;
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
    
    x = bisect(x1,x2);
    
    do{
        // x = bisect(x1,x2);
        if(function(x)*function(x1) < 0){
            x2 = x;   // x2 is shifted
        }
        else{
            x1 = x;    // x1 is shifted
        }

        printf("iterations: %d , root: %f \n",i,x);
        x3 = bisect(x1,x2);
        if(fabs(x3-x) < allowed_error){
            printf("Root: %f , Total iterations: %d",x,i);
            return 0;
        }

        x = x3;       
        i++;
    }while(i <= maxIteration);

    printf("final root: %f , no. of iterations: %d \n", x, --i);


    return 0;
}