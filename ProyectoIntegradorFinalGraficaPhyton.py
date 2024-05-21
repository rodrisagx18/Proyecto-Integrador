#Importamos librerias de phyton
import matplotlib.pyplot as plt
import numpy as np

#Definimos Variables
p = float(input("Ingrese el valor de p: "))
x = float(input("Ingrese el valor de x: "))
x2 = float
p3 = float

#Elevamos la altura al cuadrado
x2 = x ** 2
p3 = p ** 3

#Le asignamos valores a X y Y
x = np.arange(-10,10,.5)   #Le en una estructura, los valores que tendra la grafica en Y
y = (p(x2))-2(p3)#Formula que utilizara para X

#Imprimimos la grafica en una nueva ventana!
plt.plot(x,y)
plt.show()
