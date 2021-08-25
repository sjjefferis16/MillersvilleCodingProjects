var cases = readline();

for (i = 0; i < cases; i++) {
	var polynomial1 = []
	var polynomial2 = []
	var coef1 = readline();
	var values1 = readline().split(" ");
		for(j1 = 0; j1 <= coef1; j1++){
			polynomial1.push(parseInt(values1[j1]));
		}

	var coef2 = readline();
	var values2 = readline().split(" ");
		for(j2 = 0; j2 <= coef2; j2++){
			polynomial2.push(parseInt(values2[j2]));
		}
	var coef3 = coef1 + coef2;

	var polynomial3 = new Array (coef3);

	console.log(coef3);

	for(j1 = 0; j1 <= coef1; j1++){
		for(j2 = 0; j2 <= coef2; j2++){
			place = j1 + j2;
			polynomial3[place] += polynomial1[j1] * polynomial2[j2];

		}
	}
	var values = ""
	for (var i = 0; i <= coef3; i++) {
		values += polynomial3[i].toString() + " ";
	}

console.log(values.substring(0, values.length - 1));
	


}


/*
Input

Standard input begins with an integer 𝑇≤100

, the number of test cases.

Each test case consists of two polynomials. A polynomial is given by an integer 1≤𝑛≤255
indicating the degree of the polynomial, followed by a sequence of integers 𝑎0,𝑎1,…,𝑎𝑛, where 𝑎𝑖 is the coefficient of 𝑥𝑖

in the polynomial. All coefficients will fit in a signed 32-bit integer.

NB! The input and output files for this problem are quite large, which means that you have to be a bit careful about I/O efficiency.
Output

For each test case, output the product of the two polynomials, in the same format as in the input (including the degree). All coefficients in the result will fit in a signed 32-bit integer.
Sample Input 1 	
2
2
1 0 5
1
0 -2
4
1 1 -1 1 1
4
9 -8 7 6 5


Sample Output 1
3
0 -2 0 -10
8
9 1 -10 30 5 -2 8 11 5

*/