
def digets(num)
    i_num = Integer(num)
    if i_num == 0 || i_num == 1
        puts 1
    else
        b = i_num * Math.log10(i_num / Math::E) + Math.log10(2 * Math::PI * i_num) / 2.0;
        b = b.floor() + 1
        puts b
    end
end



STDIN.each_line do |line|
    nums = line.scan(/\d+/).map(&:to_i)
    a = nums[0]
    digets(a)
end

=begin
Often times it is sufficient to know the rough size of a number, rather than its exact value. For example, a human can reason about which store to visit to buy milk if one store is roughly 1 kilometer away, and another store is roughly 100

kilometers away. The exact distance to each store is irrelevant to the decision at hand; only the sizes of the numbers matter.

For this problem, determine the ‘size’ of the factorial of an integer. By size, we mean the number of digits required to represent the answer in base-10

.
Input

Input consists of up to 10000
integers, one per line. Each is in the range [0,1000000]

. Input ends at end of file.

0
1
3
10
20


Output

For each integer 𝑛
, print the number of digits required to represent 𝑛! in base-10.

1
1
1
7
19

=end