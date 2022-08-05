#include <stdio.h>
int funct(int pro){ 
                   int i;
                   int j;
                   j=1;
                   for(i=1;i<=pro;i++){ j = j*i; }
                  return j ;
                  } 
int main() {
    int ent;  
    printf("enter un entier: ");
    scanf("%d",&ent);
    if(ent>=0){
    printf("le factoriel de %d est %d", ent ,funct(ent));}
    else{printf("le factorielle est non definie");}
    return 0;
}

