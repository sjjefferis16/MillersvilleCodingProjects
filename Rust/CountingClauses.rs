
fn main() {
    use std::io::{stdin,stdout,Write};
    let mut input=String::new();
    let _=stdout().flush();
    stdin().read_line(&mut input);
    
    let string_vector: Vec<&str> = input.split(' ').collect();
    let input_int: u32 = string_vector[0].parse::<u32>().unwrap();
    if input_int < 8 {
    println!("unsatisfactory");
    }
    else {
    println!("satisfactory");
    }
}

/******************************************************************************

Counting Clauses

It’s time for the annual 3-SAT competition, where the contestants compete to answer as many instances of 3-SAT as possible within the time limit. 3-SAT is a classic NP-complete problem, where you are given a boolean formula in conjunctive normal form, in which we have a set of clauses each consisting of exactly three literals. Each literal refer either positively or negatively to a variable, which can be assigned a value of either True or False. The question is whether there exists an assignment to the variables such that every clause evaluates to True. No clause will contain duplicates of a literal (however it is possible that a clause contain both ¬𝑥𝑖
and 𝑥𝑖

). An example of a 3-SAT instance is shown below (from sample input 1):
(¬𝑥1∨𝑥2∨𝑥3)∧(¬𝑥1∨¬𝑥2∨𝑥3)∧(𝑥1∨¬𝑥2∨𝑥3)∧(𝑥1∨¬𝑥2∨¬𝑥3)∧(𝑥1∨𝑥2∨¬𝑥3)
/problems/countingclauses/file/statement/en/img-0001.png
Illustration of the terminology
Øyvind is a judge in the competition, responsible for verifying the quality of problem instances crafted by the other judges before the contest starts. Øyvind hates 3-SAT instances with less than eight clauses – as these are always satisfiable they provide no real challenge for the contestants. Therefore, he will deem such problem instances to be unsatisfactory. Whenever Øyvind encounters an instance with eight or more clauses he knows that it is a real challenge to figure out whether this instance is satisfiable or not – and therefore he will judge these problem instances to be satisfactory. Given an instance of 3-SAT, can you help find Øyvind’s judgement?

Input
The input is a single instance of the 3-SAT problem. The first line is two space-separated integers: 𝑚
(1≤𝑚≤20), the number of clauses and 𝑛 (3≤𝑛≤20), the number of variables. Then 𝑚 clauses follow, one clause per line. Each clause consists of 3 distinct space-separated integers in the range [−𝑛,𝑛]∖{0}
5 3
-1 2 3
-1 -2 3
1 -2 3
1 -2 -3
1 2 -3


. For each clause, the three values correspond to the three literals in the clause. If the literal is negative, that means that the clause is satisfied if the corresponding variable is set to False, and if it is positive the clause is satisfied if the variable is set to True.

Output
Print “satisfactory” on a single line if Øyvind finds the 3-SAT instance to be satisfactory, and “unsatisfactory” otherwise.
unsatisfactory

*******************************************************************************/