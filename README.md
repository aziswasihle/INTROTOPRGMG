# INTROTOPRGMG
A C++ console program that calculates employee pay and a bonus based on department and leave days.
# Payroll Bonus Calculator (C++)

A simple console program that calculates an employee's pay and bonus.
Made for Introduction to Programming, Assignment 1, at Gauteng City College.

## What the program does
- Asks for the employee's ID, name, department and number of leave days
- Works out the bonus from the department and the leave days
- Shows a pay slip with the basic salary, the bonus and the total pay

## Departments and basic salaries
| Department | Basic salary |
|---|---|
| IT | R35 000 |
| Finance | R30 000 |
| Teaching | R30 000 |

## Bonus rules
- **20 leave days or fewer:** the employee gets a 15% bonus ("basic bonus")
- **More than 20 leave days:** the employee gets a 10% bonus ("minimum bonus")

The bonus is calculated from the basic salary of the employee's department.
Total pay = basic salary + bonus.

## How the code works
- `if / else` decides which bonus the employee qualifies for
- A `switch` shows the correct pay slip for the department and bonus
- A `for` loop keeps asking for the leave days until a valid number (0 or more) is entered
- If the department is not 1, 2 or 3, the program shows an error message and stops

## How to run it
1. Download or copy `main.cpp`
2. Open it in Code::Blocks (or any C++ compiler)
3. Build and run the program
4. Enter the details when asked: ID, name, department (1, 2 or 3) and leave days

## Example run
Input: Employee ID 101, department 1 (IT), 12 leave days

    Basic bonus
    =========== PAY SLIP ===========
    Employee ID: 101
    Department: IT
    Leave days: 12

    Basic salary:  R35000
    Bonus (15%):   R5250
    Total pay:     R40250
    Thank you

## Author
Aziswa Sihle Sonyoni Introduction to Programming, Gauteng City College

## Acknowledgements
I used Claude (an AI assistant) to help me understand loops.
