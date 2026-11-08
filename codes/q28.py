import os
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

x_lpp = np.linspace(0, 10, 200)
y1_lpp = (45 - 5 * x_lpp) / 6.0
y2_lpp = (18 - 3 * x_lpp) / 2.0

plt.figure(figsize=(6, 5))
plt.plot(x_lpp, y1_lpp, 'b-', label='5x + 6y <= 45 (Area)', linewidth=2)
plt.plot(x_lpp, y2_lpp, 'm-', label='3x + 2y <= 18 (Labour)', linewidth=2)

poly_x = [0, 6, 2.25, 0]
poly_y = [0, 0, 5.625, 7.5]
plt.fill(poly_x, poly_y, 'cyan', alpha=0.3, label='Feasible Region')
plt.scatter([0, 6, 2.25, 0], [0, 0, 5.625, 7.5], color='red', zorder=5)
plt.annotate('(0,0): Z=0', (0.2, 0.2))
plt.annotate('(6,0): Z=360', (6.1, 0.2))
plt.annotate('(2.25, 5.625): Z=360', (2.3, 5.7))
plt.annotate('(0, 7.5): Z=300', (0.2, 7.5))

plt.xlim(-0.5, 8)
plt.ylim(-0.5, 9)
plt.xlabel('Number of Machine A (x)')
plt.ylabel('Number of Machine B (y)')
plt.title('LPP Optimization: Maximize Output Z = 60x + 40y', fontsize=12)
plt.grid(True, linestyle=':', alpha=0.6)
plt.legend()
plt.tight_layout()

out_dir = 'figs' if os.path.exists('figs') else '../figs'
os.makedirs(out_dir, exist_ok=True)
out_path = os.path.join(out_dir, 'q28_lpp.png')
plt.savefig(out_path, dpi=200)
plt.close()
print(f"Plot saved successfully to {out_path}")
