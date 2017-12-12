;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 9
; Lab section: 025
; TA: Dipan
;=================================================
.orig x3000

LD	R2,NEWLINE

NOT	R2,R2
ADD	R2,R2,#1

LD	R4,BASE
LD	R5,MAX
LD	R6,TOS

BEGIN
  LEA	R0,prompt
  PUTS
  GETC
  OUT
  ADD	R3,R0,R2
  BRz	END_LOOP
  ST	R0,INPUT
  LD	R0,NEWLINE
  OUT
  LD	R0,INPUT
  LD	R1,ASCII_OFFSET
  ADD	R0,R0,R1
  LD	R1,SUB_STACK_PUSH
  JSRR	R1
  BR	BEGIN
END_LOOP
  HALT
;---
; Local Data
;---
SUB_STACK_PUSH		.FILL x3300
ASCII_OFFSET		.FILL #-48
NEWLINE			.FILL x0A
BASE			.FILL xA000
MAX			.FILL xA005
TOS			.FILL xA000
INPUT			.BLKW 1

prompt			.STRINGZ "Enter value: \n"
;------------------------------------------------------------------------------------------;
; Subroutine: SUB_STACK_PUSH
; Parameter (R0): The value to push onto the stack
; Parameter (R4): BASE: A pointer to the base (one less than​ the lowest available
; address) of the stack
; Parameter (R5): MAX: The "highest" available address in the stack
; Parameter (R6): TOS (Top of Stack): A pointer to the current top of the stack
; Postcondition: The subroutine has pushed (R0) onto the stack (i.e to address TOS+1).
; If the stack was already full (TOS = MAX), the subroutine has printed an
; overflow error message and terminated.
; Return Value: R6 ← updated TOS
;------------------------------------------------------------------------------------------
.orig x3300
; R3 - designated capacity size check
ST	R3,BACKUP_R2_3300
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
.end