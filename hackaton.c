#include <stdio.h>
float SontInvOuOpp(float a, float b)
 {
    if(a+b == 0){
        printf("Vrai(a et b sont oppos�s)");
    }
    if( a* b == 1){
        printf("Vrai(a et b sont inver�s)");
    }
    if(a+b != 0 && a*b != 1){
        printf("Faux(a et b se sont ni inverses ni opppos�s)");
    }
}
int main ()
{
    float a,b;
    printf("Saisissez deux re�ls a puis b\n");
    scanf ("%f\n%f",&a ,&b);
    SontInvOuOpp(a,b);
}


