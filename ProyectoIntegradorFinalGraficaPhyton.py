import matplotlib.pyplot as plt
import numpy as np

p = float(input("Ingrese el valor de p: "))
x1 = float(input("Ingrese el valor de x: "))
#x2 = float
#p3 = float


#x2 = x1 ** 2
#p3 = p ** 3

x = np.arange(-30,30,0.5)  # Le en una estructura, los valores que tendra la grafica en Y
y = p * (x * 2) - 2 * (x * 3)

plt.plot(x, y)
plt.show()
