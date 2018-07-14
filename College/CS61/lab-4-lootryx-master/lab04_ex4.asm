;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 4
; Lab section: 025
; TA: Dipan
; 
;=================================================
.orig x3000

;--
; Instructions
;--
LEA R0, PROMPT
PUTS

LD R0, NEWLINE
OUT

LD R1, ARRAY		; Load into Register 1, the starting location of the array 

; This loop is used to store the user's input into the block reserved by ARRAY starting at memory location x4000
INPUT_LOOP
  GETC			; Reads the character inputted into the console into the register R0
  OUT			; Outputs to console
  STR R0,R1,#0		; Store [relative] the char in R0 to memory location specified by R1 [we use STR due to using a ptr to a memory location instead of accessing the actual memory location.]
  ADD R1,R1,#1		; Incrememnt the Array Pointer by 1 to change to the next location
  ADD R0,R0,#-10	; Check the inputted char, check if char inputted is carriage return. 
  BRnp INPUT_LOOP	; If it isn't \cr, don't enter a new char

LD R1, ARRAY		; Load memory location of the starting location of the array

; This loop is used to output to the console the stored chars starting from memory location x4000
PRINT_LOOP
  LDR	R0,R1,#0	; Load the element at memory location at R1 into R0
  OUT			; Print R0 to console
  ADD	R2,R0,#0	; Shift the printed char into R2
  LD	R0,NEWLINE	; Load newline into R0
  OUT			; Print newline
  ADD	R1,R1,#1	; Increment the array pointer to access next element
  ADD	R2,R2,#-10	; Check to see if printed char is newline
  BRnp	PRINT_LOOP	; If it isn't, print next char

HALT

;---
; Local Data
;---
PROMPT	.STRINGZ	"Please enter characters as desired: "
NEWLINE	.FILL		x0A	; LC-3 equivalent of 'endl' 
ARRAY	.FILL		x4000	; The starting memory location of the array

.end