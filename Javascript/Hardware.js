var n = parseInt(readline());

for (var i = 0; i < n; i++) 
{
	var numbersToPrint = [];
	var digitsOverall = 0;

	while (numbersToPrint.length < 10){
		numbersToPrint.push(0);
	}
	
	var streetName = readline();
	var address = readline();
	console.log(streetName);
	console.log(address);
    var nums = address.split(' ');
    let numberOfAddress = parseInt(nums[0]);

    readList(numberOfAddress);
    printList()

}

function readList(numberOfAddress){
    while(numberOfAddress !== 0){
    	var lineread = readline()
    	var line = lineread.split(' ');
    	if(line[0] === "+"){
    		for (var i = parseInt(line[1]); i < parseInt(line[2]) + parseInt(line[3]); i += parseInt(line[3])) {
    			readNumber(i.toString());
    			numberOfAddress--;
    		}

    	}
    	else{
    		readNumber(line[0]);
    		numberOfAddress--;
    	}
	    
	}
}

function readNumber (number)
{
	for(var i = 0; i < number.length; i++){
		incrDigits(number.charAt(i));
		digitsOverall++;
	}
}

function incrDigits (digit)
{
	switch(digit)
	{
		case '0':
			numbersToPrint[0] += 1;
			break;
		case '1':
			numbersToPrint[1] += 1;
			break;
		case '2':
			numbersToPrint[2] += 1;
			break;
		case '3':
			numbersToPrint[3] += 1;
			break;
		case '4':
			numbersToPrint[4] += 1;
			break;
		case '5':
			numbersToPrint[5] += 1;
			break;
		case '6':
			numbersToPrint[6] += 1;
			break;
		case '7':
			numbersToPrint[7] += 1;
			break;
		case '8':
			numbersToPrint[8] += 1;
			break;
		case '9':
			numbersToPrint[9] += 1;
			break;
	}
}

function printList(){
    for(var i = 0; i < 10; i++){
        console.log("Make " + numbersToPrint[i] + " digit " + i);
    }
    if(digitsOverall !== 1){
    console.log("In total " + digitsOverall + " digits");
    } else {
        console.log("In total " + digitsOverall + " digit");
    }
}

/*
Ola Clason’s Hardware store is an old company where most work is done “the old way”. Among other things, the company is the one and only provider of marble house numbers. These house numbers have become extremely popular among construction companies, especially the ones building luxury estates. This is of course great for Ola Clason, but also a small problem. Nisse, who has been managing the incoming orders has turned out to be a bottleneck in Ola’s business. Most orders are on the form “Coconut Drive 200, 202, 204, ..., 220”. This means every even number between 200 and 220

. Nisse’s work is to transfer an order to a list of necessary digits and other symbols.

Your assignment is to write a program that automates Nisse’s work with orders containing only positive integer house numbers. Nisse will still in the future process all special orders (those including non digit symbols) by hand.
Input

On the first line of input is a single positive integer 𝑛≤10
, specifying the number of orders that follow. The first line of each order contains the road name for that order. No road name is longer than 50 characters. The second line states the total number of buildings needing new marble numbers on that order, at most 1000

.

Then follows the different house number specifications on several lines. These lines are of two kinds: single number lines and multiple number lines. A single number line simply consists of the house number by itself, while a multiple number line starts with a ‘+’-sign, followed by three positive integer numbers: first number, last number and the interval between the house numbers. The last number will always be at least the first number, and the difference between the first and last house number will always be a multiple of the house number interval. House numbers are always positive and never have more than five digits. A house number may appear more than once in an order, in this case that house will get multiple signs.

After the last house number specification line, the next order follows, if there is any.
Output

For each order, the output consists of 13
lines. The first and second lines should be identical with the first two input lines. Then, there follows 10 lines with information on how many marble digits of each kind the order consists of. These rows are on the format “Make 𝑋 digit 𝑌” where 𝑋 is how many copies of digit 𝑌 they need to make. The last row states the total number 𝑍 of digits needed, on the format “In total 𝑍 digits”. If there is only one digit to produce, it should say “In total 1

digit”, in order to be grammatically correct.
Sample Input 1 	
3
Short Street
23 addresses
+ 101 125 2
275
+ 100 900 100
Single Street
1 address
5
Many signs
3 addresses
5
5
5

Sample Output 1
Short Street
23 addresses
Make 23 digit 0
Make 22 digit 1
Make 5 digit 2
Make 4 digit 3
Make 1 digit 4
Make 5 digit 5
Make 1 digit 6
Make 4 digit 7
Make 1 digit 8
Make 3 digit 9
In total 69 digits
Single Street
1 address
Make 0 digit 0
Make 0 digit 1
Make 0 digit 2
Make 0 digit 3
Make 0 digit 4
Make 1 digit 5
Make 0 digit 6
Make 0 digit 7
Make 0 digit 8
Make 0 digit 9
In total 1 digit
Many signs
3 addresses
Make 0 digit 0
Make 0 digit 1
Make 0 digit 2
Make 0 digit 3
Make 0 digit 4
Make 3 digit 5
Make 0 digit 6
Make 0 digit 7
Make 0 digit 8
Make 0 digit 9
In total 3 digits

*/