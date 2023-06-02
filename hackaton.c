#include <stdio.h>
float SontInvOuOpp(float a, float b)
 {
    if(a+b == 0){
        printf("Vrai(a et b sont opposés)");
    }
    if( a* b == 1){
        printf("Vrai(a et b sont inverés)");
    }
    if(a+b != 0 && a*b != 1){
        printf("Faux(a et b se sont ni inverses ni oppposés)");
    }
}
int main ()
{
    float a,b;
    printf("Saisissez deux reéls a puis b\n");
    scanf ("%f\n%f",&a ,&b);
    SontInvOuOpp(a,b);
}


