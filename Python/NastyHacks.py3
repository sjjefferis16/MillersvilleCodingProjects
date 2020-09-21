'''

                           You are the CEO of Nasty Hacks Inc., a company that creates small pieces of malicious software which teenagers may use to fool their friends. The company has just finished their first product and it is time to sell it. You want to make as much money as possible and consider advertising in order to increase sales. You get an analyst to predict the expected revenue, both with and without advertising. You now want to make a decision as to whether you should advertise or not, given the expected revenues.
Input

The input consists of 𝑛
cases, and the first line consists of one positive integer giving 𝑛. The next 𝑛 lines each contain 3 integers, 𝑟, 𝑒 and 𝑐. The first, 𝑟, is the expected revenue if you do not advertise, the second, 𝑒, is the expected revenue if you do advertise, and the third, 𝑐, is the cost of advertising. You can assume that the input will follow these restrictions: 1≤𝑛≤100, −106≤𝑟,𝑒≤106 and 0≤𝑐≤106

.
Output

Output one line for each test case: “advertise”, “do not advertise” or “does not matter”, indicating whether it is most profitable to advertise or not, or whether it does not make any difference.
'''

n = input()

for x in range(int(n)):
    inputtext = input()
    a, b, d = inputtext.split()
    r = int(a)
    e = int(b)
    c = int(d)
    r += c
    if r < e:
        print("advertise")
    if r == e:
        print("does not matter")
    if r > e:
        print("do not advertise")
