#load "str.cma";;
let mower cost lawns =
    let rec mowerHelper lawnsloc sum=
    if lawns = lawnsloc then
    sum *. cost
    else
    let line = read_line () in
    let tokens = List.map float_of_string (Str.split (Str.regexp " ") line) in 
    let x = List.nth tokens 0 in
    let y = List.nth tokens 1 in
    let locsum = sum +. (x *. y) in
    mowerHelper(lawnsloc +. 1.0) (locsum)
    in mowerHelper(0.0)(0.0)
;;

let output cost lawns= 
let printer = mower(cost) (lawns) in
let s = string_of_float(printer) in
begin
    print_string s
end
;;

try
    while true;
    do 
        let line = read_line () in
        let cost = (float_of_string line) in
        let line = read_line () in
        let lawns = (float_of_string line) in
        let func = output(cost) (lawns) 
         in
            begin
            end;
    done;

with End_of_file -> ();;

(*
Many years ago after another unfruitful day in Cubicle Land, banging her head against yet another cutting edge, 
marketing buzzword-filled JavaScript framework, Janice the engineer looked out of the window and decided that time was ripe for a change.

So swapping her keyboard and mouse for a fork and a spade, she started her own gardening company.

After years of hard outdoor work Janice now has biceps like Van Damme and owns the premiere landscaping company in the whole of the South West,
 and has just been lucky enough to broker a large contract to sow lawns for landed gentry.

Each contract details the size of the lawns that need to be seeded, and the cost of seed per square metre. How much do you need to spend on seed?
Input

    One line containing a real number 𝐶

(0<𝐶≤100

), the cost of seed to sow one square metre of lawn.

One line containing an integer 𝐿
(0<𝐿≤100

), the number of lawns to sow.

𝐿
lines, each containing two positive real numbers: 𝑤𝑖 (0≤𝑤𝑖≤100), the width of the lawn, and 𝑙𝑖 (0≤𝑙𝑖≤100

    ), the length of the lawn.

All real numbers are given with at most 8

decimals after the decimal point.
Output

    One line containing a real number: the cost to sow all of the lawns.

All output must be accurate to an absolute or relative error of at most 10−6

.
Sample Input 1  
2
3
2 3
4 5
5 6

Sample Output 1
112.0000000


*)
