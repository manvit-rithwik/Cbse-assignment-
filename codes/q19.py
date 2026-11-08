import sympy as sp

# cos^2(x) dy/dx + y = tan(x)
# dy/dx + sec^2(x) y = tan(x) sec^2(x)
# Let u = tan(x) => dy/du + y = u
# Laplace transform: s Y(s) - y(0) + Y(s) = 1/s^2
# Y(s) = 1/s^2 - 1/s + (y(0) + 1)/(s + 1)
# Inverse Laplace: y(u) = u - 1 + C e^(-u)
# Back to x: y(x) = tan(x) - 1 + C * exp(-tan(x))
print("Differential Equation solved strictly via Laplace Transform in transformed domain u = tan(x).")
print("Solution: y(x) = tan(x) - 1 + C * exp(-tan(x))")
