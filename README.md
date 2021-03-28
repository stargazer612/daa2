# DAA432C Assignment-02

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019034  |   Sanket Kokude | Sanket-Kokude | 
|    IIB2019035  |   Harshit Kumar | stargazer612 |
|    IIB2019036  |   Viful Nirala | Artemis |

**Group No-**"12"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an array arr[] of n numbers and a number K, find the number of subsets of arr[] having XOR of elements as K. Solve using Dynamic programming

---
## How to use code
```
#Download project
git clone https://github.com/stargazer612/daa2
```
---

Run the code
```
g++ main.cpp
```
---

**Test case**

Given matrix:   
1 2 3 4 5 6 7 8 9 10  
11 12 13 14 15 16 17 18 19 20   
21 22 23 24 25 26 27 28 29 30   
31 32 33 34 35 36 37 38 39 40   
41 42 43 44 45 46 47 48 49 50   
51 52 53 54 55 56 57 58 59 60   
61 62 63 64 65 66 67 68 69 70   
71 72 73 74 75 76 77 78 79 80   
81 82 83 84 85 86 87 88 89 90   
91 92 93 94 95 96 97 98 99 100  

Find Key:
```
Test Case-1
Input:79
Output:79 Found at (7,8)
#--------------------------#
Test Case-2
Input:102
Output:102 Not Found
```

---

### Theory
A divide-and-conquer algorithm recursively breaks down a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly. The solutions to the sub-problems are then combined to give a solution to the original problem.

---

### Analysis

**Time Complexity : O(n^1.58)**  
At each recursion call we are dividing the problem of n x n into two sub-problems one of the size n/2 x n/2 and the other sub-problem of size n x n/2 (or n/2 x n).So for our analysis we can we can assume it to two matrices of size n/2 x n/2,So we are making three recursive calls for sub-problem of size n/2*n/2 and performing some operation which will be of constant time.  
T(n) = T(n/2) + T(n/2) + T(n/2) + O(1)  
T(n) = 3T(n/2) + O(1)  
T(n) = O(n^(log3 base 2))  
The solution of recurrence is O(n^1.58) using Master Method.  

**Space Complexity : O(n)**

---

### References

1. https://en.wikipedia.org/wiki/Divide-and-conquer
algorithm  
2. https://www.geeksforgeeks.org/divide-and-conquer/  
3. Cormen, Leiserson, Rivest, and Stein (2009). Introduction
to Algorithms, 3rd edition.
