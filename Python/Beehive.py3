while(True):
    sweet, sour = 0,0
    dis, hive = input().split()
    f_dis = float(dis)
    i_hive = int(hive)
    hiveLocsx = [0.0] * i_hive
    hiveLocsy = [0.0] * i_hive
    if f_dis == 0 and int(hive) == 0:
        break
    for z in range(i_hive):
        x, y = input().split()
        hiveLocsx[z] = float(x)
        hiveLocsy[z] = float(y)
    for z in range(i_hive):
        sours = 0
        x1 = list(hiveLocsx)[z]
        y1 = list(hiveLocsy)[z]
        for a in range(int(hive)):
            
            x2 = list(hiveLocsx)[a]
            y2 = list(hiveLocsy)[a]
            d = ( ( (x2 - x1) ** 2) + ( (y2 - y1) ** 2) ) ** (0.5)
            if(d != 0 and d < f_dis):
                sours += 1
        if sours == 0:
            sweet += 1 
        else:
            sour += 1
    print(str(sour) + " sour, " + str(sweet) + " sweet")

    '''

Beehives
Bill the beekeeper has a problem! His bees like to fight with each other instead of producing honey. If the bees fight each other, then the honey turns out sour. The only way to stop the bees from fighting and keep the honey sweet is to ensure that the hives are not too close together. Help Bill figure out how many of this season’s hives will produce sour honey.

Bill’s hives all exist on a plane, and he knows some distance d such that two hives within 𝑑
of each other will fight, and both will produce sour honey. If a hive does not fight with any other hives, it produces sweet honey. Given 𝑑 and the positions of 𝑁

beehives, output how many hives will produce sweet honey and how many hives will produce sour honey.
Input

Input will be provided on multiple lines. There may be up to 10
test cases in the input. Each case will begin with a floating point number 𝑑 (0<𝑑<1000), the distance within which hives will fight, followed by an integer 𝑁 (1≤𝑁≤100), the number of hives in that case. The next 𝑁 lines will contain two floating point numbers separated by a single space, 𝑥 and 𝑦 (−1000≤𝑥,𝑦≤1000

), which give the position of each hive. No two hives will be at the exact same location. Input will be terminated by a line containing the string 0.0 0.
Output

For each case output a line of the following form: a sour, b sweet where 𝑎
and 𝑏

are the number of hives producing sour and sweet honey, respectively.
Sample Input 1  
10.0 3
3.0 3.0
3.5 4.5
20.0 20.0
5.0 4
2.0 1.0
2.0 4.0
2.0 8.0
2.0 12.0
0.0 0

Sample Output 1
2 sour, 1 sweet
4 sour, 0 sweet

    '''