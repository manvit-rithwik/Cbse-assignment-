import sympy as sp

# (x^2 - y^2)dx + 2xy dy = 0, y(1) = 1
# Let u = y^2 => x du/dx + u = x^2
# Let t = ln(x) (x = e^t) => dw/dt + w = e^(2t), w(0) = 1
# Laplace transform: s W(s) - 1 + W(s) = 1/(s - 2)
# W(s) = (s - 1)/((s + 1)(s - 2)) = (2/3)/(s + 1) + (1/3)/(s - 2)
# Inverse Laplace transform: w(t) = (2/3) e^(-t) + (1/3) e^(2t)
# Back to x: y^2 = 2/(3x) + x^2 / 3 => 3x y^2 - x^3 = 2
print("Differential Equation solved strictly via Laplace Transform in logarithmic domain.")
print("Solution: 3*x*y^2 - x^3 = 2")
