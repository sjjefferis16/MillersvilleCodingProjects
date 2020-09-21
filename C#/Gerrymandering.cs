
/******************************************************************************

*******************************************************************************/

/******************************************************************************
Electoral systems across the world can vary widely. In some systems, such as winner-take-all, the winner is determined by the plurality of votes—the candidate that receives the most votes wins, and the loser(s) do not get a position.

Such elections can have “wasted votes.” Conceptually, a wasted vote is a vote that did not affect the election outcome. While the exact definition of a wasted vote varies, we’ll adopt the following definition: in an election with 𝑉
voters, every vote for a losing candidate is wasted (these are called lost votes), and every vote for a winning candidate beyond the strict majority of ⌊𝑉/2⌋+1

votes the candidate needs to win is wasted (these are called excess votes). For this problem we’ll consider a two-party system (let’s call the parties A and B) with elections that always involve one candidate from each party.

Let’s illustrate wasted votes with a simple example between two candidates in a district. Suppose that the candidate for party A receives 100
votes and the candidate for party B receives 200 votes. All 100 votes for party A are wasted (lost votes for A), and 49 votes for party B are wasted (excess votes for B). This is because B needs 151 (⌊(100+200)/2⌋+1) votes to win (over A), so the remaining 49

are wasted.

Political scientists use wasted votes to compute the efficiency gap, a single number that summarizes wasted votes. Suppose we have a number of races in different districts, where each district elects one person. Across all districts there are 𝑉
total votes cast, with 𝑤𝐴 total wasted votes for party A and 𝑤𝐵

total wasted votes for party B. Then the efficiency gap is:
𝐸(𝑉,𝑤𝐴,𝑤𝐵)=|𝑤𝐴−𝑤𝐵|𝑉.

A low efficiency gap indicates that the elections are competitive, and that the number of candidates elected from each party is representative of the total voting share for each party. When the efficiency gap is high, this can be an indication of gerrymandering. Gerrymandering refers to organizing voting districts in a way that favors a particular political outcome. Two common ways of doing this are to “pack” similar voters into districts, or “crack” them across multiple districts; both ways tend to diminish those voters’ influence in electing candidates they would like to win.

In an election, districts are made up of precincts. A precinct is an indivisible group of voters. The votes for all precincts in a district are added together to find the results for that district. In this problem you are given a description of a number of precincts: the party vote totals for each precinct, and how those precincts have been grouped into districts. For each district, determine the party that wins and the wasted votes for each party. Then determine the efficiency gap between the two parties over all the districts.
Input

The input describes one election. The first line contains two integers 𝑃
and 𝐷, where 1≤𝑃≤10000 and 1≤𝐷≤min(1000,𝑃). These indicate, respectively, the number of voting precincts and districts. Following this are 𝑃 lines describing the precincts. Line 𝑖 contains 3 numbers: the district 𝑑𝑖 that precinct 𝑖 is assigned to (1≤𝑑𝑖≤𝐷), the number of votes for the candidate from party A (0≤𝑎𝑖≤100000), and the number of votes for the candidate from party B (0≤𝑏𝑖≤100000

). It is guaranteed that:

    for each precinct 𝑖

, 0<𝑎𝑖+𝑏𝑖

    ,

    each district is assigned at least one precinct, and

    there are no ties within any district.

Output

For each of the districts from 1
to 𝐷, print which party wins (a single character, either A or B). Then print the number of wasted votes for party A and for party B, in order. Finally, after reporting on all the districts, print the efficiency gap as measured over all the districts. The efficiency gap should be accurate to within an absolute error of 10−6.
*******************************************************************************/

using System;
class Gerrymandering 
{
  static void Main() 
  {
            var input = Console.ReadLine();
            string[] tokens = input.Split(' ');
            int P = Convert.ToInt32(tokens[0]);
            int D = Convert.ToInt32(tokens[1]);
            int dis=0, a=0, b=0, wa=0,wb=0, wal=0, wbl=0;
            double ratio = 0, rn = 0, totalvotes=0;
            int[] districtsA = new int[D];
            int[] districtsB = new int[D];
            string[] districtWinner = new string[D];
            
            for(int i = 0; i < P; i++){
            input = Console.ReadLine();
            string[] tokens2 = input.Split(' ');
            dis=Convert.ToInt32(tokens2[0]);
            a = Convert.ToInt32(tokens2[1]);
            b = Convert.ToInt32(tokens2[2]);
            districtsA[dis- 1] += a;
            districtsB[dis- 1] += b;
            totalvotes += a + b;
            }
            
            for(int i = 0; i < D; i++)
            {
                if (districtsA[i] > districtsB[i])
                {
                    districtWinner[i] = "A";
                    wbl = districtsB[i];
                    wb += districtsB[i];
                    wal = districtsA[i] - (((districtsA[i] + districtsB[i])/2) + 1);
                    wa += districtsA[i] - (((districtsA[i] + districtsB[i])/2) + 1);
                } else 
                {
                    districtWinner[i] = "B";
                    wal = districtsA[i];
                    wa += districtsA[i];
                    wbl = districtsB[i] - (((districtsB[i] + districtsA[i])/2) + 1);
                    wb += districtsB[i] - (((districtsB[i] + districtsA[i])/2) + 1);
                }
                Console.WriteLine(districtWinner[i] + " " + wal + " " + wbl);
            }
            if (wa > wb)
            {
                rn = wa - wb;
            } 
            else 
            {
                rn = wb - wa;
            }
            
            ratio = rn / totalvotes;
            Console.WriteLine(ratio);
            
            
  }    
}
