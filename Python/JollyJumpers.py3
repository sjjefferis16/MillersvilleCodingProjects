while True:
    try:
        ArrayOfInts = []
        ints = input().split()
        nums = int(ints[0])
        nums1 = nums - 1
        for x in range(nums1):
        	difference = abs(int(ints[x+1]) - int(ints[x+2]))
        	ArrayOfInts.append(difference)
        for x in range(len(ArrayOfInts)):
            print(ArrayOfInts[x])

        hasValues = True
        for x in range(nums1):
        	notPresent = True
        	for y in range(nums1):
        		if ints[y] == x+1:
        			notPresent = False 
        	if notPresent:
        		hasValues = False
        if hasValues:
        	print("Jolly")
        else:
        	print("Not jolly")

    except EOFError:
        break

'''
A sequence of 𝑛>0 integers is called a jolly jumper if the absolute values of the 
difference between successive elements take on all the values 1 through 𝑛−1

. For instance,

1 4 2 3

is a jolly jumper, because the absolutes differences are 3
, 2, and 1

respectively. The definition implies that any sequence of a single integer is a jolly jumper. 
You are to write a program to determine whether or not each of a number of sequences is a jolly jumper.
Input

Each line of input contains an integer 𝑛≤3000
followed by 𝑛 integers representing the sequence. The values in the sequence are at most 300000 in absolute value. 
Input contains at most 10 lines.

Sample Input
4 1 4 2 3
5 1 4 2 -1 6

Output

For each line of input, generate a line of output saying “Jolly” or “Not jolly”.

Output
Jolly
Not jolly

'''