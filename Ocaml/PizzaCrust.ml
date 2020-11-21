let counter i o =
        if o = i then
        begin 
        print_string ("0.0")
        end
        else
        let pi = acos (-1.0) in 
        let value =( (pi *. ( (o -. i) *. (o -. i) ) ) /. (pi *. (i *. i) ) ) *. 100.0 in 
        begin 
        Printf.printf "%0.6f" value
        end
        ;;

try
    while true;
    do 
        let line = read_line () in
        let tokens = List.map float_of_string (Str.split (Str.regexp " ") line) in 
       let excess = counter (List.nth tokens 0) (List.nth tokens 1)
         in
            begin
            end;
    done;

with End_of_file -> ();;


(*
George has bought a pizza. George loves cheese. George thinks the pizza does not have enough cheese. George gets angry.

George’s pizza is round, and has a radius of 𝑅
cm. The outermost 𝐶

cm is crust, and does not have cheese. What percent of George’s pizza has cheese?
Input

The input consists of a single line with two space separated integers, 𝑅
and 𝐶

.
Output

Output the percentage of the pizza that has cheese. Your answer must have an absolute or relative error of at most 10−6
.
Sample Input 1 	
1 1
Sample Output 1
0.00000000

Sample Input 2 	
2 1

Sample Output 2
25.0000000
*)