#load "str.cma";;

#load "str.cma";;

let reg subs =
    match (subs) with
    |("555") -> "1"
    |(_) -> "0"
    ;;

try
    while true;
    do 
        let line = read_line () in
        let subs = Str.string_before line 3  in 
        let output = reg (subs) in        
            begin
            print_string output
            end;
    done;

with End_of_file -> ();;
(*
In the United States of America, telephone numbers within an area code consist of seven digits: the prefix number is the first three digits and the line number is the last four digits. Traditionally, the 555

prefix number has been used to provide directory information and assistance as in the following examples:

    555-1212

    555-9876

    555-5000

    555-7777

Telephone company switching hardware would detect the 555

prefix and route the call to a directory information operator. Nowadays, telephone switching is done digitally and somewhere along the line a computer decides where to route calls.

For this problem, write a program that determines if a supplied seven-digit telephone number should be routed to the directory information operator, that is, the prefix number is 555

.
Input

The single line of input contains a single integer 𝑛
(1000000≤𝑛≤9999999

), which is a telephone number.
Output

Output a single integer, which is 1
if the number should be routed to the directory information operator, or 0 if the number should not be routed to the directory information operator.

Sample Input 1 
5551212

Sample Output 1
1

Sample Input 2
5519876

Sample Output 2
0

*)
