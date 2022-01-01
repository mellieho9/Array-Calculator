#include <iostream>

using namespace std;

/*
	Declared and initialized counter variable, which stores the 
	number of values the array is being filled with.
*/
int counter=0;

void fillArray(int  myArray[], int myArraySize) 
{	
	/*
		Prompts the user to initialize the array with up to 50 
		non-negative whole numbers and mark the end of the input 
		with a negative number.
	*/
	int input;
	cout << "Please enter up to 50 non-negative whole numbers separated by space." << endl << " Mark the end of the input list with a negative number:" << endl;
	for (int i=0;i < myArraySize; i++) 
	{
		/*
			If the function hasn't gone through all 50 positions in the array,
			the function will take in the user's keyboard input.
		*/
		cin >> input;
		if (input >=0)
			/*
				If the input value is greater than 0, the input is stored into
				the array at the current index. Otherwise, the function escapes
				the loop.
			*/
			myArray[i]=input;
		else
			break;
		counter++;
	}
}
void printArray(int myArray[])
{
	/*
		Displays the contents of the partially filled array.
	*/
	for (int i=0; i < counter; i++)
	{
		/*
			If the function hasn't gone through all the entered values in the arrays,
			the function continues to print out the value of the array at the current
			index.
		*/
		cout << myArray[i] << " ";
	}
	cout << endl;
}
int calcMin(int myArray[])
{
	/*
		Calculates the minimum of all the elements currently 
		contained in the partially filled array.
	*/
	int smallestFoundSoFar = myArray[0];
	for (int i=1; i < counter; i++)
	{
		/*
			If the function hasn't gone through all the entered values in the arrays,
			the function continues to evaluate the value of the array at the current
			index.
		*/
		if (myArray[i]<smallestFoundSoFar)
			/*
				If the value in the array at the current index is smaller than the
				smallest value found so far, then the latter value is replaced with
				the form in its namesake variable.
			*/
			smallestFoundSoFar = myArray[i];
	}
	return smallestFoundSoFar;
}
int calcMax(int myArray[])
{
	/*
		Calculates the maximum of all the elements currently 
		contained in the partially filled array.
	*/
	int largestFoundSoFar = myArray[0];
	for (int i=1; i < counter; i++)
	{
		/*
			If the function hasn't gone through all the entered values in the arrays,
			the function continues to evaluate the value of the array at the current
			index.
		*/
		if (myArray[i]>largestFoundSoFar)
			/*
				If the value in the array at the current index is larger than the
				largest value found so far, then the latter value is replaced with
				the form in its namesake variable.
			*/
			largestFoundSoFar = myArray[i];
	}
	return largestFoundSoFar;
}

int calcSum(int myArray[])
{
	/*
		Calculates the sum of all the elements currently 
		contained in the partially filled array.
	*/
	int totalSoFar = 0;
	for (int i=0; i < counter; i++)
	{
		/*
			If the function hasn't gone through all the entered values in the arrays,
			the function continues to add the value of the array at the current
			index into the total so far.
		*/
		totalSoFar += myArray[i];
	}
	return totalSoFar;
}
double calcAvg(int myArray[])
{
	/*
		Calculates the average of all the elements currently 
		contained in the partially filled array.
	*/
	return (calcSum(myArray)/(1.00*counter));
}
void findArray(int myArray[])
{
	/*
		Accepts a number and determines whether that number occurs 
		in the partially filled array.
	*/
	bool canFind = false;
	int target;
	cout << "Please enter the value you want to search in the array: ";
	cin >> target;
	for (int i=0; i<counter;i++)
	{
		/*
			If the function hasn't gone through all the entered values in the arrays,
			the function continues to evaluate the value of the array at the current
			index.
		*/
		if (myArray[i]==target)
			{
				/*
					If the value in the array at the current index is equivalent to
					the value the user wants to search, the boolean variable
					indicating the value can be found changes to true and the function
					escapes the loop.
				*/
				canFind = true;
				break;
			}
	}
	if (canFind)
		/*
			Confirms appropriate message based on the value in the boolean variable.
		*/
		cout << "Find your target "<< target << endl;
	else
		cout <<"Could not find "<< target << endl; 
}
void findFrequency(int myArray[])
{
	/*
		Accepts a number and determines how many times (if any) that number 
		appears as an element in the partially filled array.	
	*/
	int frequencyCounter = 0;
	int target;
	cout << "Please enter the value you want to know the frequency of: ";
	cin >> target;
	for (int i=0; i<counter;i++)
	{
		/*
			If the function hasn't gone through all the entered values in the arrays,
			the function continues to evaluate the value of the array at the current
			index.
		*/
		if (myArray[i]==target)
			/*
				If the value in the array at the current index is equivalent to
				the value the user wants to search, the counter variable is incremented.
			*/
			frequencyCounter++;
	}
		cout << "The number " << target << " has occurred " << frequencyCounter <<" time(s) in the array" << endl;
	
}
int main()
{
	//Sets output precision to 2 decimal points.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint); 
	cout.precision(2);

	//Declares and initializes random variable with up to 50 values.
	int randArray[50];

	//Implements previously created functions.
	fillArray(randArray, 50);
	printArray(randArray);
	cout << "The minimum value in the array is " << calcMin(randArray) << endl;
	cout << "The maximum value in the array is " << calcMax(randArray) << endl;
	cout << "The sum of all the elements in the array is " << calcSum(randArray) << endl;
	cout << "The average of all the elements in the array is " << calcAvg(randArray) << endl;
	findArray(randArray);
	findFrequency(randArray);
	return 0; 
}