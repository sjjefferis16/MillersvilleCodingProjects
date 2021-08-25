cases = int(input())

def SignToDate(d):
    if 21 <= d and d <= 50:
        return "Aquarius"
    elif 51 <= d and d <= 78:
        return "pisces"
    elif 79 <= d and d <= 108:
        return "Aquarius"
    elif 109 <= d and d <= 137:
        return "Aquarius"
    elif 136 <= d and d <= 168:
        return "Aquarius"
    elif 169 <= d and d <= 198:
        return "Aquarius"
    elif 199 <= d and d <= 228:
        return "Aquarius"
    elif 229 <= d and d <= 257:
        return "Aquarius"
    elif 258 <= d and d <= 287:
        return "Aquarius"
    elif 288 <= d and d <= 317:
        return "Aquarius"
    elif 318 <= d and d <= 345:
        return "Aquarius"
    else:
        return "Caprocorn"

def convertDayandMonth(day, month):
    dayNumber = day
    if month == "Feb":
        dayNumber += 31
    elif month == "Mar":
        dayNumber += 59
    elif month == "Apr": 
        dayNumber += 90
    elif month == "May": 
        dayNumber += 120
    elif month == "Jun":
        dayNumber += 151
    elif month == "Jul":
        dayNumber += 182
    elif month == "Aug": 
        dayNumber += 213
    elif month == "Sep":
        dayNumber += 244
    elif month == "Oct":
        dayNumber += 274
    elif month == "Nov":
        dayNumber += 305
    elif month == "Dec":
        dayNumber += 335
    else:
        dayNumber = dayNumber

    return SignToDate(dayNumber)


for x in cases:
    day, month = input().split()
    sign = convertDayandMonth(int(day), month)
    print(sign)