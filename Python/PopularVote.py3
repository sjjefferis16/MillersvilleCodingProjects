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
In an election with more than two candidates, it is often the case that the winner (the candidate receiving the most votes) receives less than the majority of the votes. Given the results of an election, can you determine the winner, and whether the winner received more than half of the votes?
Input

The first line of input contains a single positive integer 𝑇≤500
indicating the number of test cases. The first line of each test case also contains a single positive integer 𝑛 indicating the number of candidates in the election. This is followed by 𝑛 lines, with the 𝑖th line containing a single nonnegative integer indicating the number of votes candidate 𝑖

received.

There are at least 2
and no more than 10 candidates in each case, and each candidate will not receive more than 50000

votes. There will be at least one vote cast in each election.
Output

Provide a line of output for each test case. If the winner receives more than half of the votes, print the phrase majority winner followed by the candidate number of the winner. If the winner does not receive more than half of the votes, print the phrase minority winner followed by the candidate number of the winner. If a winner cannot be determined because no single candidate has more vote than others, print the phrase no winner. The candidate numbers in each case are 1,2,…,𝑛

.
Sample Input 1  
4
3
10
21
10
3
20
10
10
3
10
10
10
4
15
15
15
45

Sample Output 1
majority winner 2
minority winner 1
no winner
minority winner 4


'''