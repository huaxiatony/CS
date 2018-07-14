;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 3
; Lab section: 25
; TA: Dipan
; 
;=================================================
.ORIG x3000

;-----
; Instructions
;-----
LD R3, DEC_65
LD R4, HEX_41

HALT

;---
;Local Data
;---
DEC_65	.FILL	#65
HEX_41	.FILL	x41

.END