numberOfCases = int(input()) - 1
inputStrings = input().split()
x2 = float(inputStrings[0])
y2 = float(inputStrings[1])
x1 = 0
y1 = 0
total = 0

for z in range(numberOfCases):
    x1 = x2 
    y1 = y2
    inputStrings = input().split()
    x2 = float(inputStrings[0])
    y2 = float(inputStrings[1])
    
    total += ( ( (y1 + y2) / 2) * (x2 - x1) )
print(total / 1000)