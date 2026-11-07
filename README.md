# cis165-lab7
My program will ask the user to enter a series of integers. The number -99 will be used as the sentinel to tell the program when to stop reading numbers.
I will use a while loop to read the numbers until -99 is entered. I will use variables to keep track of the largest and smallest numbers. The first actual number entered will be used to initialize both variables. For each additional number, I will compare it with the current largest and smallest values and update them when necessary.
I will also use a check to determine whether the user entered -99 first. If no numbers were entered, the program will display a message saying that no data was entered. Otherwise, it will display the smallest and largest values.
Testing and Results 
Test 1: Positive Numbers
Inputs: 8, 3, 12, -99
Expected result: smallest: 3, and largest: 12
Actual output:
Result:
Test 2: Negative Numbers
Inputs: -8, -3, -12, -99
Expected result: smallest: -12, and largest: -12
Actual output:
Result:
Test 3: Single number
Input: 5, -99
Expected result: smallest: 5, and largest: 5
Actual output:
Result:
Test 4: Zero Value
Input: 0, 0, -99
Expected result: smallest: 0, and largest: 0
Actual output:
Result:
Test 5: No Data
Input: -99
Expected result: No minimum or maximum would be displayed
Test 6: Additional Test
Input: 7, -4, 0, 15, -99
Expected result: smallest: -4, and largest: 15
Actual output:
Result:

Explanation Questions:
1.
