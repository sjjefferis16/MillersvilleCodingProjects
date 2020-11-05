#load "str.cma";;

let counter number =
        match number with 
        |(-60) -> "4 - 4 * 4 * 4 = -60"
        |(-16) -> "4 - 4 * 4 - 4 = -16"
        |(-15) -> "4 / 4 - 4 * 4 = -15"
        |(-8) -> "4 - 4 - 4 - 4 = -8"
        |(-7) -> "4 / 4 - 4 - 4 = -7"
        |(-4) -> "4 / 4 / 4 - 4 = -4"
        |(-1) -> "4 - 4 / 4 - 4 = -1"
        |0 -> "4 * 4 - 4 * 4 = 0"
        |1 -> "4 / 4 * 4 / 4 = 1"
        |2 -> "4 / 4 + 4 / 4 = 2"
        |4 -> "4 / 4 / 4 + 4 = 4"
        |7 -> "4 + 4 - 4 / 4 = 7"
        |8 -> "4 - 4 + 4 + 4 = 8"
        |9 -> "4 + 4 + 4 / 4 = 9"
        |15 -> "4 * 4 - 4 / 4 = 15"
        |16 -> "4 * 4 + 4 - 4 = 16"
        |17 -> "4 * 4 + 4 / 4 = 17"
        |24 -> "4 * 4 + 4 + 4 = 24"
        |32 -> "4 * 4 + 4 * 4 = 32"
        |60 -> "4 * 4 * 4 - 4 = 60"
        |68 -> "4 * 4 * 4 + 4 = 68"
        |256 -> "4 * 4 * 4 * 4 = 256"
        |_ -> "no solution"
        ;;

let output lines=
    let rec outputHelper x =
        if x == lines then
        []
        else
        let line = read_line () in
        let number = int_of_string (line) in 
        let excess = counter(number) in
        begin
        print_string (excess ^ "\n")
        end;
        outputHelper(x+1)
    in outputHelper(0)
    ;;

try
    while true;
    do 
        let line  = read_line() in 
        let value = int_of_string (line) in
        let func = output(value) in
            begin
            end;
    done;

with End_of_file -> ();;

(*
Write a program which, given an integer 𝑛 as input, will produce a mathematical expression whose solution is 𝑛. 
The solution is restricted to using exactly four 4’s and exactly three of the binary operations selected from the set {∗,+,−,/}. 
The number 4 is the ONLY number you can use. You are not allowed to concatenate fours to generate other numbers, such as 44 or 444

.

For example given 𝑛=0
, a solution is 4∗4−4∗4=0. Given 𝑛=7, a solution is 4+4−4 / 4=7. Division is considered truncating integer division, so that 1/4 is 0 (instead of 0.25). 
Assume the usual precedence of operations so that 4+4∗4=20, not 32. 
Not all integer inputs have solutions using four 4’s with the aforementioned restrictions (consider 𝑛=11

).

Hint: Using your forehead and some forethought should make an answer forthcoming. When in doubt use the fourth.
Input

Input begins with an integer 1≤𝑚≤1000
, indicating the number of test cases that follow. Each of the next 𝑚 lines contain exactly one integer value for 𝑛 in the range −1000000≤𝑛≤1000000

.
Output

For each test case print one line of output containing either an equation using four 4

’s to reach the target number or the phrase no solution. Print the equation following the format of the sample output; use spaces to separate the numbers and 
symbols printed. If there is more than one such equation which evaluates to the target integer, print any one of them.
Sample Input 1  
5
9
0
7
11
24

Sample Output 1
4 + 4 + 4 / 4 = 9
4 * 4 - 4 * 4 = 0
4 + 4 - 4 / 4 = 7
no solution
4 * 4 + 4 + 4 = 24

*)