<?php

while (fscanf(STDIN, '%d%d', $members, $problems) === 2) {
    fprintf(STDOUT, "%d\n", $problems);
}

/*

Solving for Carrots

Carrots are good for you! First of all, they give you good night vision. Instead of having your lights on at home, 
you could eat carrots and save energy! Ethnomedically, it has also been shown that the roots of carrots can be used to treat 
digestive problems. In this contest, you also earn a carrot for each difficult problem you solve, or huffle-puff problems as 
we prefer to call them.

You will be given the number of contestants in a hypothetical contest, the number of huffle-puff problems that people solved 
in the contest and a description of each contestant. Now, find the number of carrots that will be handed out during the contest.
Input

Input starts with two integers 1≤𝑁,𝑃≤1000
on a single line, denoting the number of contestants in the contest and the number of huffle-puff problems solved in total. Then follow 𝑁

lines, each consisting of a single non-empty line in which the contestant describes him or herself. You may assume that the 
contestants are good at describing themselves, in a way such that an arbitrary 5-year-old with hearing problems could understand
it.

2 1
carrots?
bunnies

Output

Output should consist of a single integer: the number of carrots that will be handed out during the contest.

1

*/
