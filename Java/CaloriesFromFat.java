
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.StringTokenizer; 
import java.text.*;
import java.lang.Math;

public class Main
{
    public static void main(String[] args) throws IOException  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
    
    double fat = 0, protein = 0, sugar = 0, starch = 0, alcohol = 0;

    String input = null;

    

        while ((input = br.readLine()) != null ) 
        {
            StringTokenizer str = new StringTokenizer(input); 
            if(str.countTokens() == 5){
                String sFat = str.nextToken();
                String sProtein = str.nextToken();
                String sSugar = str.nextToken();
                String sStarch = str.nextToken();
                String sAlcohol = str.nextToken();

                String fatUnit = sFat.substring(sFat.length() - 1 );
                String proteinUnit = sProtein.substring(sProtein.length() - 1 );
                String sugarUnit = sSugar.substring(sSugar.length() - 1 );
                String starchUnit = sStarch.substring(sStarch.length() - 1);
                String alcoholUnit = sAlcohol.substring(sAlcohol.length() - 1);

                double dFat = Double.parseDouble(sFat.substring(0,(sFat.length() - 1) ));
                double dProtein = Double.parseDouble(sProtein.substring(0,(sProtein.length() - 1) ));
                double dSugar = Double.parseDouble(sSugar.substring(0,(sSugar.length() - 1) ));
                double dStarch = Double.parseDouble(sStarch.substring(0,(sStarch.length() - 1) ));
                double dAlcohol = Double.parseDouble(sAlcohol.substring(0,(sAlcohol.length() - 1) ));

                double rFat = gConverter(dFat, 9, fatUnit);
                double rProtein = gConverter(dProtein, 4, proteinUnit);
                double rSugar = gConverter(dSugar, 4, sugarUnit);
                double rStarch = gConverter(dStarch, 4, starchUnit);
                double rAlcohol = gConverter(dAlcohol, 7, alcoholUnit);
                double total = rFat + rProtein + rSugar + rStarch + rAlcohol;

                double pFat = Percents(dFat, fatUnit );
                double pProtein = Percents(dProtein, proteinUnit );
                double pSugar = Percents(dSugar, sugarUnit );
                double pStarch = Percents(dStarch, starchUnit );
                double pAlcohol = Percents(dAlcohol, alcoholUnit);
                double percent = 100 - pFat - pProtein - pSugar - pStarch - pAlcohol;

                fat += pConverter(percent, pFat, rFat, total);
                protein += pConverter(percent, pProtein, rProtein, total);
                sugar += pConverter(percent, pSugar, rSugar, total);
                starch += pConverter(percent, pStarch, rStarch, total);
                alcohol += pConverter(percent, pAlcohol, rAlcohol, total);
            }
            else{
                if(fat != 0 || protein != 0 || sugar != 0 || starch != 0 || alcohol != 0){
                    double percent = (fat / (fat + protein + sugar + starch + alcohol)) * 100;

                    String percentString = String.valueOf(Math.round(percent));
                    System.out.println(percentString + "%");
                }
                fat = 0;
                protein = 0;
                sugar = 0;
                starch = 0;
                alcohol = 0;
            }
        }

    }

    public static double gConverter (double val, double mult, String u){
        double r = 1;
        switch(u){
            case "C":
                r = val;
                break;
            case "g":
                r = (val * mult);
                break;
            default:
                r = 0;
                break;
        }

        return r;
    }

    public static double Percents (double percent, String unit){
        if(unit.equals("%")){
            return percent;
        } else {
            return 0;
        }
    }

    public static double pConverter(double percent, double p, double r, double total){
        if(p != 0){
        return (total * (p / 100) / (percent / 100));
        }
        else {
            return r;
        }
    }
}

/*
Fat contains about 9 Calories/g of food energy. Protein, sugar, and starch contain about 4 Calories/g, while alcohol contains about 7 Calories/g. Although many people consume more than 50% of their total Calories as fat, most dieticians recommend that this proportion should be 30% or less. For example, in the Nutrition Facts label to the right, we see that 3g of fat is 5% of the recommended daily intake based on a 2,000 calorie diet. A quick calculation reveals that the recommended daily intake of fat is therefore 60g; that is, 540 Calories or 27% Calories from fat.

Others recommend radically different amounts of fat. Dean Ornish, for example, suggests that less than 10% of total caloric intake should be fat. On the other hand, Robert Atkins recommends the elimination of all carbohydrate with no restriction on fat. It has been estimated that the average Atkins dieter consumes 61% of Calories from fat.

From a record of food eaten in one day, you are to compute the percent Calories from fat. The record consists of one line of input per food item, giving the quantity of fat, protein, sugar, starch and alcohol in each. Each quantity is an integer followed by a unit, which will be one of: g (grams), C (Calories), or % (percent Calories). Percentages will be between 0 and 99. At least one of the ingredients will be given as a non-zero quantity of grams or Calories (not percent Calories).
Input

Input will consist of several test cases (at most 150). Each test case will have one or more lines as described above (at most 100). Each test case will be terminated by a line containing ’-’. An additional line containing ’-’ will follow the last test case.
Output

For each test case, print percent Calories from fat, rounded to the nearest integer.
Sample Input 1  
3g 10g 10% 0g 0g
55% 100C 0% 0g 30g
-
25g 0g 0g 0g 0g
-
1g 15% 20% 30% 1C
-
-

Sample Output 1
53%
100%
32%

*/