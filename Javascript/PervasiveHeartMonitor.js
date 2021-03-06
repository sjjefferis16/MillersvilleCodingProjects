var line;
while (line = readline()) {
    var nums = line.split(' ');
    var count = 0;
    var heartbeats = 0;
    var name_string = "";
    
    for(i = 0; i < nums.length; i++){
        var pf = parseFloat(nums[i]);
        if(Number.isFinite(pf)){
            heartbeats += pf;
            count++;
        }
        else{
            name_string += " " + nums[i];
        }
    }
    heartbeats /= count;
    console.log(heartbeats + " " + name_string);
}
/*
ou have been hired by a fitness center. You are helping to develop a system to monitor customer heart rate during exercise. While the customer stays in the gym, their heart rate is recorded at 10-minute intervals. When they leave, they can get a report of their average heart rate for the entire visit. Your job is to generate this report.
Input

Input consists of a series of lines, one for each customer. Customers can scan their ID card when they enter or when they leave, so each line has a customer name either at the start or at the end. Other than the customer name, each line contains a sequence of real values in the range [0,1000]

with at most 2 digits past the decimal representing heart rate measurements throughout the workout. Customer names consists of one of more space-separated words, each consisting of letters A - Z (lower or uppercase). Each customer only appears once in the input. There are at most 25 space-separated tokens (names or numbers) per line. Each token has at most 10 characters.
Output

For each customer in the order given in the input, print a line with the average of all their heart rate readings, followed by the name. The average heart rate should be accurate within 0.01 beats per minute.
Sample Input 1 	

Lisa Marie Presley 90.2 104.3 110.1 118.7 122.3
72.2 74 79.5 82.1 88.3 87.4 87.2 88.1 83.8 Bono



Sample Output 1

109.120000 Lisa Marie Presley
82.511111 Bono


*/