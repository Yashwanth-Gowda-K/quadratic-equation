#include <stdio.h>
#include <math.h>

int main(){
    double a, b , c, discriminant , r1, r2, realpart , imaginarypart;

    printf("Enter the cofficients a,b and c: ");
    scanf("%1f %1f %1f", &a , &b ,&c);

    discriminant = b* b-4*a*c;

    if (discriminant > 0){
        r1 = (-b + sqrt(discriminant)) / (2*a);
        r2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", r1 , r2);

    }

    else  if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf");

    }

    else {
     realpart = -b / (2* a);
     imaginarypart = sqrt(-discriminant) / ( 2* a);
     printf("Roots are complex: %.2lf + %2.lfi and %2.lf and %2.lf - %2.lfi\n", realpart , imaginarypart , realpart , imaginarypart);

    }
    return  0;
}