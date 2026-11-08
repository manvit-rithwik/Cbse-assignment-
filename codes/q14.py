import os
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

x1 = np.linspace(0, 1.99, 100)
y1 = 2 * x1 + 1
x2 = np.linspace(2.01, 4, 100)
y2 = 3 * x2 - 1

plt.figure(figsize=(6, 4))
plt.plot(x1, y1, 'b-', label='f(x) = 2x+1 (x < 2)', linewidth=2)
plt.plot(x2, y2, 'g-', label='f(x) = 3x-1 (x > 2)', linewidth=2)
plt.plot(2, 5, 'ro', label='Continuous point (2, 5)', markersize=7)
plt.axvline(2, color='gray', linestyle='--', alpha=0.7)
plt.title('Continuity of f(x) at x = 2 (k = 5)', fontsize=12)
plt.xlabel('x')
plt.ylabel('f(x)')
plt.grid(True, linestyle=':', alpha=0.6)
plt.legend()
plt.tight_layout()

# Save to figs/ regardless of whether run from root or codes/
out_dir = 'figs' if os.path.exists('figs') else '../figs'
os.makedirs(out_dir, exist_ok=True)
out_path = os.path.join(out_dir, 'q14_continuity.png')
plt.savefig(out_path, dpi=200)
plt.close()
print(f"Plot saved successfully to {out_path}")
