
let squares x =
    let rec squaresHelper x i rows =
        if i = x then
        rows *. rows
        else
        squaresHelper (x) (i +. 1.) (rows +. 2. ** i) in
    squaresHelper x 0. 2.
;;

let square value  = 
let printer = squares(value) in
let pi = int_of_float(printer) in
let s = string_of_int( pi) in
begin
    print_string s
end;
;;



try
    while true;
    do 
        let line = read_line () in
        let num = float_of_string(line) in 
        let inpp = square(num)
         in
            begin
            end;
    done;

with End_of_file -> ();;

