import sympy as sp

x = sp.Symbol('x', positive=True)
theta = sp.Symbol('theta')
# x = cos(2*theta):
# sqrt(1+x) = sqrt(2)*cos(theta), sqrt(1-x) = sqrt(2)*sin(theta)
# argument = tan(pi/4 - theta) => y = pi/4 - (1/2)*arccos(x)
# dy/dx = 1 / (2*sqrt(1 - x^2))
dy_dx = 1 / (2 * sp.sqrt(1 - x**2))
print("Derivative dy/dx =", dy_dx)
