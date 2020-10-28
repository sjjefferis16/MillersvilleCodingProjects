#load "str.cma";;

let scoremaker bigdice smalldice =
    match (bigdice, smalldice) with
    |(2,1) -> "100"
    |(6,6) -> "99"
    |(5,5) -> "98"
    |(4,4) -> "97"
    |(3,3) -> "96"
    |(2,2) -> "95"
    |(1,1) -> "94"
    |(_,_) -> (string_of_int (bigdice)) ^ (string_of_int (smalldice))

let counter dice1 dice2 =
    if dice1 > dice2 then
    scoremaker(dice1) (dice2)
    else
    scoremaker(dice2) (dice1)
;;

let evalfun p1score p2score =
    if p1score == p2score then
     print_string "Tie. \n"
    else
        if p1score > p2score then
        print_string "Player 1 wins. \n"
        else
        print_string "Player 2 wins. \n"
    

let output x =
    let rec outputHelper w =
        let line = read_line () in
        let tokens = List.map int_of_string (Str.split (Str.regexp " ") line) in 
        let d0 = List.nth tokens 0 in
        let d1 = List.nth tokens 1 in 
        let d2 = List.nth tokens 2 in
        let d3 = List.nth tokens 3 in
        if d1 == 0 then
        []
        else
        let p1score = counter(d0)(d1) in
        let p2score = counter(d2)(d3) in
        let pfun = evalfun(int_of_string (p1score))(int_of_string (p2score)) in
        outputHelper(d0)
     in outputHelper(1)
    ;;

try
    while true;
    do 
        let func = output(1) 
         in
            begin
            end;
    done;

with End_of_file -> ();;
(*
Mia is a dice game for two players. Each roll consist of two dice. Mia involves bluffing about what a player has rolled, but in this problem we focus only on its scoring rules. Unlike most other dice games, the score of a roll is not simply the sum of the dice.

Instead, a roll is scored as follows:

    Mia (12

or 21

) is always highest.

Next come doubles (11
, 22, and so on). Ties are broken by value, with 66

being highest.

All remaining rolls are sorted such that the highest number comes first, which results in a two-digit number. The value of the roll is the value of that number, e.g. 3
and 4 becomes 43

    .

Input

The input will contain multiple, distinct test cases. Each test case contains on a single line four integers 𝑠0 𝑠1 𝑟0 𝑟1
where 𝑠0 𝑠1 represent the dice rolled by player 1 and 𝑟0 𝑟1 represents the dice rolled by player 2. The input will be terminated by a line containing 4

zeros.
Output

For each test case, output which player won, or whether there was a tie, using exactly the format shown below.
Sample Input 1  
1 2 1 3
3 3 2 1
6 6 4 4
6 5 1 1
4 2 2 4
0 0 0 0

Sample Output 1
Player 1 wins.
Player 2 wins.
Player 1 wins.
Player 2 wins.
Tie.

*)
