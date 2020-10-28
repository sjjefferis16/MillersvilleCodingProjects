#load "str.cma";;

let counter population growth food =
        let rec counterHelper curpop year=
        if curpop > food then
            let s = string_of_int (year) ^ "\n" in
            print_string s 
        else
            let newpop = curpop * growth in 
            counterHelper(newpop)(year + 1)
        in counterHelper(population)(0)
        ;;

let output lines=
    let rec outputHelper x =
        if x == lines then
        []
        else
        let line = read_line () in
        let tokens = List.map int_of_string (Str.split (Str.regexp " ") line) in 
        let population = List.nth tokens 0 in
        let growth = List.nth tokens 1 in 
        let food = List.nth tokens 2 in
        let excess = counter(population) (growth) (food) in
        outputHelper(x+1)
    in outputHelper(0)
    ;;

try
    while true;
    do 
        let line  = read_line() in 
        let value = (int_of_string line) in
        let func = output(value) 
         in
            begin
            end;
    done;

with End_of_file -> ();;
(*
Dr. Thanos, data scientist and self-described nihilist, recently published a paper titled The snapping point of the universe: why rates of population growth point towards imminent destruction. In his paper, Thanos explains that in many planets, the increasing population count is leading to a diminished quality of life. He is convinced that his findings will drive sweeping reforms in intergalactic law, leading to a better life for all organisms.

Thanos turns to you, his confidant, to do some investigation. He would like some concrete evidence for his findings to present to the Association of VENGE’s Research Society. The society, one of the galatic leaders in egalitarianism and social justice, is holding a special panel to discuss Thano’s findings. As this involves the chance of actual legislation being passed, Thanos is convinced that the panelists are going to be a tough sell. He asks you to investigate several datasets and see if they could be potentially helpful in supporting his argument.

Thanos hands you the data for several planets. On each planet’s file, you read that: the planet currently has a population of 𝑃
, its population grows by a factor of 𝑅 times per year, and its annual food production 𝐹 in tons. All food produced in a year must be consumed that year; it cannot be saved. Assume that each individual consumes 1

ton of food per year, and that the population for each planet each year is always counted as a whole number, rounded down. Given this information, your task is to find out the number of years a planet has remaining before its population is no longer sustainable by its food production.
Input

The first line of input consists of a single integer 𝑇
(1≤𝑇≤2000), the number of planets that need to be analyzed.
𝑇 lines follow, the 𝑖th of which consists of three space-separated integers 𝑃 (1≤𝑃≤109), 𝑅 (1<𝑅≤109), and 𝐹 (1≤𝐹≤109), the metrics of planet 𝑖

as described above.
Output

Print 𝑇
lines, the 𝑖th of which should consist of a single integer denoting the number of years the 𝑖

th planet has before it is no longer sustainable.
Sample Input 1  
3
1 3 9
2 2 16
5 2 11

Sample Output 1
3
4
2

*)
