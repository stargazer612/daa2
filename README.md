# DAA432C Assignment-02

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019034  |   Sanket Kokude | Sanket-Kokude | 
|    IIB2019035  |   Harshit Kumar | stargazer612 |
|    IIB2019036  |   Viful Nirala | Artemis |

**Group No-**"31"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an array arr[] of n numbers and a number K, find the number of subsets of arr[] having XOR of elements as K. Solve using Dynamic programming.  

---
## How to use code
```
#Download project
git@github.com:stargazer612/daa2.git
```
---

Run the code
```
g++ daa2.cpp
```
---

**Test case**
Test case 1:  
```  
Enter the size of array : 5  
Enter the array : 6 2 3 4 5   
Enter the XOR value :4  
Count of subsets is 4  
```
Test Case 2:  
```
Enter the size of array : 4  
Enter the array : 1 2 3 4  
Enter the XOR value : 6  
Count of subsets is 2  
```
---

### Theory
Dynamic  Programming  (DP)  is  an  algorithmic  technique  for solving  an  optimization  problem  by  breaking  it  down  into simpler  subproblems  and  utilizing  the  fact  that  the  optimal solution  to  the  overall  problem  depends  upon  the  optimal solution to its subproblems.  


---

### Analysis

**Time Complexity : O(n*m)**  
We are iterating over whole array one by one finding and storing the count of possible subsets that generate a XOR value j (we say) and store it in the dp[i][j] which will need time to iterate over the array of size n and for each element a loop of time complexity m will be iterated. m = 2[log2(max−element)]+1 − 1 This will result in the time complexity of O(n ∗ m).  

**Space Complexity : O(n*m)**
In this approach we will have to store the values for all possible cases that are generated, as the dp[i][j] requires dp[i − 1][j] and hence a 2D array of size n ∗ m is required. This will result in the space complexity of O(n ∗ m).  

---

### References

1.https://www.geeksforgeeks.org/calculate-xor-1-n/  
2. https://www.geeksforgeeks.org/dynamic-programming/  
3. Cormen, Leiserson, Rivest, and Stein (2009). Introduction to Algorithms, 3rd edition.  
