num_s = gets
num_s = num_s.split()
$part = num_s[0].to_i
$budget = num_s[1].to_i
$deal = $budget + 1
$hotels = num_s[2].to_i
$weeks = num_s[3].to_i
$i = 0
$stayhome = TRUE

while $i < $hotels do
    input = gets
    $price = input.to_i
    input = gets
    beds = input.split()
    $j = 0
    while $j < $weeks do
        $pricel = $part * $price
        if beds[$j].to_i >= $part and $pricel <= $deal then
            $deal = $pricel
            $stayhome = FALSE
        end
        $j += 1
    end
    $i += 1
end

if $stayhome then
    puts "stay home"
else
    puts $deal
end

=begin
Event Planning
As you didn’t show up to the yearly general meeting of the Nordic Club of Pin Collectors, you were unanimously elected to organize this years excursion to Pin City. You are free to choose from a number of weekends this autumn, and have to find a suitable hotel to stay at, preferably as cheap as possible.

You have some constraints: The total cost of the trip must be within budget, of course. All participants must stay at the same hotel, to avoid last years catastrophe, where some members got lost in the city, never being seen again.
Input

The first line of input consists of four integers: 1≤𝑁≤200
, the number of participants, 1≤𝐵≤500000, the budget, 1≤𝐻≤18, the number of hotels to consider, and 1≤𝑊≤13, the number of weeks you can choose between. Then follow two lines for each of the 𝐻 hotels. The first gives 1≤𝑝≤10000, the price for one person staying the weekend at the hotel. The second contains 𝑊 integers, 0≤𝑎≤1000

, giving the number of available beds for each weekend at the hotel.
Output

Output the minimum cost of the stay for your group, or “stay home” if nothing can be found within the budget.
Sample Input 1 	

3 1000 2 3
200
0 2 2
300
27 3 20

	
Sample Output 1
900

Sample Input 2 

5 2000 2 4
300
4 3 0 4
450
7 8 0 13

Sample Output 2
stay home

=end