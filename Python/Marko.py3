def switch(i):
    switcher ={
            'a':'2',
            'b':'2',
            'c':'2',
            'd':'3',
            'e':'3',
            'f':'3',
            'g':'4',
            'h':'4',
            'i':'4',
            'j':'5',
            'k':'5',
            'l':'5',
            'm':'6',
            'n':'6',
            'o':'6',
            'p':'7',
            'q':'7',
            'r':'7',
            's':'7',
            't':'8',
            'u':'8',
            'v':'8',
            'w':'9',
            'x':'9',
            'y':'9',
            'z':'9'
        }
    return switcher.get(i,"error")


def convert(word):
    code = ""
    for a in word:
        code += switch(a)
    return int(code)

count = int(input())
words = 0
dictionary = []

for a in range(count):
    dictionary.append(input())

code = int(input())

for a in range(count):
    wordcode = convert(dictionary[a])
    if wordcode == code:
        words += 1

print(words)


'''
Good old Marko came across a new feature on his mobile phone – T9 input! His phone has a keyboard consisting of numbers looking like this:

1
2 abc
3 def
4 ghi
5 jkl 
6 mno
7 pqrs
8 tuv 
9 wxyz

In order to input a word using this keyboard, one needs to press a key multiple times for the required letter. More specifically, if the required 
letter is the first letter mapped to the key, one key press is needed, if it’s the second, two key presses are needed and so on. For instance, if 
we want to input the word “giht”, we will press the following keys: g-4 i-444 h-44 t-8. The new possibility Marko discovered enables you to input 
text more easily because you don’t need several presses per letter anymore, just one. The software will try to figure out what word from the dictionary you are trying to input.

Marko is quite sceptical of new technologies (at least new for him) and he is afraid that errors will be frequent. That is the reason why he decided 
to test his hypothesis that the errors are frequent. Marko knows by heart the whole dictionary in the mobile phone. The dictionary consists of 𝑁
words consisting of lowercase letters from the English alphabet, the total length of the word not exceeding 1000000 characters. He will give an array of key presses 𝑆, of total length at most 1000

, and wants to know how many words from the dictionary can be mapped to the given array of key presses if the T9 input feature is used.
Input

The first line of input contains the integer 𝑁
, the number of words in the dictionary. (1≤𝑁≤1000). Each of the following 𝑁 lines contains a single word. The last line of input contains the string 𝑆 (1≤|𝑆|≤1000) consisting of digits 2–9

.
Output

The first and only line of output must contain the number of words from the dictionary possible to construct from the letters on the keys determined by the string 𝑆
.