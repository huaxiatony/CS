;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 9
; Lab section: 025
; TA: Dipan
; 
;=================================================
.orig x3000

LD	R4,BASE
LD	R5,MAX
LD	R6,TOS
LD	R1,SUB_STACK_PUSH

LEA	R0,prompt
PUTS
GETC
OUT

LD	R2,ASCII_OFFSET
ADD	R0,R0,R2
JSRR	R1
GETC
OUT
ADD	R0,R0,R2
JSRR	R1
GETC
OUT
LD	R0,NEWLINE
OUT

LD	R1,SUB_MULT
JSRR	R1

LD	R1,SUB_STACK_POP
JSRR	R1

LD	R3,MAX_DIG
ADD	R3,R3,R0
BRp	MULTIPLY

NOT	R2,R2
ADD	R2,R2,#1
ADD	R0,R0,R2
OUT

LEA	R0,mesg
PUTS

HALT

MULTIPLY
  LD	R1,SUB_DECIMAL
  JSRR	R1
  LEA	R0,mesg
  PUTS
  HALT

;---
; Local Data
;---
SUB_STACK_PUSH		.FILL x3300
SUB_STACK_POP		.FILL x3600
SUB_MULT		.FILL x3900
SUB_DECIMAL		.FILL x4500
ASCII_OFFSET		.FILL #-48
NEWLINE			.FILL x0A
MAX_DIG			.FILL #-9
BASE			.FILL xA000
MAX			.FILL xA005
TOS			.FILL xA000
INPUT			.BLKW 1

prompt			.STRINGZ "Enter 2 single digit numbers and '*' (no space): \n"
mesg			.STRINGZ " <- result.\n"
;------------------------------------------------------------------------------------------;
; Subroutine: SUB_STACK_PUSH
; Parameter (R0): The value to push onto the stack
; Parameter (R4): BASE: A pointer to the base (one less than? the lowest available
; address) of the stack
; Parameter (R5): MAX: The "highest" available address in the stack
; Parameter (R6): TOS (Top of Stack): A pointer to the current top of the stack
; Postcondition: The subroutine has pushed (R0) onto the stack (i.e to address TOS+1).
; If the stack was already full (TOS = MAX), the subroutine has printed an
; overflow error message and terminated.
; Return Value: R6 ? updated TOS
;------------------------------------------------------------------------------------------
.orig x3300
ST	R2,BACKUP_R2_3300
ST	R7,BACKUP_R7_3300

NOT	R2,R5
ADD	R2,R2,#1

ADD	R2,R6,R2
BRzp	ERROR
ADD	R6,R6,#1
STR	R0,R6,#0
LD	R2,BACKUP_R2_3300
LD	R7,BACKUP_R7_3300
RET
ERROR
  ST	R0,WRONG
  LEA	R0,OVERFLOW_ERROR_MESSAGE
  PUTS
  LD	R0,WRONG
  LD	R2,BACKUP_R2_3300
  LD	R7,BACKUP_R7_3300
  RET
;---
; Subroutine Data Block
;---
BACKUP_R2_3300		.BLKW #1
BACKUP_R7_3300		.BLKW #1
WRONG			.BLKW #1
OVERFLOW_ERROR_MESSAGE	.STRINGZ "Overflow error.\n"
;--
; End of Subroutine
;--

;------------------------------------------------------------------------------------------;
; Subroutine: SUB_STACK_POP
; Parameter (R4): BASE: A pointer to the base (one less than? the lowest available
; address) of the stack
; Parameter (R5): MAX: The "highest" available address in the stack
; Parameter (R6): TOS (Top of Stack): A pointer to the current top of the stack
; Postcondition: The subroutine has popped MEM[top] off of the stack.
; If the stack was already empty (TOS = BASE), the subroutine has printed
; an underflow error message and terminated.
; Return Value: R0 ? value popped off of the stack
; R6 ? updated TOS
;------------------------------------------------------------------------------------------
.orig x3600
;---
; Subroutine Instructions
;---

ST	R2,BACKUP_R2_3600
ST	R7,BACKUP_R7_3600

