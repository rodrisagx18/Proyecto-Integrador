#Importamos librerias
import matplotlib.pyplot as plt
import numpy as np

#Definimos las variables a utilizar, tambien pedimos por la entrada de datos su valor
x1 = float(input("Ingrese el valor de x: "))
y1 = float(input("Ingrese el valor de y: "))
p = float

#Definimos P
P = 4 * x1

#Definimos x, y, para que nuestra grafica las aplique 
x = np.arange(-30,30,0.5)
y = p * (x ** 2) - 2 * (x ** 3)

#Le damos nombre a la grafica y a las etiquetas de x,y
plt.title("Grafíco de la funcion V(x) = Px^2 - 2x^3")
plt.xlabel("Eje X")
plt.ylabel("Eje Y")

#Mostramos la tabla
plt.plot(x, y)
plt.show()
