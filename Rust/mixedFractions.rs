fn main() {
    
    while 1 != 0{
        use std::io::{stdin,stdout,Write};
        let mut input=String::new();
        let _=stdout().flush();
        stdin().read_line(&mut input);
        let string_vector: Vec<&str> = input.split_whitespace().collect();
        let mut num: u64 = string_vector[0].parse::<u64>().unwrap();
        let mut denum: u64 = string_vector[1].parse::<u64>().unwrap();
        
        if num == 0 && denum == 0 {
            break;
        }
        
        let mut wholeNum: u128 = 0;
        
        while num >= denum {
            num -= denum;
            wholeNum += 1;
        }
        let stringPrint = wholeNum.to_string() + " " + &num.to_string() + " / " + &denum.to_string();
        println!("{}", stringPrint);
    
    }

}

/*

Mixed Fractions

You are part of a team developing software to help students learn basic mathematics. You are to write one part of that software, which is to display possibly improper fractions as mixed fractions. A proper fraction is one where the numerator is less than the denominator; a mixed fraction is a whole number followed by a proper fraction. For example the improper fraction 27/12 is equivalent to the mixed fraction 2 3/12. You should not reduce the fraction (i.e. don’t change 3/12 to 1/4).
Input

Input has one test case per line. Each test case contains two integers in the range [1,231−1]
. The first number is the numerator and the second is the denominator. A line containing 0 0

will follow the last test case.
27 12
2460000 98400
3 4000
0 0

Output

For each test case, display the resulting mixed fraction as a whole number followed by a proper fraction, using whitespace to separate the output tokens.

2 3 / 12
25 0 / 98400
0 3 / 4000

*/