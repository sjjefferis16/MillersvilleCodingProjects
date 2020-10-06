import itertools
from itertools import permutations


def voteTally(pollingPlace):
    totalBallots = 0
    winner = 0
    noWinner = False
    for candidates in range(len(pollingPlace)):
        totalBallots += pollingPlace[candidates]
        if pollingPlace[candidates] == pollingPlace[winner] and candidates != 0:
            noWinner = True
        if pollingPlace[candidates] > pollingPlace[winner]:
            winner = candidates
            noWinner = False
    MOV = pollingPlace[winner] / totalBallots
    if noWinner:
        print("no winner")
    else:
        if MOV > 0.5:
            print("majority winner " + str(winner + 1))
        else:
            print("minority winner " + str(winner + 1))

i_numOfElection = int(input())

for electionNum in range(i_numOfElection):
    pollingPlace = []
    ballots = int(input())
    for voteNum in range(ballots):
        pollingPlace.append(int(input()))
    voteTally(pollingPlace)


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