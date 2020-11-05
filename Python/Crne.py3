cuts = int(input()) 
horizontal = cuts // 2
pieces = (horizontal + 1) * (cuts - horizontal + 1)
print(pieces)

'''
Thrilled about his new valid set of pieces, Mirko rushed over to Slavko’s, to find that Slavko too 
found a set of chess pieces in his attic. Slavko’s set, miraculously, contains only black pieces. 
But since neither of them can play chess, they settled on smashing one another senseless with their 
chessboards.

While Slavko is warming up with a series of stretches, Mirko decided to sabotage Slavko’s chessboard. 
An expert in carving wood, he decided to cut Slavko’s chessboard so that it shatters into as many 
pieces as possible when Slavko attempts to hit Mirko.

Mirko can only make horizontal and vertical cuts (parallel to the sides to the board), edge to edge, 
and has time to make at most 𝑁

cuts.
Input

The first line of input contains an integer 𝑁
(1≤𝑁≤109

), the number of cuts Mirko can make.
Output

Output the largest number of pieces Slavko’s chessboard can crash into.

Sample Input 1  
1
Sample Output 1
2
Sample Input 2  
3
Sample Output 2
6

'''