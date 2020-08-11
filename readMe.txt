This program works by making use of a method that takes in a static 2D char array
which is basically an array of strings. The main method first prompts the user to 
enter the name of the file where the dictionary.txt file is located. Once the user 
enters the right dictionary file name, the user will be asked to enter a word in 
order to check its spelling. Then all the words in the dictionary.txt file will be 
stored into a 2D static char array. The function defined as spellCheck will then 
take in 3 parameters in order to determine whether the word the keyword entered by 
the user matches any of the words in the 2D dictionary Array. If so then this 
indicates the existance and correct spelling of the keyword entered and the user 
is notified that they spelled the word correctly. At any time, the user can also 
enter 'exit' in order to exit the program.

[spellCheck] method returns an int value of [-1] if the keyword 
had no matches when compared to the words in the dictionary Array.
If the method returns any int other than [-1], then this indicates 
a match and thus a correct spelling of the word.