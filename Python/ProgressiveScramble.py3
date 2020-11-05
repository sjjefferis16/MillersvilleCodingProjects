inputcount = int(input())

for a in range(inputcount):
    message = input()
    modval = ord(message[0]) - 96
    newmessage = message[2:len(message)]
    codedMessage = ""
    sums1 = 0
    sums2 = 0
    if modval == 5:
        for x in range(len(newmessage)):
            o = ord(newmessage[x])
            if o == 32:
                o =96
            sums1 += o - 96 
            modSum = (sums1 % 27) + 96
            if modSum == 96:
                modSum = 32
            codedMessage += chr(modSum)
    else:
        for x in range(len(newmessage)):
            o = ord(newmessage[x])
            if o == 32:
                o =96
            sums1 = ((o - 96) + 27) - sums2
            sums2 = ((o - 96) + 27)
            modSum = (sums1 % 27) + 96
            if modSum == 96:
                modSum = 32
            codedMessage += chr(modSum)

    print(codedMessage)


'''
You are a member of a naive spy agency. For secure communication, members of the agency use a very simple encryption algorithm
 – which changes each symbol in the message ‘progressively’, i.e., based on the symbols preceding it. The allowed symbols are 
 space and the 26 lowercase English letters. For encryption purposes we assign them the values 0 (for space) and 1 through 26 
 (for a–z). We’ll let 𝑣(𝑠) represent the numeric value of symbol 𝑠

.

Consider a message with symbols 𝑠1,𝑠2,…,𝑠𝑛
. The encryption algorithm starts by converting the first symbol 𝑠1 into its associated value 𝑢1=𝑣(𝑠1). Then for each subsequent 
symbol 𝑠𝑖 in the message, the computed value is 𝑢𝑖=𝑣(𝑠𝑖)+𝑢𝑖−1 — the sum of its associated value and the computed value for the previous symbol.
 (Note that when there is a space in the input message, the previous scrambled letter is repeated.) This process continues until all the 𝑢𝑖
are computed.

At this point, the message is a sequence of numeric values. We need to convert it back to symbols to print it out. We do this by taking the value 𝑢𝑖
modulo 27 (since there are 27 valid symbols), and replacing that value with its corresponding symbol. For example,
 if 𝑢𝑖=32, then 32mod27=5, which is the symbol ‘e’ (since 𝑣(𝑒)=5

).

Let’s look at an example. Suppose we want to encrypt the string “my pie”.

First, convert each symbol 𝑠𝑖 into 𝑣(𝑠𝑖): [13,25,0,16,9,5]

Next, compute each 𝑢𝑖: [13,38,38,54,63,68]

Then, use modulus on the 𝑢𝑖: [13,11,11,0,9,14]

Finally, convert these back to symbols: “mkk in”.

Create a program that takes text and encrypts it using this algorithm, and also decrypts text that has been encrypted with this algorithm.

Input

The input to your program consists of a single integer 1≤𝑛≤100
on its own line. This number is followed by 𝑛 lines, each containing the letter ‘e’ or ‘d’, a single space, and then a message made up of lowercase letters (a–z) and spaces, continuing to the end of the line. Each message is between 1 and 80

characters long. The letters ‘d’ and ‘e’ indicate that your program decrypts or encrypts the subsequent string, respectively.
Output

Output the result of encrypting or decrypting each message from the input on its own separate line. Note that differences in whitespace are significant in thi

Sample Input 1  
7
e testing multiple letters rrrrrrrrrrrrr
e this particularly long  sentence can test encryption
d tajbbrsjcloiuvmywwhwjqqqinauzmpuuxyllejbvv nqhfvoxlz
e my pie
d mkk in
e the quick brown fox jumps over the lazy dog
d taffwqzbmmofuqddjyvvezlatthchzzs eeqrqoosgn

Sample Output 1
tyqjsfmmzteygwhmmycwpulddvmdvmdvmdvmdv
tajbbrsjcloiuvmywwhwjqqqinauzmpuuxyllejbvv nqhfvoxlz
this particularly long  sentence can test encryption
mkk in
my pie
taffwqzbmmofuqddjyvvezlatthchzzs eeqrqoosgn
the quick brown fox jumps over the lazy dog

'''