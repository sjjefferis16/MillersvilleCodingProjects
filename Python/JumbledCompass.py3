input1 = input()
input2 = input()

def compass(current, correct):
    rad1, rad2 =0,0
    if current >= 180:
        rad1 = 360 - current + correct
        rad2 = rad1 - 360
        if abs(rad1) <= abs(rad2):
            print(rad1)
        else:
            print(rad2)
    else:
        rad1 = correct - current
        rad2 = rad1 - 360
        if abs(rad1) <= abs(rad2):
            print(rad1)
        else:
            print(rad2)

compass(int(input1), int(input2))

'''Jonas is developing the JUxtaPhone and is tasked with animating the compass needle. The API is simple: the compass needle is currently in some direction (between 0 and 359 degrees, with north being 0, east being 90), and is being animated by giving the degrees to spin it. If the needle is pointing north, and you give the compass an input of 90, it will spin clockwise (positive numbers mean clockwise direction) to stop at east, whereas an input of −45 would spin it counterclockwise to stop at north west.

The compass gives the current direction the phone is pointing and Jonas’ task is to animate the needle taking the shortest path from the current needle direction to the correct direction. Many ifs, moduli, and even an arctan later, he is still not convinced his minimumDistance function is correct; he calls you on the phone.
Input

The first line of input contains an integer 𝑛1
(0≤𝑛1≤359), the current direction of the needle. The second line of input contains an integer 𝑛2 (0≤𝑛2≤359

), the correct direction of the needle.

315
45


Output

Output the change in direction that would make the needle spin the shortest distance from 𝑛1
to 𝑛2. A positive change indicates spinning the needle clockwise, and a negative change indicates spinning the needle counter-clockwise. If the two input numbers are diametrically opposed, the needle should travel clockwise. I.e., in this case, output 180 rather than −180.

90
'''