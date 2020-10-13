var line;
var entrees = readline();
days = []
for (i = 0; i < entrees; i++) {
    line = readline();
    var nums = line.split(' ');
    var lo = parseInt(nums[0]);
    var hi = parseInt(nums[1]);
    for(j = lo; j != hi+1; j++){
        if(!days.includes(j)){
            days.push(j);
        }
    }
}
console.log(days.length);
/*
Do you know what attracts almost any college student to participate in an event? Yes, free food. It doesn’t matter whether the event involves a long (sometimes boring) seminar. As long as free food is served for the event, then students will surely come.

Suppose there are 𝑁
events to be held this year. The 𝑖th event is scheduled from day 𝑠𝑖 to day 𝑡𝑖, and free food is served for that event every day from day 𝑠𝑖 to day 𝑡𝑖

(inclusive). Your task in this problem is to find out how many days there are in which free food is served by at least one event.

For example, let there be 𝑁=3
events. The first event is held from day 10 to 14, the second event is held from day 13 to 17, and the third event is held from day 25 to 26. The days in which free food is served by at least one event are 10,11,12,13,14,15,16,17,25,26, for a total of 10 days. Note that both events serve free food on days 13 and 14

.
Input

The first line contains an integer 𝑁
(1≤𝑁≤100) denoting the number of events. Each of the next 𝑁 lines contains two integers 𝑠𝑖 and 𝑡𝑖 (1≤𝑠𝑖≤𝑡𝑖≤365) denoting that the 𝑖th event will be held from 𝑠𝑖 to 𝑡𝑖

(inclusive), and free food is served for all of those days.

3
10 14
13 17
25 26

Output

The output contains an integer denoting the number of days in which free food is served by at least one event.

10

*/