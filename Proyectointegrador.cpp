//HOLI
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	
	char opcion;
	setlocale(LC_ALL, "spanish");
	do{
	   
	    printf("Programación Estructurada para la resolución de problemas de Mecánica usando herramientas de Calculo Diferencial\n\n");
	    printf("Realizado por:\n");
	    printf("Rodrigo Santana Gómez*          223961342\n");
	    printf("José Alexander Sotelo García    220855118\n");
	    printf("Ian Aron Rodríguez Gutiérrez    218406667\n");
	    printf("Juan Guillermo Alvarez Pérez    219079643\n\n");
	    
	    printf("Necesitare que del siguiente menú escojas alguno de los incisos correspondientes a una cuestion del problema\n");
	    printf("A. Expresar el volumen del paquete como una función de uno de sus lados\n");
	    printf("B. Encontrar el volumen máximo del paquete\n");
	    printf("C. Presentar la gráfica de la función\n");
	    scanf(" %c", &opcion);
	    
	
	
	    switch(opcion){
		    case 'A':
			    printf("L\n");
		    break;
		    case 'B':
			    printf("M\n");
		    break;
		    case 'C':
			    printf("J\n");
		    break;
		    default:
			printf("Esa nos es una opción valida dentro del menú");
	    }
	    
	    printf("\n\n¿Deseas salir del programa? (s/n): ");
	    scanf(" %c", &opcion);
		system("cls");	
	    
	}while(opcion != 's' && opcion != 'S');
	
	return 0;
}
