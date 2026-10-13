import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# -----------------------------
# 1. LOAD DATA
# -----------------------------
# Replace with your actual file path
df = pd.read_csv("data.csv")

print("Initial Dataset:")
print(df.head())

# -----------------------------
# 2. PREPROCESSING
# -----------------------------
# Check missing values
print("\nMissing Values:")
print(df.isnull().sum())

# Fill missing values with column mean (if any)
df = df.fillna(df.mean(numeric_only=True))

# Ensure all columns are numeric
df = df.apply(pd.to_numeric, errors='coerce')

# -----------------------------
# 3. ANALYSIS
# -----------------------------

# Basic statistics
print("\nStatistical Summary:")
print(df.describe())

# Mean of each column
means = df.mean()
print("\nColumn Means:")
print(means)

# Max and Min values
print("\nMaximum Values:")
print(df.max())

print("\nMinimum Values:")
print(df.min())

# Add Total and Average columns
df["Total"] = df.sum(axis=1)
df["Average"] = df.mean(axis=1)

print("\nUpdated Dataset:")
print(df.head())

# Identify top performer
top_student = df["Total"].idxmax()
print(f"\nTop Row Index (Highest Total): {top_student}")

# -----------------------------
# 4. VISUALIZATION
# -----------------------------

# 1. Bar chart of column means
plt.figure()
means.plot(kind='bar')
plt.title("Average Values of Columns")
plt.xlabel("Columns")
plt.ylabel("Average")
plt.grid()
plt.show()

# 2. Histogram of total scores
plt.figure()
df["Total"].plot(kind='hist', bins=10)
plt.title("Distribution of Total Scores")
plt.xlabel("Total Score")
plt.ylabel("Frequency")
plt.grid()
plt.show()

# 3. Line plot of averages
plt.figure()
df["Average"].plot(kind='line')
plt.title("Average per Row")
plt.xlabel("Index")
plt.ylabel("Average")
plt.grid()
plt.show()

# -----------------------------
# 5. INSIGHTS
# -----------------------------
print("\nINSIGHTS:")
print("- Column with highest average:", means.idxmax())
print("- Column with lowest average:", means.idxmin())
print("- Highest total score:", df["Total"].max())
print("- Lowest total score:", df["Total"].min())