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

LD R1, COUNTER
LEA R2, ARRAY1

DO_WHILE
  GETC
  STR R0, R2, #0
  ADD R2, R2, #1
  OUT
  ADD R1, R1, #-1
  BRp DO_WHILE

HALT
;--
; Local Data
;--
PROMPT	.STRINGZ	"Please enter 10 characters: "
COUNTER	.FILL		#10
ARRAY1			.BLKW #10

.end