NOT	R2,R4
ADD 	R2,R2,#1
ADD 	R2,R6,R2
BRnz 	ERROR_LOOP
LDR 	R0,R6,#0
ADD 	R6,R6,#-1
LD 	R2,BACKUP_R2_3600
LD 	R7,BACKUP_R7_3600
RET
ERROR_LOOP
  LEA	R0,UNDERFLOW_MESSAGE
  PUTS
  LD	R2,BACKUP_R2_3600
  LD	R7,BACKUP_R7_3600
  RET
;---
; Subroutine Data
;---
UNDERFLOW_MESSAGE.STRINGZ "Underflow error.\n"
BACKUP_R2_3600.BLKW 1
BACKUP_R7_3600.BLKW 1
;---
; End of subroutine
;---

;------------------------------------------------------------------------------------------;
; Subroutine: SUB_RPN_MULTIPLY
; Parameter (R4): BASE: A pointer to the base (one less than? the lowest available
; address) of the stack
; Parameter (R5): MAX: The "highest" available address in the stack
; Parameter (R6): TOS (Top of Stack): A pointer to the current top of the stack
; Postcondition: The subroutine has popped off the top two values of the stack,
; multiplied them together, and pushed the resulting value back
; onto the stack.
; Return Value: R6 ? updated top value
;------------------------------------------------------------------------------------------
.orig x3900
;---
; Subroutine Instructions
;---
ST	R0,BU_R0
ST	R1,BU_R1
ST	R2,BU_R2
ST	R3,BU_R3
ST	R7,BU_R7

LD	R1,SUB_POP_2
JSRR	R1
ST	R0,ONE
JSRR	R1
ADD	R3,R0,#0
LD	R2,ONE
LD	R1,SB_MULT
JSRR	R1
LD	R1,SB_PUSH_2
JSRR	R1

LD	R0,BU_R0
LD	R1,BU_R1
LD	R2,BU_R2
LD	R3,BU_R3
LD	R7,BU_R7
RET
;---
; Subroutine Data
;---
SUB_POP_2		.FILL x3600
SB_MULT			.FILL x4200
SB_PUSH_2		.FILL x3300
ONE			.BLKW 1
BU_R0			.BLKW 1
BU_R1			.BLKW 1
BU_R2			.BLKW 1
BU_R3			.BLKW 1
BU_R7			.BLKW 1

;---
; Subroutine: SB_MULT
; R2 - Designated 1st num to be multiplied
; R3 - Designated 2nd
; Postcondition: Subroutine multiplies 2 numbers (R2 and R3 respectively) and returns result 
; R0 - Designated result value
;---
.orig x4200
;---
; Subroutine Instructions
;---
ST	R7,BU_R7_4200

AND	R0,R0,#0

MULT_LOOP
  ADD	R0,R0,R2
  ADD	R3,R3,#-1
  BRp	MULT_LOOP
  LD	R7,BU_R7_4200
  RET
;--
; Subroutine Data
;--
BU_R7_4200		.BLKW 1

;------------------------------------------------------------------------------------------
;Subroutine: SUB_PRINT_DECIMAL
; Parameter (R0): The number to be printed
; Postcondition: The subroutine outputs a multi digit number stored in R0
; Return Value: None
;------------------------------------------------------------------------------------------
.orig x4500
;---
; Subroutine Instructions
;---
ST	R1,BU_R1_45
ST	R2,BU_R2_45
ST	R3,BU_R3_45
ST	R7,BU_R7_45

LD	R3,OFFSET_45
AND	R1,R1,#0

LOOPING_TENS
  ADD	R0,R0,#-10
  BRn	OUTPUT_NUMBER
  ADD	R1,R1,#1
  BR	LOOPING_TENS
OUTPUT_NUMBER
  ADD	R2,R0,#0
  ADD	R0,R1,#0
  ADD	R0,R0,R3
  OUT
  ADD	R0,R2,#10
  ADD	R0,R0,R3
  OUT
  LD	R1,BU_R1_45
  LD	R2,BU_R2_45
  LD	R3,BU_R3_45
  LD	R7,BU_R7_45
  RET
END_OUTPUT_NUMBER

;---
; Subroutine data
;---
OFFSET_45		.FILL #48
BU_R1_45		.BLKW 1
BU_R2_45		.BLKW 1
BU_R3_45		.BLKW 1
BU_R7_45		.BLKW 1

.end