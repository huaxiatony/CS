;=================================================;
; Name: Benjamin Lee
; Email: blee073@ucr.edu
; Assignment name: Assignment 4
; Lab section: 25
; 
; I hereby certify that I have not received assistance on this assignment,
; or used code, from ANY outside source other than the instruction team.
;
;=================================================
.ORIG x3000
;-------------
;Instructions
;-------------
;-------------------------------
;INSERT CODE STARTING FROM HERE 
;--------------------------------
;Example of how to Output Intro Message
;LD R0, introMessage  ;Output Intro Message
;PUTS
;Example of how to Output Error Message
;LD R0, errorMessage  ;Output Error Message
;PUTS
START_HERE
LD	R0,introMessage
PUTS
LD	R6,input_count	; 6 input max
AND	R5,R5,#0	; ROLLING SUM
AND	R4,R4,#0	; SIGN BIT [pos = 0, neg = 1]
AND	R3,R3,#0	; SYMBOL BIT [n/y = 0/1]
MAIN_LOOP			;Main loop
GETC			;input a char to R0 and echo it	
ADD	R1,R0,#0
LD	R7,newline
ADD	R1,R1,R7
BRnp	PRINT_CHAR
AFTER_PRINTING
; check if input < 48 [0]
ADD	R1,R0,#0
LD	R7,minus_48
ADD	R1,R1,R7
BRn	LESS_THAN_0	;if inputted char < 0 , thenis less than 48 (0)
; check if input > 57 [9]
ADD	R1,R0,#0
LD	R7,minus_57
ADD	R1,R1,R7
BRp	GREATER_57	;if inputted char >= 0, then it is > than 57 (9)
; if at this point, input is concluded to be 48 <= x <= 57
ADD R1,R6,#0		; check if first char input, reacts differently if it is
ADD	R1,R1,#-6
BRz	FIRST_INPUT	; If reached past here, program runs like normal
ADD	R5,R5,R5	; x + x = 2x
ADD	R7,R5,R5	; 2x + 2x = 4x <- Moved to different register due to not being able to reach 10 by simply adding itself. 
ADD	R7,R7,R7	; 4x + 4x = 8x
ADD 	R5,R5,R7	; 2x + 8x = 10x
; input -> R5
LD	R7,minus_48	; load conv to dec from ASCII for digits
ADD	R0,R0,R7	; convert to decimal for inputted char
ADD	R5,R5,R0	; finally, add decimal inputted char to 10*previous sum.
;decrement counter and branch accordingly
ADD	R6,R6,#-1	; decrement counter
BRp	MAIN_LOOP	; if we can input more, go back to beginning of loop
BRz	CONCLUDE	; if no more input chars, go to end. if this counter is less
PRINT_CHAR
OUT
BRnzp	AFTER_PRINTING
OUTPUT_ERROR_newline
LD	R0,newline_char
OUT
BRnzp	GREATER
TWOS_COMPLEMENT
NOT	R5,R5		; flip bits of R5
ADD	R5,R5,#1	; increment R5 to get the negative value
BRnzp	END_OF_PROGRAM
FIRST_INPUT		; if reached here, then no errors as of yet, R5 = 0 atm. Decrement counter by 2 if input is not a sign but a number.
LD	R7,minus_48	; load conv from ASCII to DEC
ADD	R0,R0,R7	; convert inputted char to decimal from ascii
ADD	R5,R0,R5
ADD	R6,R6,#-2	; decrease counter by 2 since no sign bit. 
BRnzp	MAIN_LOOP
IS_newline		; if newline, check if first char
ADD	R1,R6,#0
ADD	R1,R1,#-6
BRz	GREATER_57	; if 0, char is newline
; if newline check if second char
ADD	R1,R6,#0	;copy current counter to R1
ADD	R1,R1,#-5	;subtract 5 from counter
BRnp	CONCLUDE	;if the result is nonzero, is not 2nd char. Break out of loop. 
; if here, second char = newline, check if flag is 1
ADD	R1,R3,#0	;copy flag to R1
ADD	R1,R1,#-1	;subtract 1
BRz	OUTPUT_ERROR_newline ;if the result is 0, then flag = 1. This means that 1st char is sign, 2nd char is newline
BRnp	CONCLUDE	; if here, then newline was 2nd char and the first char != sign symbol. then go to end. R5 should be 1-digit decimal number.
IF_POSITIVE		; if positive sign, check if first char
ADD	R1,R6,#0	;copy current counter to R1
ADD	R1,R1,#-6	;subtract 6 from current counter
BRnp	GREATER_57	;if result!=0, then isnt first char. error. 
; if we are here, then symbol is a '+' AND it IS the first char.
ADD	R4,R4,#0	;we are supposed to set R4 to 0 [should already be 0]
ADD	R3,R3,#1	;set flag for sign symbol use = 1. 
ADD	R6,R6,#-1	;decrease counter by 1
BRnzp	MAIN_LOOP	;go to next iteration
IF_NEG			; if this is a minus, check if first char
ADD	R1,R6,#0
ADD	R1,R1,#-6
BRnp	GREATER_57	; if result !=0, then isnt first char
; if here, then the symbol is a '-' and is first char.
ADD	R4,R4,#1	; set R4 to 1 [value entered is negative]
ADD	R3,R3,#1	; set R3 to 1 [sign symbol is used]
ADD	R6,R6,#-1	; decrement counter by 1
BRnzp	MAIN_LOOP	; iterate
LESS_THAN_0		; check if positive sign.
LD	R7,PLUS
ADD	R1,R0,#0
ADD	R1,R1,R7
BRz	IF_POSITIVE	;check if minus symbol next
LD	R7,MINUS
ADD	R1,R0,#0
ADD	R1,R1,R7
BRz	IF_NEG		; check if negative sign
LD	R7,newline	; check if this a newline symbol next
ADD	R1,R0,#0
ADD	R1,R1,R7
BRz	IS_newline	;if char is < 48, is not '+' AND is not - AND is not \n, then error. 
GREATER_57		;if inputted char > 57, error
ADD	R1,R0,#0
ADD	R1,R1,#-10
BRnp	OUTPUT_ERROR_newline
GREATER	
LD	R0,errorMessage
PUTS
BRnzp	START_HERE	;start over
CONCLUDE
ADD	R1,R4,#0	; sign bit to R1
ADD	R1,R1,#-1	; decrement
BRz	TWOS_COMPLEMENT	; is negative if sign bit = 1 [new value = 0]
END_OF_PROGRAM
LD	R0,newline_char
OUT
HALT
;---------------	
;Data
;---------------
minus_48	.FILL	#-48
minus_57	.FILL	#-57
newline		.FILL	#-10
MINUS		.FILL	#-45
PLUS		.FILL	#-43
newline_char	.FILL	#10
input_count	.FILL	#6
introMessage 	.FILL 	x6000
errorMessage 	.FILL 	x6100
;------------
;Remote data
;------------
.ORIG x6000
;---------------
;messages
;---------------
intro .STRINGZ	"Input a positive or negative decimal number (max 5 digits), followed by ENTER\n"
;---------------
;error_messages
;---------------
.ORIG x6100	
error_mes .STRINGZ	"ERROR INVALID INPUT\n"
;---------------
;END of PROGRAM
;---------------
.END
;-------------------
;PURPOSE of PROGRAM
;-------------------