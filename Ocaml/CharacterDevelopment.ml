let relations x =
    let rec relationsHelper y nn=
    let value = nn - (y+1) in
    if x = y then
    value
    else
    relationsHelper(y+1) (nn * 2)
    in relationsHelper(0)(1)
;;

let relations value  = 
let printer = relations(value) in
let s = string_of_int(printer) in
begin
    print_string s
end;
;;



try
    while true;
    do 
        let line = read_line () in
        let num = int_of_string(line) in 
        let inpp = relations(num)
         in
            begin
            end;
    done;

with End_of_file -> ();;

(*


Character Development

Virtually every single book, play, movie, novel, and game has at least one character. Most have more, and some even have thousands! As every good writer knows, the difficulty of creating a character increases with each new major character added. This is because fictional characters are truly developed through their relationships with others.

If there are no characters or only one character, no relationships need to be explored. With two characters, there is one relationship. If there are three characters, however, there are four relationships: the ones between each pair of characters, and finally the relationship when all three are together. In general, the relationship between all subsets of at least two characters must be explored.

Given a literary work with 𝑁

characters, how many relationships need to be explored?
Input

The input contains a single integer, 𝑁
(0≤𝑁≤30

), the number of characters.

sample input: 3


Output

Output a single line with the number of relationships that need to be explored.

sample output: 4

*)
