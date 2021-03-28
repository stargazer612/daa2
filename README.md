# DAA432C Assignment-02

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019034  |   Sanket Kokude | Sanket-Kokude | 
|    IIB2019035  |   Harshit Kumar | stargazer612 |
|    IIB2019036  |   Viful Nirala |  |

**Group No-**"12"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an n x n matrix, where every row and column is sorted in increasing order. Given a key, how to decide whether this key is in the matrix. Solve using divide and conquer algorithm.

---
## How to use code
```
#Download project
git@github.com:stargazer612/daa2.git
```
---

Run the code
```
g++ main.cpp
```
---

**Test case**

Given array:   
6 5 2 3 4 

Find number of subsets for XOR :
4
---

### Theory
Dynamic  Programming  (DP)  is  an  algorithmic  technique  for
solving  an  optimization  problem  by  breaking  it  down  into
simpler  subproblems  and  utilizing  the  fact  that  the  optimal
solution  to  the  overall  problem  depends  upon  the  optimal
solution to its subproblems.


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
