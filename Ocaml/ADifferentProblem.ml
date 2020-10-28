#load "str.cma";;

let sub = fun int0 int1 -> int0 - int1
;;

let counter int0 int1 = 
    if int0 > int1 then
    sub (int0) (int1)
    else 
    sub (int1) (int0)
;;


try
    while true;
    do 
        let line = read_line () in
        let tokens = List.map int_of_string (Str.split (Str.regexp " ") line) in 
        let int0 = List.nth tokens 0 in
        let int1 = List.nth tokens 1 in
        let countdown = counter(int0)(int1)
        in
            begin
            print_string (string_of_int (countdown) ^ "\n")
            end;
    done;

with End_of_file -> ();;


(*
Write a program that computes the difference between non-negative integers.
Input

Each line of the input consists of a pair of integers. Each integer is between 0
and 1015

(inclusive). The input is terminated by end of file.
Output

For each pair of integers in the input, output one line, containing the absolute value of their difference.

Sample Input 1: 
10 12
71293781758123 72784
1 12345677654321

Sample Output 1:
2
71293781685339
12345677654320

*)