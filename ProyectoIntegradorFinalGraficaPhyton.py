#Importamos librerias de phyton
import matplotlib.pyplot as plt
import numpy as np

#Definimos Variables
l = 5.0
h = 19.0

#Elevamos la altura al cuadrado
hh = h ** 2

#Le asignamos valores a X y Y
x = np.arange(-10,10,.5)   #Le en una estructura, los valores que tendra la grafica en Y
y = x*hh*l-2*h #Formula que utilizara para X

#Imprimimos la grafica en una nueva ventana!
plt.plot(x,y)
plt.show()
