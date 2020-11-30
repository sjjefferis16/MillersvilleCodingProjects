#load "str.cma";;

let printer p = 
  begin
  print_string (string_of_int (p) ^ "\n")
  end
  ;;

let distanceCounter totalDistance tokens prev=
  let red = List.nth tokens 1 in 
  let green = List.nth tokens 2 in 
  let dis = totalDistance mod (red + green) in
  (*let p = printer (List.nth tokens 0) in*)
  if dis < red then
    (red - dis)
  else
    0
  ;;



let counter lights distance =
    let rec counterHelper x totalDistance prev=
      if x == lights then
        totalDistance + (distance - prev)
      else
        let line = read_line () in
        let tokens = List.map int_of_string (Str.split (Str.regexp " ") line) in 
        let td = distanceCounter(totalDistance + (List.nth tokens 0) - prev)(tokens)(prev) in
        counterHelper (x + 1) (totalDistance + td + (List.nth tokens 0) - prev) (List.nth tokens 0)
    in counterHelper(0) (0) (0)
        ;;

try
    while true;
    do 
        let line = read_line () in
        let tokens = List.map int_of_string (Str.split (Str.regexp " ") line) in 
        let lights = List.nth tokens 0 in
        let distance = List.nth tokens 1 in 
        let td = counter (lights) (distance)
         in
            begin
            print_string (string_of_int (td))
            end;
    done;

with End_of_file -> ();;

(*
Luka is driving his truck along a long straight road with many traffic lights. For each traffic light he knows how long the red and green lights will be on (the cycle repeating endlessly).

When Luka starts his journey, all traffic lights are red and just started their cycle. Luka moves one distance unit per second. When a traffic light is red, he stops and waits until it turns green.

Write a program that determines how much time Luka needs to reach the end of the road. The start of the road is at distance zero, the end at distance 𝐿

.
Input

The first line contains two integers 𝑁
and 𝐿 (1≤𝑁≤100, 1≤𝐿≤1000

), the number of traffic lights on the road and the length of the road.

Each of the next 𝑁
lines contains three integers 𝐷, 𝑅 and 𝐺, describing one traffic light (1≤𝐷<𝐿, 1≤𝑅≤100, 1≤𝐺≤100). 𝐷 is the distance of the traffic light from the start of the road. 𝑅 and 𝐺

denote how long the red and green lights are on, respectively.

The traffic lights will be ordered in increasing order of 𝐷

. No two traffic lights will share the same position.
Output

Output the time (in seconds) Luka needs to reach the end of the road.

Sample Input 1 	
2 10
3 5 5
5 2 2

Sample Output 1
12

Sample Input 2 	
4 30
7 13 5
14 4 4
15 3 10
25 1 1

Sample Output 2
36

*)