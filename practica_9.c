#include <stdio.h> 

int main(){ 
    int seleccion= 0; 
    int pino= 0; 
    int altura= 0; 
    int espacio= 0; 
    int salto= 0; 
    int asterisco= 0;

    do{ 
        printf("¿Que desea que hacer? \n1. Cuadro \n2. Pino \n3. Salir \n"); 
        scanf("%d", &seleccion); 
        switch(seleccion){ 
            case 1: for(int i= 0; i<=5; i++){
                        for(int j= 0; j<=5; j++){
                            printf(" * "); 
                        } 
                        printf("\n");  
                    } 
                    break; 
            case 2: printf("¿De que altura lo quieres? \n"); 
                    scanf("%i", &altura);
                    for(espacio=1; espacio <=altura; espacio ++){
                        for(salto=altura - espacio; salto>=1; salto--){
                            printf(" "); 
                        } 
                        for (asterisco = 1; asterisco<=(espacio*2)-1; asterisco++){
                            printf("*"); 
                        } 
                        printf("\n"); 
                    } 
                    break; 
            case 3: printf("Compra apocalipsis o pudrete \n");
                    break; 
            default: printf("ERROR \n"); 
                    break; 
        } 
    }while(seleccion!=3);
}