//incluyo librerias necesarias
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){

    //Definimos las variables que nesesitaremos mas adelante
    float h, lad,volumen;
	
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
			    printf("La formula al momento es A = x^2(p-2x) * h\n");
		    break;
		    case 'B':
                //Le pedimos al usuario los datos y los leemos
			    printf("Ingrese la altura de su prisma:\n");
                scanf("%f",&h);

                printf("\nIngrese la longitud de un lado de su base:\n");
                scanf("%f",&lad);

                //Calculamos el volumen
                volumen = (h*h)*(lad-(2*h));

                //Le imprimimos el resultado
                printf("El volumen de su primsa es: %0.2f", volumen);
		    break;
		    case 'C':
			    printf("Abir grafica de phyton\n");
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
