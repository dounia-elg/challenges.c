/*challenge1*/ 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[5] = {1,2,3,4,5};
    int i ;
    for (i=0 ; i<5 ; i++)
        printf("%d\n",T[i]);
    return 0;    
}

/*challenge2*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[100];
    int i , n ;
    printf("entrer le nombre d elements du tableau:");
    scanf("%d",&n);
    printf("entrer les elements du tableau:");
    for (i=0 ; i < n ; i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
    }
    printf("les elements du tableau sont:\n");
    for (i=0 ; i < n ; i++){
        printf("%d\n",T[i]);
    }
    return 0;    
}

/*challenge3*/
include <stdio.h>
#include <stdlib.h>

int main(){
    int T[100];
    int i , n , S;
    printf("entrer le nombre d elements du tableau:");
    scanf("%d",&n);
    printf("entrer les elements du tableau:");
    for (i=0 ; i < n ; i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
    }
    printf("les elements du tableau sont:\n");
    for (i=0 ; i < n ; i++){
        printf("%d\n",T[i]);
    }
    S=0;
    for (i=0 ; i < n ; i++){
        S= S + n;
    }
    printf("la somme est:%d",S);
    return 0;    
}

/*challenge4*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[100];
    int i , n , max ;
    printf("entrer le nombre d elements du tableau:");
    scanf("%d",&n);
    printf("entrer les elements du tableau:");
    for (i=0 ; i < n ; i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
    }
    printf("les elements du tableau sont:\n");
    for (i=0 ; i < n ; i++){
        printf("%d\n",T[i]);
    }
    min=T[0];
    for (i=0 ; i < n ; i++){
        if(T[i]>max){
            max=T[i];
        }
    }
    printf("le plus grand element dans ce tableau est:%d",max);
    return 0;    
}

/*challenge5*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[100];
    int i , n , min;
    printf("entrer le nombre d elements du tableau:");
    scanf("%d",&n);
    printf("entrer les elements du tableau:");
    for (i=0 ; i < n ; i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
    }
    min=T[0];
    printf("les elements du tableau sont:\n");
    for (i=0 ; i < n ; i++){
        printf("%d\n",T[i]);
    }
    for (i=0 ; i < n ; i++){
        if(T[i]<min){
            min=T[i];
        }
    }
    printf("le plus petit element dans ce tableau est:%d",min);
    return 0;    
}