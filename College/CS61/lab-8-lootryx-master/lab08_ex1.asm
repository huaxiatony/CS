;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 8
; Lab section: 025
; TA: Dipan
;=================================================
.orig x3000

;--
; Instructions
;--
LD R0, str_addr
LD R1, SUB_GET_STRING
JSRR R1
;PUTS

HALT
;--
; Local Data 
;--
SUB_GET_STRING	.FILL x3200
str_addr	.FILL x4000

;----------------------------------------------------------------------------------------------------------------
; Subroutine: SUB_GET_STRING
; Parameter (R0): The address of where to start storing the string
; Postcondition: The subroutine has allowed the user to input a string,
; terminated by the [ENTER] key, and has stored it in an array
; that starts at (R0) and is NULL-terminated.
; Return Value: R5 The number of non-sentinel characters read from the user
;-----------------------------------------------------------------------------------------------------------------
.orig x3200

;--
; Subroutine Instructions
;--
ST	R0,BACKUP_R0_3200
ST	R7,BACKUP_R7_3200

LD	R1,BACKUP_R0_3200
AND	R5,R5,#0
LD	R2,ASCII_ENTER

INPUT
  GETC
  OUT
  ADD	R3,R2,R0
  BRz END_INPUT
  STR	R0,R1,#0
  ADD	R5,R5,#1
  BR	INPUT

END_INPUT
  LD	R0,BACKUP_R0_3200
  LD	R7,BACKUP_R7_3200
  RET
;--
; Subroutine Data Block
;--
BACKUP_R0_3200		.BLKW #1
BACKUP_R7_3200		.BLKW #1
ASCII_ENTER		.FILL -xA

;--
; End of subroutine
;--

;--
; End of program
;--
.end