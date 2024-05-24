//incluyo librerias necesarias
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){

    //Definimos las variables que nesesitaremos mas adelante
    float x,y,x2,x3,P,Vol;

	char opcion;//declaro variables de entrada
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
	    
	
		//Realizamos un SWITCH segun la opcion seleccionada
	    switch(opcion){
			case 'a':
		    case 'A':
				//Le decimos al usaurio la formula a utilizar
			    printf("La función que expresa el volumen del paquete es V(x) = x^2P /4 - 8x^3 /4\n");
		    break;
			case 'b':
		    case 'B':
                //Le pedimos al usuario los datos y los leemos
	            printf("Ingrese el valor de x en cm:\n");
                scanf("%f",&x);
                //solicito x para el area de la base
                printf("\nIngrese el valor de y en cm:\n");
                scanf("%f",&y);
				
				//Calculamos el valor de P
				P = x*8 + y*4;
				printf("\n\nP = %.2f\n\n", P);

				//Definimos y ajustamos los valores de x2 y x3
				x2 = x*x;
				x3 = x*x*x;

				//Formula para el volumen
				Vol = (x2 * P / 4.0) - (8.0 * x3 / 4.0);

				//Si X es igual a el volumen maximo, se lo notificamos al usuario
		        if(x == P/12){
			        printf("\nVolumen maximo");
		        }

                //Le imprimimos el resultado
                printf("\nLa función que expresa el volumen del paquete es V(x) = x^2P /4 - 8x^3 /4\n");
                
				//Comprovamos el valor que tiene Vol es negativo o positivo
                if(Vol > 0){
                    printf("\nEl volumen de su prisma es: %0.2f cm³", Vol);
                } else {
                	printf("El volumen de su prisma es: %.2f cm³", Vol);
                    printf("\nPero el volumen calculado es negativo, lo cual no es físicamente posible. Por favor, revisa los valores ingresados.\n");
                }
		    break;
			case 'c':
		    case 'C':
				//Abrimos grafica de python
			    printf("Abir grafica de phyton\n");
		    break;
		    default:
			//Si el usuario ingresa una opcion mal, se lo decimos, y a su vez le pedimos que ingrese una correcta
			printf("Esa nos es una opción valida dentro del menú");
	    }
	    
	    printf("\n\n¿Deseas salir del programa? (s/n): ");//Le decimos al usuario si ya quiere que el programa finalize
	    scanf(" %c", &opcion);//preguntar al usuario si desea salir del programa	
		system("cls");//despues de preguntar lo anterior ejecutado se limpiara la pantalla ya sea para salir o para darle inicio a la siguiente iteración del bucle
	    
	}while(opcion != 's' && opcion != 'S');//condición del ciclo para poder repetirse cuantas veces se desee
	
	//Finalizamos el programa
	return 0;
}
