let oddities w = 
    let is_even = w mod 2 = 0 in 
        if is_even then (string_of_int w) ^ " is even " ^ "\n" else (string_of_int w) ^ " is odd " ^ "\n"
;;

let rec incrment line linecomp = 
if line > linecomp then
let w = read_line() in 
let a = (int_of_string w) in
let b = oddities(a) in 
begin
              print_string b
end;
incrment(line + 0)(linecomp + 1)
else line 
;;

try
    while true;
    do 
        let line = read_line () in
        let linecomp  = 0 in
        let a = (int_of_string line) in
        let inpp = incrment(a) (linecomp) in
            begin
            end;
    done;
with End_of_file -> ();;


