
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.StringTokenizer; 
import java.text.*;
import java.util.*; 
import java.util.ArrayList;


public class Warehouse
{
    public static void main(String[] args) throws IOException  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
    StringTokenizer st = new StringTokenizer(br.readLine()); 
    
    String input = null;
    int cases = Integer.parseInt(st.nextToken()); 

    for (int i = 0; i < cases; i++) {
        st = new StringTokenizer(br.readLine()); 
        int orders = Integer.parseInt(st.nextToken());

        ArrayList<setOrdered> sets = new ArrayList<>();

        for (int j = 0; j < orders; j++) {
            st = new StringTokenizer(br.readLine()); 

            String name = st.nextToken(); 
            int ordered = Integer.parseInt(st.nextToken()); 

            setOrdered lso = findLso(sets, name);


            if(lso == null){
            setOrdered so = new setOrdered();
            so.setData(ordered, name);
            sets.add(so);
            }
            else{
                lso.increment(ordered);
            }
        }

        order(sets);

        System.out.println(sets.size());

        for (int j = 0; j < sets.size(); j++) {
            System.out.println(sets.get(j).name + " " + sets.get(j).numOrdered);
        }
        
    }

    }

    static class setOrdered {
    int numOrdered;
    String name;
        public void setData(int Order, String s){
            this.numOrdered = Order;
            this.name = s;
        }
        
        public void increment(int nextOrder){
            this.numOrdered += nextOrder;
        }

        public int getNumOrdered(){
            return this.numOrdered;
        }

        public String getName(){
            return this.name;
        }
    }

    static setOrdered findLso(ArrayList<setOrdered> s, String n){
        return s.stream().filter(setOrdered -> n.equals(setOrdered.getName())).findFirst().orElse(null);
    }

    static void order(ArrayList<setOrdered> s){
        Collections.sort(s, new Comparator(){
            public int compare(Object a, Object b){
                Integer ai = ((setOrdered)a).getNumOrdered();
                Integer bi = ((setOrdered)b).getNumOrdered();
                int comp = bi.compareTo(ai);

                if(comp != 0) {
                    return comp;
                }

                String aString = ((setOrdered)a).getName();
                String bString = ((setOrdered)b).getName();
                return aString.compareTo(bString);
            }

        });
    }
}

/*
Elvira is processing shipments for the Christmas season! There are various shipments of toys coming into her warehouse throughout the day, and her boss wants a summary report at the end. Each shipment consists of some number of a single kind of toy.

The summary report is an aggregated list of all the toys that arrived at the warehouse over the day. The boss is most interested in the biggest sellers, so toys should be sorted in decreasing order of count. If the warehouse received the same number of two kinds of toys, sort them in alphabetical order1.
Input

The first line of input contains the number of test cases, 𝑇
(1≤𝑇≤100

).

Each test case begins with a line containing an integer, 𝑁
(1≤𝑁≤100). This indicates that 𝑁 shipments are coming in for processing. Each of the next 𝑁 lines describes a single shipment. The line contains a string and an integer, the name of the toy and how many of that toy are in the given shipment. The name of a toy is a string of at most 10 lowercase letters (a–z) and between 1 and 10

toys arrive in a given shipment.
Output

For each test case, output 𝐾

, the number of unique toys that have arrived in the warehouse.

Then output 𝐾

lines, each containing the name of a toy and how many of that toy that have arrived, summed up over all the shipments. Output toys in decreasing order of count, breaking ties alphabetically.

Sample Input 1  

2
4
furby 4
elmo 5
furby 1
kirby 10
2
funfungame 1
funfun 1

Sample Output 1

3
kirby 10
elmo 5
furby 5
2
funfun 1
funfungame 1

*/