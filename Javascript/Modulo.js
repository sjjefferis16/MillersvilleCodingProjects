var nums = [];

for (i = 0; i < 10; i++) {
	var number = readline();

	number %= 42;

	var includesNum = nums.includes(number, 0);

	if(!includesNum){
		nums.push(number);
	}


}
console.log(nums.length);


/*
Given two integers 𝐴 and 𝐵, 𝐴 modulo 𝐵 is the remainder when dividing 𝐴 by 𝐵. For example, the numbers 7, 14, 27 and 38 become 1, 2, 0 and 2, modulo 3. Write a program that accepts 10 numbers as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo 42

.
Input

The input will contain 10 non-negative integers, each smaller than 1000

, one per line.
Output

Output the number of distinct values when considered modulo 42

on a single line.
Explanation of Sample Inputs

In sample input 1
, the numbers modulo 42 are 1,2,3,4,5,6,7,8,9 and 10

.

In sample input 2
, all numbers modulo 42 are 0

.

In sample input 3
, the numbers modulo 42 are 39,40,41,0,1,2,40,41,0 and 1. There are 6 distinct numbers.


Sample Input 1 

1
2
3
4
5
6
7
8
9
10

	
Sample Output 1
10

Sample Input 2

42
84
252
420
840
126
42
84
420
126

	
Sample Output 2
1

Sample Input 3 	

39
40
41
42
43
44
82
83
84
85

Sample Output 3
6

*/