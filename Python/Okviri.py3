s1, s2, s3, s4, s5 = ".",".","#",".","."
lastx = 0
inp = input()

for x in range(len(inp)):
    lastx = (x+1) % 3
    if lastx == 0:
        s1 += "..*.."
        s2 += ".*.*."
        s3 += "*." + inp[x] + ".*"
        s4 += ".*.*."
        s5 += "..*.."
        
    if lastx == 1:
        s1 += ".#."
        s2 += "#.#"
        s3 += "." + inp[x] + "."
        s4 += "#.#"
        s5 += ".#."
        
    if lastx == 2:
        s1 += "..#."
        s2 += ".#.#"
        s3 += "#." + inp[x] + "."
        s4 += ".#.#"
        s5 += "..#."

if lastx != 0:
    s1 += "."
    s2 += "."
    s3 += "#"
    s4 += "."
    s5 += "."

print(s1)
print(s2)
print(s3)
print(s4)
print(s5)
  
  '''
“Peter Pan frames” are a way of decorating text in which every character is framed by a diamond- shaped frame, with frames of neigbhouring characters interleaving. A Peter Pan frame for one letter looks like this (‘X’ is the letter we are framing):

..#..
.#.#.
#.X.#
.#.#.
..#..

However, such a framing would be somewhat dull so we’ll frame every third letter using a “Wendy frame”. A Wendy frame looks like this:

..*..
.*.*.
*.X.*
.*.*.
..*..

When a Wendy frame interleaves with a Peter Pan frame, the Wendy frame (being much nicer) is put on top. For an example of the interleaving check the sample cases.
Input

The first and only line of input will contain at least 1
and at most 15

capital letters of the English alphabet.
Output

Output the word written using Peter Pan and Wendy frames on 5

lines.
Sample Input 1  
ABCD

Sample Output 1
..#...#...*...#..
.#.#.#.#.*.*.#.#.
#.A.#.B.*.C.*.D.#
.#.#.#.#.*.*.#.#.
..#...#...*...#..


  '''