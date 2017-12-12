;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; Lab: 4
; Lab section: 25
; TA: Dipan
; 
;=================================================
.orig x3000
;-----
; Instructions
;-----
LD R1 , DATA_PTR		; Values starting from decimal 65 are loaded into
				; the R1 register

LDR R2 , R1 , #0		; Load the pointer to the memory address of R1 into R2
ADD R2 , R2 , #1		; Shift the memory address by 1 to access the 2nd
STR R2 , R1 , #0		; Store R2 the value of R1 non-shifte

ADD R1 , R1 , #1		; Shift R1's memory address by 1

LDR R3 , R1 , #0
ADD R3 , R3 , #1
STR R3 , R1 , #0

HALT
;---
;Local Data
;---
DATA_PTR	.FILL	x4000

.orig x4000
  .FILL #65
  .FILL #41

.end