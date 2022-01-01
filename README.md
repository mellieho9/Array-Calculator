# Array-Calculator
A simple array calculator that takes in an array of integers and computes its sum, average, minimum, and maximum value

## Background
This is my response to an assignment from my 1600 CS I class: Write a program that:
1. Declares an array of integers of some maximum size 50.
2. Implements the following functions:
  - A function that prompts the user to initialize the array with up to 50 non-negative whole numbers and mark the end of the input with a negative number. 
  - A function that displays the contents of the partially filled array.
  - Separate functions that calculate: 
    - minimum.
    - maximum, 
    - sum and 
    - average of all the elements currently contained in the partially filled array. 
  - A function that accepts a number and determines whether that number occurs in the partially filled array.
  - A function that accepts a number and determines how many times (if any) that number appears as an element in the partially filled array.

## My Approach
1. After declaring <code>using namespace std </code>, I declared and initialized a counter variable to 0; this variable stores the number of values the array is being filled with. 
2. I created the function <code>fillArray(int  myArray[], int myArraySize)</code>, which prompts the user to initialize the array with up to 50 non-negative whole numbers and mark the end of the input with a negative number. I used a for loop to check if the function has filled in all 50 spaces in the array. If not, the function will take in the user's keyboard input and evaluate whether the input is greater than 0 through an if-else statement. If this input is greater than 0, it will be initialized into the array, and the counter is incremented. Otherwise, the loop ends.
3. I created the function <code>printArray(int myArray[])</code>, which displays the contents of the partially filled array. I used a for loop to check if the fucntion has completed going through all the partially filled array, as represented through the condition <code>i < counter</code>. If not, the function will print value stored in the corresponding index.
4. I created the two functions <code>calcMin(int myArray[])</code> and <code>calcMax(int myArray[])</code>. I declared and initialized the placeholder variable <code>smallestFoundSoFar</code> and <code>largestFoundSoFar</code> with the first value in the parameter array. I used a for loop to check if the function has gone through all of the values in the array. I also used an if-else statement to evalaute whether the value stored in the incrementing index is greater/smaller than that in the placeholder variable. If it is, then it will replace the value in the placeholder variable. After the function escapes the loop, it returns the index with the greatest/smallest value.
5. I created the function <code>calcSum(int myArray[])</code>. I declared and initialized the placeholder variable <code>totalSoFar</code> to store the sum of values the function has parsed through in the array. I used a for-loop to evaluate whether the function has done so. If not, the function will add the value at the incrementing index to the variable <code>totalSoFar</code>. At the end, the function returns <code>totalSoFar</code> as the sum of all values filled in the array.
6. Using the previously created <code>calcSum</code> function, I created the function <code>calcAvg(int myArray[])</code> to return the quotient of sum of all values in an array divided by the number of values in the array. 
7. I created the <code>findArray(int myArray[])</code> function, which takes in the value the user wants to find in an array and prints a message on whether that value can be found. Since the function's purpose was to find whether there is one instance of the said value in an array, I assumed that the program initially could not find this value through the code <code>bool canFind = false</code>. This boolean variable changed to true if when the condition for the for-loop is true, the value at the current index of the array is equivalent to the value the user wants to find. Along with the change in the boolean value, the for loop would also end if the said condition is true. The function would use the value in the <code>canFind</code> variable to print the appropriate message.
8. I created the <code>findFrequency(int myArray[])</code>, which takes in the value the user wants to know the frequency of to compute its frequency. It has a similar structure to the <code>findArray</code> function, but the boolean variable was replaced with a counter variable to store the number of times the function can find the value in the array. If the if-else statement is true, the frequency counter is incremented until the function parses through the entire array. 
9. I moved on to the main program, setting the precision to two-decimal places, declaring an array variable, and called all the functions I created earlier.


