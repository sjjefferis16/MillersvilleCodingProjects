import itertools
from itertools import permutations

class date:
    def __init__(self):
        self.day = 0
        self.month = 0
        self.year = 0

def leap(y):
    if y % 4 != 0:
        return False
    if y % 4 == 0 and y % 100 != 0:
        return True
    if y % 100 == 0 and y % 400 != 0:
        return False
    if y % 400 == 0:
        return True
    return False


def works(bd):
    if bd.day < 1:
        return False
    if bd.month < 1: 
        return False
    if bd.month > 12: 
        return False
    if bd.year < 2000: 
        return False
    days = [-1,31,28,31,30,31,30,31,31,30,31,30,31]
    if leap(bd.year):
        days[2] += 1
    if bd.day > days[bd.month] :
        return False

    return True

def newdate(d, dl):
    for x in range(len(dl)):
        y = dl[x]
        if y.month == d.month and y.day == d.day and y.year == d.year:
            return False
    return True

def birthday(workdates):
    y = 0
    for x in range(len(workdates)):
        #print(str(workdates[x].day) + str(workdates[x].month) + str(workdates[x].year))
        
        if workdates[y].year == working_dates[x].year:
            if workdates[y].month == working_dates[x].month:
                if workdates[y].day > working_dates[x].day:
                    y = x
            if workdates[y].month > working_dates[x].month:
                y = x
        if workdates[y].year > working_dates[x].year:
            y = x
    return y


n = input()
for x in range(int(n)):
    m = input()
    m = m.replace(" ", "")

    num_list = list(map(int, m))
    num_list.sort()
    perm_list = list(itertools.permutations(num_list))
    perm_list.sort()
    working_dates = []
    for y in range(len(perm_list)):
        iteration = perm_list[y]
        pbd = date()
        pbd.day = iteration[0] * 10 + iteration[1]
        pbd.month = iteration[2] * 10 + iteration[3]
        pbd.year = iteration[4] * 1000 + iteration[5] * 100 + iteration[6] * 10 + iteration[7]
        if works(pbd) and newdate(pbd, working_dates):
            working_dates.append(pbd)

    earlist_date = ""

    earlist_date += str(len(set(working_dates)))

    if len(working_dates) == 0:
        print(earlist_date)
    else:
        early = birthday(working_dates)
        earlist_date += " "
        if working_dates[early].day < 10:
            earlist_date += "0"

        earlist_date += str(working_dates[early].day) + " "

        if working_dates[early].month < 10:
            earlist_date += "0"

        earlist_date += str(working_dates[early].month) + " " + str(working_dates[early].year)

        print(earlist_date)

'''
Bash just woke up from his sweetest dream ever. In his dream, he became the best Pokenom trainer — like no one ever was. It was on the date …

Unfortunately, Bash forgot the exact date. He only remembered that the date was written in format ‘DD MM YYYY’ with exactly 8
digits. He also remembers these 8

digits (but he does not remember their order). Of course, the date must be a valid date.

Since Bash was born on Jan 1st, 2000, he knows that the date was on or after Jan 1st, 2000. (Note that the date can be Jan 1st, 2000 — it means Bash is destined to be the best Pokenom trainer since he was born!).

Bash really wants to know the date when he become the best Pokenom trainer. How many possible valid dates could there be? What is the earliest valid date that Bash could become the best Pokenom trainer?
Notes

On a leap year, February has 29

days. Following are the rules for determining leap years:

    A year divisible by 400

is a leap year,

A year divisible by 100
but not by 400

is NOT a leap year,

A year divisible by 4
but not by 100

is a leap year,

A year not divisible by 4

    is NOT a leap year.

Input

    The first line contains one integer 𝑡

(1≤𝑡≤50)

— the number of test cases.

Each of the next 𝑡

    lines describes one test case, contains eight digits in the format ‘XX XX XXXX’ (eight digits, separated by two blank spaces). Note that the input might not represent a valid date.

Note that the first month of the year is represented by 01
, and the first day of the month by 01

.
Output

For each test case, output a single line containing the number of possible dates and the earliest date which Bash could become the best Pokenom trainer, in the format ‘DD MM YYYY’. If there are no valid dates, print a single line containing ‘0
’ (zero) instead.

Sample Input 1  
3
04 11 2018
23 45 6789
01 01 0002

Sample Output 1
524 18 11 2004
0
4 01 01 2000

'''