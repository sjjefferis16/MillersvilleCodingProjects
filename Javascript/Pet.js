var line;
var entrees = new Array (5).fill(0);
var max = 0, maxPos = 0;

for(i = 0; i < 5; i++)
{
    line = readline();
    var nums = line.split(' ');
    for (j = 0; j < 4; j++)
    {
        entrees[i] +=  parseInt(nums[j]);
    }
}

for(i = 0; i < 5; i++)
{
    if(entrees[i] > max)
    {
        max = entrees[i];
        maxPos = i;
    }
}
maxPos++;
    
console.log(maxPos + " " + max);
/*
One way to estimate the area of a circle is to draw a square that just encompasses the circle and mark points randomly (with uniform probability) with a marker. Then, when you get tired of marking points, count up the number of points that you marked that landed in the circle and divide it by the total number of points that you marked. That gives you an idea of how large the circle is relative to the square. Your job is to judge how accurate this is for given circles and experiment outcomes.
\includegraphics[width=0.30\textwidth ]{circle}
Figure 1: An illustration of the random marking process.
Input

Input contains up to 1000
test cases, one test case per line. Each line has three space-separated numbers: 𝑟 𝑚 𝑐, where 0<𝑟≤1000 is a real number with at most 5 digits past the decimal indicating the true radius of the circle, 1≤𝑚≤100000 is an integer indicating the total number of marked points, and 0≤𝑐≤𝑚

is an integer indicating the number of marked points that fall in the circle. Input ends with a line containing three zeros, which should not be processed.
Output

For each test case, print a line containing two numbers: the true area of the circle and the estimate according to the experiment. Both numbers may have a relative error of at most 10−5

.
Sample Input 1  
1.0 100 75
10.0 5000 4023
3.0 21 17
0 0 0


Sample Output 1
3.141592654 3
314.1592654 321.84
28.27433388 29.14285714

*/