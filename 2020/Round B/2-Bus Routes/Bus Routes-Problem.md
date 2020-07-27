# Bus Routes

## Problem
Bucket is planning to make a very long journey across the countryside by bus. Her journey consists of **N** bus routes, numbered from 1 to **N** in the order she must take them. The buses themselves are very fast, but do not run often. The i-th bus route only runs every **Xi** days.

More specifically, she can only take the i-th bus on day **Xi**, 2**Xi**, 3**Xi** and so on. Since the buses are very fast, she can take multiple buses on the same day.

Bucket must finish her journey by day **D**, but she would like to start the journey as late as possible. What is the latest day she could take the first bus, and still finish her journey by day **D**?

It is guaranteed that it is possible for Bucket to finish her journey by day **D**.

## Input
The first line of the input gives the number of test cases, **T**. **T** test cases follow. Each test case begins with a line containing the two integers **N** and **D**. Then, another line follows containing **N** integers, the i-th one is **Xi**.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the latest day she could take the first bus, and still finish her journey by day **D**.

## Limits
Time limit: 10 seconds per test set.<br />
Memory limit: 1GB.<br />
1 ≤ **T** ≤ 100.<br />
1 ≤ **Xi** ≤ **D**.<br />
1 ≤ **N** ≤ 1000.<br />
It is guaranteed that it is possible for Bucket to finish her journey by day **D**.

### Test set 1
1 ≤ **D** ≤ 100.

### Test set 2
1 ≤ **D** ≤ 10^12.

## Sample
```
Input                         Output
 
3
3 10
3 7 2                         Case #1: 6
4 100                         Case #2: 99
11 10 5 50                    Case #3: 1
1 1
1
```
  
In Sample Case #1, there are **N** = 3 bus routes and Bucket must arrive by day **D** = 10. She could:
* Take the 1st bus on day 6 (**X1** = 3),
* Take the 2nd bus on day 7 (**X2** = 7) and
* Take the 3rd bus on day 8 (**X3** = 2).

In Sample Case #2, there are **N** = 4 bus routes and Bucket must arrive by day **D** = 100. She could:
* Take the 1st bus on day 99 (**X1** = 11),
* Take the 2nd bus on day 100 (**X2** = 10),
* Take the 3rd bus on day 100 (**X3** = 5) and
* Take the 4th bus on day 100 (**X4** = 50),

In Sample Case #3, there is N = 1 bus route and Bucket must arrive by day **D** = 1. She could:
* Take the 1st bus on day 1 (**X1** = 1).
