# cis165-lab7
My program will ask the user to enter a series of integers. The number -99 will be used as the sentinel to tell the program when to stop reading numbers.
I will use a while loop to read the numbers until -99 is entered. I will use variables to keep track of the largest and smallest numbers. The first actual number entered will be used to initialize both variables. For each additional number, I will compare it with the current largest and smallest values and update them when necessary.
I will also use a check to determine whether the user entered -99 first. If no numbers were entered, the program will display a message saying that no data was entered. Otherwise, it will display the smallest and largest values.
Testing and Results 
Test 1: Positive Numbers
Inputs: 8, 3, 12, -99
Expected result: smallest: 3, and largest: 12
Actual output: smallest: 3, and largest: 12
Result: Expected and Actual are the same
Test 2: Negative Numbers
Inputs: -8, -3, -12, -99
Expected result: smallest: -12, and largest: -12
Actual output: smallest: -12, and largest: -12
Result: Expected and Actual are the same
Test 3: Single number
Input: 5, -99
Expected result: smallest: 5, and largest: 5
Actual output: smallest: 5, and largest: 5
Result: Expected and Actual are the same
Test 4: Zero Value
Input: 0, 0, -99
Expected result: smallest: 0, and largest: 0
Actual output: smallest: 0, and largest: 0
Result: Expected and Actual are the same
Test 5: No Data
Input: -99
Expected result: No minimum or maximum would be displayed
Actual output: No minimum or maximum would be displayed
Result: Expected and Actual are the same
Test 6: Additional Test
Input: 7, -4, 0, 15, -99
Expected result: smallest: -4, and largest: 15
Actual output: smallest: -4, and largest: 15
Result: Expected and Actual are the same

Explanation Questions:
1. For the input 8, 3, 12, -99, the first number, 8, initializes both the smallest and largest variables. When 3 is entered, the smallest value changes to 3. When 12 is entered, the largest value changes to 12. When -99 is entered, the loop stops.
2. The while loop checks whether the number is -99 before processing it. If it is -99, the loop ends, so the sentinel is never compared with the smallest or largest values.
3. If all the numbers are positive or all are negative, zero might not be part of the data. This could cause the program to report an incorrect smallest or largest value. Initializing with the first actual number prevents this problem.
4. The program uses a Boolean variable called has_data. It starts as false and changes to true when an actual number is processed. Therefore, entering zero counts as data, but entering -99 immediately means no data was entered.
