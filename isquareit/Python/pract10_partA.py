"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""

print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
V1 = float(input("Enter voltage V1 (V): "))
V2 = float(input("Enter voltage V2 (V): "))
R1 = float(input("Enter resistance R1 (Ohm): "))
R2 = float(input("Enter resistance R2 (Ohm): "))
R3 = float(input("Enter shared resistance R3 (Ohm): "))

# Coefficients for Cramer's Rule/Substitution
A1 = R1 + R3
B1 = -R3
A2 = -R3
B2 = R2 + R3

# Determinant calculation
D = A1 * B2 - A2 * B1

# Current calculation
I1 = (V1 * B2 - V2 * B1) / D
I2 = (A1 * V2 - A2 * V1) / D
I_R3 = I1 - I2

# Output results
print("\n--- Results ---")
print(f"Current I1 (Loop 1): {I1:.4f} A")
print(f"Current I2 (Loop 2): {I2:.4f} A")
print(f"Current through R3: {I_R3:.4f} A")