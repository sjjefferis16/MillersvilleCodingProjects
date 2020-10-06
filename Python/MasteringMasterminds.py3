import itertools
from itertools import permutations


def nocharInBreaker(char_i, num_int, codemaker):
    for x in range(num_int):
        if char_i == codemaker[x]:
            return x
    return -1

inputtext = input()
num, codemaker, codebreaker = inputtext.split()
num_int = int(num)
r =0
s = 0
letters = []
for x in range(num_int):
    if codemaker[x] == codebreaker[x]:
        r +=1
for x in range(num_int):
    char_i = codebreaker[x]
    char_loc = nocharInBreaker(char_i, num_int, codemaker)
    if char_loc != -1:
        codemaker = codemaker[:char_loc] + '0' + codemaker[char_loc+1:]
        s += 1
s = s - r


print(str(r) + " " + str(s))

'''
Mastermind is a two-person code breaking game which works as follows. The first person (the code maker) creates a sequence of 𝑛

colored pegs (with duplicate colors allowed) and hides it from view. This sequence of pegs is the code.

The second person (the code breaker) has the job of trying to determine the code maker’s code and she does so by making a series of guesses. Each guess also consists of 𝑛
colored pegs. After each guess, the code maker gives the code breaker feedback about how close she is. This feedback consists of two number 𝑟 and 𝑠

, where

    𝑟=

the number of pegs that are identical in both color and position in the code and the guess, and

𝑠=

    the number of remaining pegs that are identical in color but not in the same position.

For example, if the code is BACC (where we use different letters to represent colors) and the guess is CABB, then 𝑟=1
(the A in the second position of both the code and the guess) and 𝑠=2

(a B and C in the remaining three characters). Note that only one of the B’s in the guess will “match” with the single B in the code: once pegs in the code and the guess have been “matched” with each other, they can’t be matched with any other pegs.

Your job in this problem is to determine 𝑟
and 𝑠

given a code and a guess.
Input

The input is a single line containing a positive integer 𝑛≤50
(the length of the code) followed by two strings of length 𝑛

— the first of these is the code and the second is the guess. Both code and guess are made up of upper-case alphabetic characters.

4 BACC CABB

Output

Output the values of 𝑟
and 𝑠 for the given input.

1 2

'''