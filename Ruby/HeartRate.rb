num_s = gets
$cases = num_s.to_i
$i = 0

while $i < $cases do
    input = gets
    nums = input.split()
    ratio = nums[0].to_f / nums[1].to_f
    base = ratio * 60
    min = base - (base / nums[0].to_f)
    max = base + (base / nums[0].to_f)
    puts " #{min.round(4)} #{base.round(4)} #{max.round(4)}" 
    $i += 1
end