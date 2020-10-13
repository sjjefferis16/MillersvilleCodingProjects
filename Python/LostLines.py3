'''
Lost Lineup

Jimmy and his friends were all standing in a lineup for ice cream when a huge gust blew them all around. The friends want to keep things fair and make sure everyone gets their ice cream in the order they started with. The friends do not remember the order, but each of them remember exactly how many people were between them and Jimmy. Jimmy is always the first person in line. Can you help him and his friends remember the order?
Input

The first line contains a single integer 𝑛
(1≤𝑛≤100

), the number of people in the line.

The second line contains 𝑛−1
space separated integers, where 𝑑𝑖 (0≤𝑑𝑖≤𝑛−2) is the number of people between the (𝑖+1)th

person and Jimmy.

Jimmy is always first in the lineup.
4
1 2 0


Output

Print a single line with 𝑛
integers, the people in the order of the original lineup. It is guaranteed that there is always a unique solution.
1 4 2 3

'''

n = input()
inputlength = int(n)-1
finalresult = "1 "


if inputlength != 0:
    inputtext = input()
    textarray = inputtext.split()
    textarray2 = [0] * inputlength
    for x in range(inputlength):
        textarray2[int(textarray[x])] = x + 2
        
    for x in range(inputlength):
        finalresult += str(textarray2[x]) + " "
        
print(finalresult)
    