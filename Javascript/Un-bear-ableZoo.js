var num;
var lists = 0;

while (num = readline()) {
    if(num == "0"){
        break;
    }
    lists++;
    var count = parseInt(num);

    var animalArray = []

    for (var i = 0; i < count; i++) {
        var tokens = readline().split(' ');
        var nameRef = tokens[(tokens.length - 1)];
        increVal(nameRef.toLowerCase());
    }

    animalArray.sort(compare);
    
    console.log("List " + lists +":")
    for(var i = 0; i < animalArray.length; i++){
        console.log(animalArray[i].name + " | " + animalArray[i].number);
    }
}

function increVal(nameRef){
    let anObject = animalArray.find(anObject => anObject.name == nameRef);
        if(anObject === undefined){
            let newLog ={
                "name" : nameRef,
                "number" : 1
            }
            animalArray.push(newLog);
        } else {
            anObject.number++;
        }
}

function compare(a,b){
    if(a.name < b.name){
        return -1;
    }
    if(a.name > b.name){
        return 1;
    }
    return 0;
}
/*
In his free time, when he’s not busy hacking computers, Dr. Back runs a zoo. 
Every morning he gets up and makes sure that none of the animals have escaped. He has a 
huge list of all the animals and checks each animal off as he sees it, but thinks this is 
really inefficient. He only cares about what animal they are, since all similar animals share a cage. So, if he has a white tiger and a siberian tiger, Dr. Back only wants to know that he has 2 tigers.

Given an integer 𝑛
, and 𝑛

lines describing animals, output in alphabetical order the animals Dr. Back has in his zoo, 
followed by their count.
Input

The input will contain multiple test cases, up to 5
. Each test case contains a line containing a single integer 𝑛 (0≤𝑛≤103), followed by 𝑛 
lines of animals with at least one word on every line. An animal name may consist of multiple 
lowercase or uppercase words, with the last one describing the kind of animal. Animal names may 
contain apostrophes, hyphens, and periods; e.g., St. Vincent’s Agouti would be a valid animal name. 
The input is terminated when 𝑛 is 0

.
Output

For each test case, output the list number, followed by the animals Dr. Back has in his zoo in 
lowercase and alphabetical order, with each animal followed by one space and the delimiter | 
and then another space and their count.

Sample Input 1  
6
African elephant
White tiger
Indian elephant
Siberian tiger
Tiger
Panda bear
1
Blue Russian Penguin
0

Sample Output 1
List 1:
bear | 1
elephant | 2
tiger | 3
List 2:
penguin | 1

*/