;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 6
; Lab section: 25
; TA: Dipan
; 
;=================================================
.orig x3000

LD	R5,SUB_INPUT
JSRR 	R5
LD	R5,SUB_PRINT
JSRR	R5

halt

; Local Data
SUB_INPUT	.FILL	x3200
SUB_PRINT	.FILL	x3400


;---
; Subroutine: SUB_16BIT_BINARY_INPUT_3200
; Parameters: none
; Postcondition: This subroutine converts binary number inputed by user into a decimal number
; Return value: (R2) decimal number
;---
.orig x3200

; Subroutine Instructions
ST	R0,BACKUP_R0_3200
ST	R1,BACKUP_R1_3200
ST	R3,BACKUP_R3_3200
ST	R4,BACKUP_R4_3200
ST	R5,BACKUP_R5_3200
ST	R7,BACKUP_R7_3200

START_HERE
  LEA	R0,prompt		; Load effective address of 'prompt' to R0
  PUTS				; output to console
  LD	R1,COUNT_16		; load counter to R1
  LD	R2,TOTAL		; load total to R2
CHECK_B
  LD	R5,b
  GETC
  OUT
  NOT	R3,R0
  ADD	R3,R3,#1
  ADD	R4,R3,R5
  BRnp	INVALID_STRING
DO_WHILE
  GETC				; get user input from R0
  OUT
  LD	R5,ASCII_ONE		; load '1' to R5
  NOT	R3,R0			; 
  ADD	R3,R3,#1		; get 2's complement of user input
  ADD	R4,R3,R5		; check to see if value is that of '1'
  BRz	ADD_TOTAL		; If it is '1', send to branch ADD_TOTAL
  LD	R5,ASCII_SPACE_3200
  NOT 	R3,R0
  ADD	R3,R3,#1
  ADD	R4,R3,R5		; check to see if value inputted was space character. 
  BRz	INPUT_WAS_SPACE
  LD	R5,ASCII_ZER
  NOT	R3,R0
  ADD	R3,R3,#1
  ADD	R4,R3,R5		; check to see if value inputted was '0'
  BRnp	NOT_PROPER_INPUT
  ADD	R1,R1,#-1		; If everything went fine in this loop, decrement the counter [16] by 1
  BRp	DO_WHILE		; If the counter is not 0, then iterate through loop again
  BRnz	END_02			; Else send to branch END_01
ADD_TOTAL
  LD	R4,DEC_ONE		; Load the decimal value of one
  ADD	R5,R1,#-1		; Decrement the value of R1 into R5
  BRnz	END_01			; If negative or zero, send to branch END_02
ADD_LOOP
  ADD	R4,R4,R4		; Add the value of R4 to itself and send that value to Register 4 [Essentially 'squaring' it, I think]
  ADD	R5,R5,#-1		; Decrement the value of R5
  BRp	ADD_LOOP		; If still positive, iterate through branch again
END_ADD_LOOP
  ADD	R2,R2,R4		; If R5 is not positive, directed here. 
  ADD	R1,R1,#-1		; Decrement R1 by 1
  BRp	DO_WHILE		; If still positive, send to branch DO_WHILE to iterate again
INVALID_STRING
  LEA	R0,error_message
  PUTS
  BRnzp	CHECK_B
INPUT_WAS_SPACE
  LD	R0,ASCII_SPACE_3200
  OUT
  BRnzp	DO_WHILE
NOT_PROPER_INPUT
  LEA	R0,error_message
  PUTS
  BRnzp	DO_WHILE
  
END_01
  LEA	R0,newline
  PUTS
  ADD	R2,R2,#1
  LD	R0,BACKUP_R0_3200
  LD	R1,BACKUP_R1_3200
  LD	R3,BACKUP_R3_3200
  LD	R4,BACKUP_R4_3200
  LD	R5,BACKUP_R5_3200
  LD	R7,BACKUP_R7_3200
  RET
END_02
  LEA	R0,newline
  PUTS
  LD	R0,BACKUP_R0_3200
  LD	R1,BACKUP_R1_3200
  LD	R3,BACKUP_R3_3200
  LD	R4,BACKUP_R4_3200
  LD	R5,BACKUP_R5_3200
  LD	R7,BACKUP_R7_3200
  RET

