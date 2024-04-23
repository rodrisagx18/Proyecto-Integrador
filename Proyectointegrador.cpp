#include <stdio.h>
#include <locale.h>
#include <stdlib.h>//incluyo librerias necesarias
int main(){
	
	char opcion;//declaro variables de entrada por el momento
	setlocale(LC_ALL, "spanish");//defino el idioma del programa a español
	do{
	   
	    printf("Programación Estructurada para la resolución de problemas de Mecánica usando herramientas de Calculo Diferencial\n\n");
	    printf("Realizado por:\n");
	    printf("Rodrigo Santana Gómez*          223961342\n");
	    printf("José Alexander Sotelo García    220855118\n");
	    printf("Ian Aron Rodríguez Gutiérrez    218406667\n");
	    printf("Juan Guillermo Alvarez Pérez    219079643\n\n");//datos del proyecto y nombres de los miembros del equipo
	    
	    printf("Necesitare que del siguiente menú escojas alguno de los incisos correspondientes a una cuestion del problema\n");
	    printf("A. Expresar el volumen del paquete como una función de uno de sus lados\n");
	    printf("B. Encontrar el volumen máximo del paquete\n");
	    printf("C. Presentar la gráfica de la función\n");
	    scanf(" %c", &opcion);//menú de selección para las cuestiones propuestas en el problema
	    
	
	
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
	    scanf(" %c", &opcion);//preguntar al usuario si desea salir del programa	
		system("cls");//despues de preguntar lo anterior ejecutado se limpiara la pantalla ya sea para salir o para darle inicio a la siguiente iteración del bucle
	    
	}while(opcion != 's' && opcion != 'S');//condición del ciclo para poder repetirse cuantas veces se desee
	
	return 0;
}
