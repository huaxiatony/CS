;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 2
; Lab section: 25
; TA: Dipan
; 
;=================================================
;
;Hello world example program
;Also illustrates how to use PUTS (aka: Trap x22)
;
.ORIG x3000
;---------
;Instructions
;---------
  LEA R0, MSG_TO_PRINT
  PUTS

  HALT
;----------
;Local Data
;-----
  MSG_TO_PRINT	.STRINGZ	"Hello world!!!\n"

.END