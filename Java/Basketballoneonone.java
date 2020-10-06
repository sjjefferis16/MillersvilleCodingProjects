import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Basketballoneonone
{
    public static void main(String[] args) 
    {
        int A = 0, B=0, pos1=0, pos2=1, lengthOfString=0;
        char winner = 'C';
        Scanner scan = new Scanner(System.in);
        String score = scan.next();
        lengthOfString = score.length() * 2;

        scan.close();
        int i = 0;
        while(i < lengthOfString && winner == 'C')
        {
            if(A < 10 || B < 10){
                if('A' == score.charAt(pos1)){
                    A += Character.getNumericValue(score.charAt(pos2));
                }
                else{

                    B += Character.getNumericValue(score.charAt(pos2));
                }
                if(A >= 11){
                    winner = 'A';
                }
                if(B >= 11){
                    winner = 'B';
                }
            }
            else{
                if('A' == score.charAt(pos1)){
                    A += Character.getNumericValue(score.charAt(pos2));
                }
                else{

                    B += Character.getNumericValue(score.charAt(pos2));
                }

                if(A >= (B+2)){
                    winner = 'A';
                }
                if(B >= (A+2)){
                    winner = 'B';
                }
            }
        if(pos2 + 2 != lengthOfString){
            pos1 += 2;
            pos2 += 2;
        }
        i++;
        }

        System.out.println(winner);
    }    
}
