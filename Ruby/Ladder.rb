=begin

You are attempting to climb up the roof to fix some leaks, and have to go buy a ladder. The ladder needs to reach to the top of the wall, which is ℎ centimeters high, and in order to be steady enough for you to climb it, the ladder can be at an angle of at most 𝑣

degrees from the ground. How long does the ladder have to be?
Input

The input consists of a single line containing two integers ℎ
and 𝑣, with meanings as described above. You may assume that 1≤ℎ≤10000 and that 1≤𝑣≤89

.
Output

Write a single line containing the minimum possible length of the ladder in centimeters, rounded up to the nearest integer.

=end

h = gets
v = 0
length = 0
radians = 0
nums = h.split()
radians = nums[1].to_i * Math::PI / 180
v = Math.sin(radians)
length = nums[0].to_i / v
length = length.ceil


puts length