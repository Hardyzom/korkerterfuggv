#include <stdio.h>

int kerulet(int r){
    return 2*r*3.14;
}

int terulet(int r){
    return r*r*3.14;
}

int main(){

int sugar;
printf("Adja meg a kör sugarát cm-ben!\n");
scanf("%d",&sugar);
printf("\n");
printf("A kör kerülete: %d cm\n",kerulet(sugar));
printf("A kör területe: %d cm2\n",terulet(sugar));

return 0;

}
