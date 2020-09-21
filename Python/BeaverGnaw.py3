'''
When chomping a tree the beaver cuts a very specific shape out of the tree trunk. What is left in the tree trunk looks like two frustums of a cone joined by a cylinder with the diameter the same as its height. A very curious beaver tries not to demolish a tree but rather sort out what should be the diameter of the cylinder joining the frustums such that he chomped out certain amount of wood. You are to help him to do the calculations.
\includegraphics[width=0.23\textwidth ]{draw}
Figure 1: A trunk partially eaten by a beaver

We will consider an idealized beaver chomping an idealized tree. Let us assume that the tree trunk is a cylinder of diameter 𝐷
and that the beaver chomps on a segment of the trunk also of height 𝐷. What should be the diameter 𝑑 of the inner cylinder such that the beaver chomped out 𝑉

cubic units of wood?
Input

Input contains multiple cases each presented on a separate line. Each line contains two space separated integers 𝐷,𝑉
(1≤𝐷≤100,1≤𝑉≤1000000). 𝐷 is the linear units and 𝑉 is in cubic units. 𝑉 will not exceed the maximum volume of wood that the beaver can chomp. A line with 𝐷=0 and 𝑉=0

follows the last case.
Output

For each case, one line of output should be produced containing a floating point number giving the value of 𝑑
measured in linear units. Your output will be considered correct if it is within relative or absolute error 10−6.
'''
import math

while(True):
    inputtext = input()
    a, b = inputtext.split()
    D = int(a)
    V = int(b)
    
    if(D == 0):
        break
    
    r = D/2
    WholeArea = (D * math.pi * (r*r))
    reducedArea = WholeArea - V
    #reducedArea = ((4 *reducedArea) / ( math.pi)) ** (1/2)
    reducedArea = (((6/math.pi) * reducedArea) - ((1/2) * D ** (3))) ** (1/3)
    print(reducedArea)