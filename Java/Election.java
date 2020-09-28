import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Election
{
	public static void main(String[] args) 
	{
		boolean tie = false;
	    int candidates = 0, winningPartyIndex = 0;
	    String voteCastFor = "";
	    Scanner scan = new Scanner(System.in);
	    candidates = scan.nextInt();
	    polls[] array_Of_Polls = new polls[candidates];
	    
	    voteCastFor = scan.nextLine();
	    
	    //System.out.println(array_Of_Polls.length);
       
	    for(int i = 0; i < array_Of_Polls.length; i++ )
	    {
         array_Of_Polls[i] = new polls();
	    	array_Of_Polls[i].setData(scan.nextLine(), scan.nextLine());
	    }

	    int votesCast = Integer.parseInt( scan.nextLine() );

        //System.out.println(votesCast);
	    for(int a = 0; a < votesCast; a++){
	    	voteCastFor = scan.nextLine();
	    	for(int b = 0; b < array_Of_Polls.length; b++){
	    		if(array_Of_Polls[b].name.equals(voteCastFor)){
	    			array_Of_Polls[b].incrementVotes();
	    		}
	    	}
	    }


	    for(int i = 1; i < array_Of_Polls.length; i++){
	    	if(array_Of_Polls[i].votes == array_Of_Polls[winningPartyIndex].votes){
	    		tie = true;
	    	}
	    	if(array_Of_Polls[i].votes > array_Of_Polls[winningPartyIndex].votes){
	    		winningPartyIndex = i;
	    		tie = false;
	    	}
	    }
	    
	    

	    if(!tie){
	    System.out.println(array_Of_Polls[winningPartyIndex].party);
		}
		else{
		System.out.println("tie");
		}

	    scan.close();
	}
	
	
    static class polls {
    int votes = 0;
    String party = "", name = "";
        public void setData(String name, String party){
            this.name = name;
            this.party = party;
        }
        
        public void incrementVotes(){
        	this.votes++;
        }
    }
}

/*
Canada has a multi-party system of government. Each candidate is generally associated with a party, and the party whose candidates win the most ridings generally forms the government. 
Some candidates run as independents, meaning they are not associated with any party. Your job is to count the votes for a particular riding and to determine the party with which the winning candidate is associated.
Input

The first line of input contains a positive integer 𝑛
satisfying 2≤𝑛≤20, the number of candidates in the riding. 𝑛

pairs of lines follow: the first line in each pair is the name of the candidate; the second line is the name of the party, or the word “independent” if the candidate has no party. No candidate name is repeated and no party name appears more than once in this part of the input.

The next line contains a positive integer 𝑚≤10000
, and is followed by 𝑚

lines each indicating the name of a candidate for which a ballot is cast. Any names not in the list of candidates should be ignored.

Each name line consists of at least 1
and at most 80 characters, uses only ASCII characters 32 to 126

(inclusive), and does not contain any leading or trailing blanks.

3
Marilyn Manson
Rhinoceros
Jane Doe
Family Coalition
John Smith
independent
6
John Smith
Marilyn Manson
Marilyn Manson
Jane Doe
John Smith
Marilyn Manson


Output

Output consists of a single line containing one of:

    The name of the party with whom the winning candidate is associated, if there is a winning candidate and that candidate is associated with a party.

    The word “independent” if there is a winning candidate and that candidate is not associated with a party.

    The word “tie” if there is no winner; that is, if no candidate receives more votes than every other candidate.

Rhinoceros

*/
