import os
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

x_parab = np.linspace(0, 0.5, 100)
y_parab_pos = 2 * np.sqrt(x_parab)
y_parab_neg = -2 * np.sqrt(x_parab)

x_circ = np.linspace(0.5, 1.5, 100)
y_circ_pos = np.sqrt(2.25 - x_circ**2)
y_circ_neg = -np.sqrt(2.25 - x_circ**2)

plt.figure(figsize=(6, 5))
plt.plot(x_parab, y_parab_pos, 'b', linewidth=2, label='y^2 = 4x')
plt.plot(x_parab, y_parab_neg, 'b', linewidth=2)
plt.fill_between(x_parab, y_parab_neg, y_parab_pos, color='skyblue', alpha=0.4, label='Enclosed Region')

x_circ_full = np.linspace(-1.5, 1.5, 300)
y_cf_pos = np.sqrt(np.maximum(0, 2.25 - x_circ_full**2))
y_cf_neg = -np.sqrt(np.maximum(0, 2.25 - x_circ_full**2))
plt.plot(x_circ_full, y_cf_pos, 'g', linewidth=2, label='4x^2 + 4y^2 = 9')
plt.plot(x_circ_full, y_cf_neg, 'g', linewidth=2)
plt.fill_between(x_circ, y_circ_neg, y_circ_pos, color='skyblue', alpha=0.4)

plt.axvline(0.5, color='gray', linestyle=':', label='Intersection x = 1/2')
plt.scatter([0.5, 0.5], [np.sqrt(2), -np.sqrt(2)], color='red', zorder=5)
plt.title('Area between y^2 = 4x and 4x^2 + 4y^2 = 9', fontsize=12)
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True, linestyle=':', alpha=0.6)
plt.axis('equal')
plt.legend(loc='upper right', fontsize=9)
plt.tight_layout()

out_dir = 'figs' if os.path.exists('figs') else '../figs'
os.makedirs(out_dir, exist_ok=True)
out_path = os.path.join(out_dir, 'q25_area.png')
plt.savefig(out_path, dpi=200)
plt.close()
print(f"Plot saved successfully to {out_path}")
