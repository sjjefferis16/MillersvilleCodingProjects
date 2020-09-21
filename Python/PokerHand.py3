inputtext = input()
a, b, c, d, e = inputtext.split()
strings = []
strengthOfHand = 0;

def converter(card):
    if (card == "A"):
        card = "1"
    if (card == "T"):
        card = "10"
    if (card == "J"):
        card = "11"
    if (card == "Q"):
        card = "12"
    if (card == "K"):
        card = "0"
    return int(card)

strings.append(converter(a[0:1]))
strings.append(converter(b[0:1]))
strings.append(converter(c[0:1]))
strings.append(converter(d[0:1]))
strings.append(converter(e[0:1]))

for x in range(13):
    localStrength = 0
    for y in range(5):
        if(x == strings[y]):
            localStrength += 1
        if(localStrength > strengthOfHand):
            strengthOfHand = localStrength
print(str(strengthOfHand))
            