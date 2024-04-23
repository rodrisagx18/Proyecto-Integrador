#Importamos librerias de phyton
import matplotlib.pyplot as plt
import numpy as np

#Le asignamos valores a X y Y
x = np.arange(-10,10,.5)   #Le en una estructura, los valores que tendra la grafica en Y
y = x*np.sin(x)  #Formula que utilizara para X

#Imprimimos la grafica en una nueva ventana!
plt.plot(x,y)
plt.show()
