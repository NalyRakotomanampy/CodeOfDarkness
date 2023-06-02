#include <stdio.h>
float existeInvOuOppConsecutifd(float T[10]){
    int i,j;
    for(i=0,i<10,i++){
        for(j=1,j<9,j++){
            if(T[i]+T[j]==0){
                printf("Vrai");
            }
            if(T[i]*T[j]==1){
                printf("Vrai");
            }
            if(T[i]*T[j]!=1 && T[i]+T[j] !=0){
                printf("Faux");
            }
        }
    }
}
int main()
{
    float T[10];
    int i;
    for(i=0,i<10,i++){
        scanf("%f\n",&T[i]);
    }
    existeInvOuOppConsecutifd(T[10]);
}
