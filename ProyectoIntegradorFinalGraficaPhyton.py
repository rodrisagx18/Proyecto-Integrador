import matplotlib.pyplot as plt
import numpy as np

p = float(input("Ingrese el valor de p: "))
x = float(input("Ingrese el valor de x: "))
x2 = float
p3 = float


x2 = x ** 2
p3 = p ** 3

x = np.arange(-30,30,0.5)  # Le en una estructura, los valores que tendra la grafica en Y
y = y = p * x2 - 2 * p3

plt.plot(x, y)
plt.show()
