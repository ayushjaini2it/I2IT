"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""

print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
import math
def boussinesq_stress():
    print("\n--- Soil Stress Calculation ---")
    P = float(input("Enter load (kN): "))
    z = float(input("Enter depth (m): "))
    r = float(input("Enter radial distance (m): "))

    # Boussinesq's Formula
    term1 = (3 * P) / (2 * math.pi * z**2)
    term2 = (1 / ((1 + (r/z)**2)**(5/2)))
    sigma_z = term1 * term2

    print(f"Vertical pressure at depth {z}m and radial distance {r}m: {sigma_z:.4f} kN/m^2")
boussinesq_stress()