; Subroutine Data
BACKUP_R0_3200		.BLKW #1
BACKUP_R1_3200		.BLKW #1
BACKUP_R3_3200		.BLKW #1
BACKUP_R4_3200		.BLKW #1
BACKUP_R5_3200		.BLKW #1
BACKUP_R7_3200		.BLKW #1
prompt			.STRINGZ "Please enter 'b' followed by 16-bit binary number: \n"
error_message		.STRINGZ "\nPlease enter a valid character: \n"
newline			.STRINGZ "\n"
b			.STRINGZ "b"
COUNT_16		.FILL 16
TOTAL			.FILL #0
DEC_ONE			.FILL #1
ASCII_ZER		.FILL x30
ASCII_ONE		.FILL x31
ASCII_SPACE_3200	.FILL x20
;ASCII_B			.FILL x62

;---
; Subroutine: SUB_OUTPUT_16BIT_BINARY_3400
; Parameter (R2): Converted value
; Postcondition: This subroutine outputs integer value of R2 as 2's complement
; Return value: none
;---
.orig x3400

; Subroutine Instructions
ST	R0,BACKUP_R0_3400
ST	R2,BACKUP_R2_3400
ST	R3,BACKUP_R3_3400
ST	R4,BACKUP_R4_3400
ST	R7,BACKUP_R7_3400

LEA	R0,B_CHAR			; Load effective address into R0 of the 'b' character
PUTS					; output 'b'

LD	R4,COUNT_4			; load 4 count
LD	R3,COUNT_16_3400		; load 16 count 
LD	R6,BIT_MASK			; load bit mask

WHILE_LOOP
  AND	R5,R2,R6			; extract subset value of R2 by bit mask [R6] into R5
  BRn	VALUE_IS_ONE		; If value is negative, send to branch VALUE_IS_ONE
  LD	R0,ASCII_0			; else the value is ascii '0'
  OUT					; output 
  ADD	R2,R2,R2			; add the value of R2 and R2 into R2
  ADD	R4,R4,#-1			; decrement the space count 
  ADD	R3,R3,#-1			; decrement the 16 count
  BRz	END_LOOP			; if 16 count is zero, end loop by sending to branch END_LOOP
  ADD	R4,R4,#0			; check for BR nzp condition again this time for space count
  BRp	WHILE_LOOP			; If pos, iterate through loop again
  LD	R0,ASCII_SPACE			; else load up space char ascii and output to console. 
  OUT
  LD	R4,COUNT_4			; load 4 count to R4 again 
  BRnzp	WHILE_LOOP			; if here, iterate through loop again
VALUE_IS_ONE
  LD	R0,ASCII_1			; load ascii of one
  OUT					; output
  ADD	R2,R2,R2			; increase the value of R2 by it's own value again [squaring it]
  ADD	R4,R4,#-1			; decrement R4
  ADD	R3,R3,#-1			; decrement R3
  BRnz	END_LOOP			; if <= 0, send to branch END_LOOP
  ADD	R4,R4,#0			; check for BR nzp condition
  BRp	WHILE_LOOP			; if > 0, send to branch WHILE_LOOP
  LD	R0,ASCII_SPACE			; else, print out ascii space
  OUT					;
  LD	R4,COUNT_4			; load up 4 count again
  BRnzp	WHILE_LOOP			; iterate through WHILE_LOOP again
END_LOOP
  LEA	R0,NEWLINE			; end of 16bit, output newline
  PUTS
  
  LD	R0,BACKUP_R0_3400
  LD	R2,BACKUP_R2_3400
  LD	R3,BACKUP_R3_3400
  LD	R4,BACKUP_R4_3400
  LD	R7,BACKUP_R7_3400
  RET					; end of subroutine

; Subroutine Data
BACKUP_R0_3400		.BLKW #1
BACKUP_R2_3400		.BLKW #1
BACKUP_R3_3400		.BLKW #1
BACKUP_R4_3400		.BLKW #1
BACKUP_R7_3400		.BLKW #1

COUNT_4			.FILL #4	
COUNT_16_3400		.FILL #16	
BIT_MASK		.FILL x8000	; Mask
ASCII_0			.FILL x30
ASCII_1			.FILL x31
ASCII_SPACE		.FILL x20

B_CHAR			.STRINGZ "b"	
NEWLINE			.STRINGZ "\n"

.end