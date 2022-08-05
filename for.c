#include <stdio.h>
int main(){
    int i;
    int j;
    int entier; 
    j=1;
    printf("entrer un entier :");
    scanf("%d", &entier);
    if(entier>=0){ for(i=1;i<=entier;i++){
     j = j*i;}printf("le factoriel de %d est %d " ,entier , j);
     }else{printf("le factorielle est non definie");}
    return(0);
}
