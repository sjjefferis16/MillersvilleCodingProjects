
def missingNums(num, maximum)
    noError = true
    for a in 1..maximum do
        if !num.include? a
            noError = FALSE
            puts a
        end
    end
    if noError
        puts "good job"
    end
end

nums = Array.new
fullNums = Array.new
maximum = 0
len = gets
STDIN.each_line do |line|
    a = line.scan(/\d+/).map(&:to_i)
    if maximum < a[0]
        maximum = a[0]
    end
    nums.push(a[0])
end

missingNums(nums, maximum)
=begin
You enjoy your new job as a teacher of young children. It’s fun to see them learning to count, recognize letters, draw, and interact with the world.

One common problem you’ve noticed is that children often forget numbers when counting. For example, early on they might count “one, two, three, five, six.” You have to remind them about that “four” that they didn’t say. And as they get more proficient and clever, they may use the “quick” way of counting: “one, two, skip a few, ninety-nine, one hundred!”

Please write a program that can help you (and your students) identify the missing numbers when they are counting.
Input

The first line of input contains a single integer 𝑛
, where 1≤𝑛≤100. Each of the next 𝑛 lines contains one number that the child recited. Each recited number is an integer between 1 and 200

(inclusive). They are listed in increasing order, and there are no duplicates.
Output

If the child recited all the numbers between 1

and the last number they recited, then print good job.

If the child missed any numbers between 1

and the last number they recited, then print those missing numbers in increasing numeric order, one per line.
Sample Input 1 
9
2
4
5
7
8
9
10
11
13

Sample Output 1
1
3
6
12

=end