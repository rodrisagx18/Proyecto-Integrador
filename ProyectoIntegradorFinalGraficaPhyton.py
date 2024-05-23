#Importamos librerias
import matplotlib.pyplot as plt
import numpy as np

#Definimos las variables a utilizar, tambien pedimos por la entrada de datos su valor
x = float(input("Ingrese el valor de x en cm: "))
y1 = float(input("Ingrese el valor de y en cm: "))
p = float

#Definimos P
P = 4 * x
#P = x1 + x1 + y1

#Definimos x, y, para que nuestra grafica las aplique 
x = np.arange(-30,30,0.5)
y = P * (x ** 2) - 2 * (x ** 3)

#Le damos nombre a la grafica y a las etiquetas de x,y
plt.title("Grafíco de la funcion V(x) = Px^2 - 2x^3")
plt.xlabel("Eje X")
plt.ylabel("Eje Y")

#Mostramos la tabla
plt.plot(x, y)
plt.show()
