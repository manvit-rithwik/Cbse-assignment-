import os
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

t = np.linspace(0, np.pi/2, 200)
x_curve = np.sin(3*t)
y_curve = np.cos(2*t)
t0 = np.pi / 4
x0 = np.sin(3*t0)
y0 = np.cos(2*t0)
slope = (2 * np.sqrt(2)) / 3
x_tan = np.linspace(0.3, 1.0, 50)
y_tan = slope * (x_tan - x0) + y0

plt.figure(figsize=(6, 4))
plt.plot(x_curve, y_curve, 'purple', label='Parametric Curve (x(t), y(t))', linewidth=2)
plt.plot(x_tan, y_tan, 'r--', label='Tangent line at t = pi/4', linewidth=2)
plt.plot(x0, y0, 'ko', label='Point (1/sqrt(2), 0)')
plt.title('Tangent to x = sin(3t), y = cos(2t) at t = pi/4', fontsize=12)
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True, linestyle=':', alpha=0.6)
plt.legend()
plt.tight_layout()

out_dir = 'figs' if os.path.exists('figs') else '../figs'
os.makedirs(out_dir, exist_ok=True)
out_path = os.path.join(out_dir, 'q16_tangent.png')
plt.savefig(out_path, dpi=200)
plt.close()
print(f"Plot saved successfully to {out_path}")
