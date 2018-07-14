;=================================================
; Name: Benjamin Lee
; Email: blee073@ucr.edu
; 
; Assignment name: Assignment 3
; Lab section: 25
; 
; I hereby certify that I have not received assistance on this assignment,
; or used code, from ANY outside source other than the instruction team.
;
;================================================= ; 
.ORIG x3000			; Program begins here
;-------------
;Instructions
;-------------
LD R6, Convert_addr		; R6 <-- Address pointer for Convert
LDR R1, R6, #0			; R1 <-- VARIABLE Convert 
;-------------------------------
;INSERT CODE STARTING FROM HERE
;--------------------------------
LD R2, COUNT_16
LD R3, SPACE_COUNTER

FOR_LOOP
ADD R3, R3, #0			; if(pos){print 0 or 1} else {print space to console}
BRp NOT_SPACES
LD R0, SPACE			; Directed here if we are at the else part of the former if-else statement
OUT				; Prints out space to console
LD R3, SPACE_COUNTER
ADD R2, R2, #0
BR END_OF_LOOP

NOT_SPACES
  ADD R1, R1, #0 		; Checks if negative or positive
  BRn IF_NEGATIVE		; If negative, send to IF branch
  LD R0, ASCII_ZERO		; Else print 0 for positive
  OUT
  BR END_OF_IF_STATEMENT	; All go to END_OF_IF_STATEMENT branch

IF_NEGATIVE			; For negative
  LD R0, ASCII_ONE		; Print 1 for negative
  OUT
  BR END_OF_IF_STATEMENT

END_OF_IF_STATEMENT
  ADD R1, R1, R1		; Shifts left by 1
  ADD R3, R3, #-1		; Decreases for loop count by 1
  ADD R2, R2, #-1		; Decreases space count by 1
  BR END_OF_LOOP		; Send to END_OF_LOOP branch

END_OF_LOOP			; End of loop. Start the next increment. 
 BRp FOR_LOOP


LEA R0, NEWLINE
PUTS

HALT
;---------------
;Data
;---------------
Convert_addr 	.FILL 		xD000; The address of where to find the data
COUNT_16	.FILL 		#16
SPACE_COUNTER	.FILL 		#4
ASCII_ONE	.FILL		#49
ASCII_ZERO	.FILL		#48
SPACE		.FILL	 	#32
NEWLINE		.FILL 		#10  

.ORIG xD000			; Remote data
Convert .FILL xABCD		; <----!!!NUMBER TO BE CONVERTED TO BINARY!!!
;---------------	
;END of PROGRAM
;---------------	
.END
