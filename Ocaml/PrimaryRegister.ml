#load "str.cma";;

let amounthandler l1 l2 =
  let f = fun a (b, c) -> (b - c) :: a in
  let base = [] in
  let args = List.rev (List.combine l1 l2) in
    List.fold_left f base args

let reghandler l1 l2 =
  let f = fun a (b, c) -> (b * c) + a in
  let base = 0 in
  let args = List.rev (List.combine l1 l2) in
    List.fold_left f base args


let reg tokens =
    let capacity = [1;2;4;6;10;12;16;18] in
    let con = [1;2;6;30;210;2310;30030;510510] in 
    let amount = amounthandler (capacity) (tokens) in
    let v = reghandler (amount) (con) in
    string_of_int v
    ;;

try
    while true;
    do 
        let line = read_line () in
        let tokens = List.map int_of_string (Str.split (Str.regexp " ") line) in 
        let countdown = reg (tokens) in        
            begin
            print_string countdown
            end;
    done;

with End_of_file -> ();;

(*
We’re working on a new super-computer, built to unleash the hidden computing powers of all eight dimensions of reality. 
The secret to utilizing more dimensions turns out to be to use counting registers of different sizes. In particular, we have eight registers, 
counting cyclically modulo the different primes 2, 3, 5, 7, 11, 13, 17, 19. A size 𝑝 register stores a value between 0 and 𝑝−1 (inclusive).

The only operation available is an “increment” operation. When it is performed, the size 2
register is increased by 1. If this increment causes overflow (i.e., if the old value was 1) the value is reset to 0, and the size 3 is incremented. 
If this causes overflow the size 3 register is reset to 0 and the size 5 register is incremented, and so on. If this goes all the way to the last register and the size 19

register overflows, the computer blows up.

In order not to destroy the computer in testing, we need to build a program to check the safety of doing increment operations before we perform them. 
Given the current state of the registers, you need to compute how many more operations can safely be performed before the computer blows up.
Input

The input consists of a single line containing eight integers 𝑣2
, 𝑣3, 𝑣5, 𝑣7, 𝑣11, 𝑣13, 𝑣17, 𝑣19 indicating the current values of the registers. The value of the size 𝑝 register is always between 0 and 𝑝−1

(inclusive).
Output

Ouput a single line containing an integer 𝑁

, the number of additional operations that can be performed without the computer blowing up.

Sample Input 1  
0 0 4 6 10 12 16 18

Sample Output 1
5

Sample Input 2
1 2 4 6 10 12 16 18

Sample Output 2
0

Sample Input 3  
0 0 0 0 0 0 0 0

Sample Output 3
9699689

*)