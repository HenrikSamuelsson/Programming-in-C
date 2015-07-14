# Exercise Solutions Chapter 3 #
## 1. ##
Test run of the 5 programs presented in this chapter.  
 - [program_03_01.c](Exercise_01/Program_03_01/program_03_01.c)  
 - [program_03_02.c](Exercise_01/Program_03_02/program_03_02.c)  
 - [program_03_03.c](Exercise_01/Program_03_03/program_03_03.c)  
 - [program_03_04.c](Exercise_01/Program_03_04/program_03_04.c)  
 - [program_03_05.c](Exercise_01/Program_03_05/program_03_05.c)

## 2. ##
The following are valid variable names.
```  
Int  
Calloc  
floaitng  
ReInitialize  
Xx  
_1312  
_  
alpha_beta_routine  
z  
```  
Examples of invalid variable names are the following.
```  
char	// a keyword describing a type in C
6_05	// variablnames are not allowed to start with a digit
A$		// character used in variable names can only be a-z, A-Z, 0-9 or _ 
```  
The last variable is not a valid name because of the dollar sign. It should however be noted that this variable name can often be used anyway. This is because of compiler extensions that extends the original C standard.  

## 3. ##
The following are invalid constants.
```  
0996	invalid digit "9" in octal constant  
0x10.5	hexadecimal floating constants require an exponent  
98.7U	invalid suffix "U" on floating constant  
1.2Fe-7	invalid suffix "Fe-7" on floating constant  
0X0G1	invalid suffix "G1" on integer constant  
1777s	invalid suffix "s" on integer constant  
```  

## 4. ##
Program that converts 27 degrees Fahrenheit to Celsius.  
- [exercise_03_04.c](Exercise_04/exercise_03_04.c)  

## 5. ##
The expected output from the [program](Exercis_05/exercise_03_04.c) in this exercise is  
```  
d = d  
```  
