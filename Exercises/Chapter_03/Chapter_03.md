# Exercise Solutions Chapter 3 #
## 1. ##
Test run of the five programs presented in this chapter:  
 - [Program 3.1](Exercise_01/Program_03_01/program_03_01.c)  
 - [Program 3.2](Exercise_01/Program_03_02/program_03_02.c)  
 - [Program 3.3](Exercise_01/Program_03_03/program_03_03.c)  
 - [Program 3.4](Exercise_01/Program_03_04/program_03_04.c)  
 - [Program 3.5](Exercise_01/Program_03_05/program_03_05.c)

## 2. ##
The following are valid variable names:  
```  
Int  
Calloc  
floating  
ReInitialize  
Xx  
_1312  
_  
alpha_beta_routine  
z  
```  
The following are not valid variable names:  
```  
char	// a keyword describing a type in C
6_05	// variablnames are not allowed to start with a digit
A$		// character used in variable names can only be a-z, A-Z, 0-9 or _ 
```  
The last variable is not a valid name because of the dollar sign. It should however be noted that this variable name can often be used anyway. This is because of compiler extensions that extends the original C standard.  

## 3. ##
The following are invalid constants:  
```  
0996	invalid digit "9" in octal constant  
0x10.5	hexadecimal floating constants require an exponent  
98.7U	invalid suffix "U" on floating constant  
1.2Fe-7	invalid suffix "Fe-7" on floating constant  
0X0G1	invalid suffix "G1" on integer constant  
1777s	invalid suffix "s" on integer constant  
```  

## 4. ##
Program that converts 27 degrees Fahrenheit to Celsius:    
- [Exercise 3.4](Exercise_04/exercise_03_04.c)  

## 5. ##
The expected output from the [program](Exercise_05/exercise_03_05.c) in this exercise is:  
```  
d = d  
```  

## 6. ##
Program for that evaluates a polynomial:    
- [Exercise 3.6](Exercise_06/exercise_03_06.c)  

## 7. ##
Program that evaluates an expression with exponential numbers:    
- [Exercise 3.7](Exercise_07/exercise_03_07.c)  

## 8. ##
Nothing to do in this exercise. But contains instructions on how to calculate the next largest even multiple of another integer. This is useful to know when solving the next exercise.  

## 9. ##
Program that finds the next largest even multiple for some pairs of sample data:  
- [Exercise 3.9](Exercise_09/exercise_03_09.c)  
