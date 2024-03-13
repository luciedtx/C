// #include <stdio.h> 
// #include <stdlib.h> 

// int main () {
//    int i,j;
//    printf("donner le nombre d'etage pour le sapin : ");
//    scanf("%d",&i);
//     // boucle taille du sapin 
//    for (i=1; i<=5; i++) {
//       // les espaces...
//       for (j=0;j<5-i;j++) 
//          printf(" ");
//       for (j=0; j<(i*2-1); j++)
//          printf("*");
//       printf("\n");
//    }
//    return 0;
// }

#include <stdio.h>

int main() 
{
    // l = longueur, c = colonnes, i = index, e = espaces t =tronc
    int l,c,i,e,t;

    printf("Rentrer le nombre de ligne : ");
    scanf("%d", &l);
    printf("taille de tronc 1 ou 5 : ");
    scanf("%d", &t);
    
    // boucle taille du sapin
    for (i=0; i<l; i++)
    {
        // boucle pour les espaces
        for(e=(l-i)-1; e>0; e--)
            printf(" ");
        
        for(c=(2*i)+1; c>0; c--)
            printf("*");

        

        printf("\n");
    }
    // choix de la taille du tronc
    if (t ==1)
    {
        printf("|");
    }
    else
    {
        printf("| | |\n| | |");
    }

    return 0;
}
