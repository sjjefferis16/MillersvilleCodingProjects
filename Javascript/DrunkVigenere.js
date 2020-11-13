
var encoded = readline();
var key = readline();
var output = "";
output2 = "";


for (i = 0; i < key.length; i++) {
    var e = encoded.charAt(i);
	var k = key.charAt(i);
	
	var cint = e.charCodeAt() -65;
	var kint = k.charCodeAt() -65;
	
	
	if(i % 2 === 0){
	    cint -= kint;
	    if(cint < 0){
	        output += String.fromCharCode((26 + cint) + 65);
	    }
	    else{
	        output += String.fromCharCode(cint + 65);
	    }
	} else {
	output += String.fromCharCode( 
	    ((cint + kint) % 26) + 65
	    );
	}
}
console.log(output);

/*
One of the most well-known and classic methods of encryption is the Vigenère cipher. Given a message and key of equal length, 
all you need to do to encrypt the message is shift each character forward by a certain number of characters in the alphabet.

For example, if your string is CALGARY and key is ALBERTA, the number of letters to shift the 𝑖
-th letter in the message is given by the position in the alphabet of the 𝑖-th letter in the key, using 0-based indexing. So 
the first character in our message C is shifted 0 letters forward since the first character in our key is A. Likewise, A is shifted 11 characters since L is the 11

-th letter in the alphabet. Repeating for each character, we’ll find the encrypted message ends up being CLMKRKY.

Of course since this is such a well known encryption method, it isn’t very safe so your friend Yraglac has come up with a brilliant idea: 
for each even-indexed character in your message, you do the usual encryption as described above, but for the odd-indexed characters, instead 
of shifting forwards by the key, you actually shift backwards. Thus, our example above would actually be encrypted as CPMCRYY. That’ll throw off any pesky hackers trying to read your secrets!

Of course Yraglac has left the implementation up to you. Given an encrypted message and the key, can you write a program to decrypt it? Don’t forget that everything is using 0

-based indexing.
Input

Input consists of two lines. The first contains the encrypted message 𝐶
and the second contains the key 𝐾. 𝐶 and 𝐾 are always of equal length between 1 and 200

characters long and consists only of uppercase alphabetic letters.
Output

Output the decrypted message.
Sample Input 1 	
CPMCRYY
ALBERTA

Sample Output 1
CALGARY

*/