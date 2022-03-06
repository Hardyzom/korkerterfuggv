#include <stdio.h>

float kerulet(float r){
    return 2*r*3.14;
}

float terulet(float r){
    return r*r*3.14;
}

int main(){

float sugar;
printf("Adja meg a kör sugarát cm-ben!\n");
scanf("%fl",&sugar);
printf("\n");
printf("A kör kerülete: %fl cm\n",kerulet(sugar));
printf("A kör területe: %fl cm2\n",terulet(sugar));

return 0;

}
