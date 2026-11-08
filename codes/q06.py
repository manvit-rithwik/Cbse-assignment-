import sympy as sp

x = sp.Symbol('x')
f = x**2 / (1 + x**3)
F = sp.integrate(f, x)
print(f"Analytical integral of x^2 / (1 + x^3): {F}")
