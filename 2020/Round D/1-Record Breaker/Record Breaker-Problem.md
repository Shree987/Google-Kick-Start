# Record Breaker

## Problem
Isyana is given the number of visitors at her local theme park on **N** consecutive days. The number of visitors on the i-th day is **Vi**. A day is *record breaking* if it satisfies both of the following conditions:

* The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
* Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.<br />
Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.

## Input
The first line of the input gives the number of test cases, **T**. **T** test cases follow. Each test case begins with a line containing the integer **N**. The second line contains **N** integers. The i-th integer is **Vi**.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

## Limits
Time limit: 20 seconds per test set.<br />
Memory limit: 1GB.<br />
1 ≤ **T** ≤ 100.<br />
0 ≤ **Vi** ≤ 2 × 10^5.<br />

### Test set 1
1 ≤ **N** ≤ 1000.

### Test set 2
1 ≤ **N** ≤ 2 × 10^5 for at most 10 test cases.<br />
For the remaining cases, 1 ≤ **N** ≤ 1000.

## Sample
```
Input                       Output
 
4
8
1 2 0 7 2 0 2 0             Case #1: 2
6                           Case #2: 1
4 8 15 16 23 42             Case #3: 3
9                           Case #4: 0
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9
```
  
In Sample Case #1, the bold numbers in the following represent the record breaking days:<br /> 1 2 0 **7 2** 0 2 0.

In Sample Case #2, only the last day is a record breaking day.

In Sample Case #3, the first, the third, and the sixth days are record breaking days.

In Sample Case #4, there is no record breaking day.
