;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 5
; Lab section: 25
; TA: Dipan
; 5;=================================================
.orig x3000

; Instructions

LD 	R1,FIRST_VALUE			; loads the first hard-coded value to store to the R1 Register
LD	R2,DATA_PTR			; loads mem location of array into R2
LOOP
	STR	R1,R2,#0		; stores the previous value into the nth entry
	ADD	R2,R2,#1		; increments the pointer to select the next one
	ADD	R1,R1,#1		; increment to store for the next
	ADD	R3,R1,#-10		; check if next value store is 10
	BRnp	LOOP			; if it isnt, iterate

LD	R4,DATA_PTR		; reload the array into R4
ADD	R4,R4,#6		; increment 7th element (since it originally
				; points to the 1st element)
LDR	R2,R4,#0		; load 7th element into the R2

LD	R1,LOOP_COUNT
LD	R2,DATA_PTR
LD	R3,ASCII

PRINT_LOOP
  LDR	R0, R2, #0
  ADD	R0, R3, #0
  OUT
  ADD	R2,R2,#1
  ADD 	R3,R3,#1
  ADD	R1,R1,#-1
  BRp	PRINT_LOOP
	
HALT

; Data

FIRST_VALUE	.FILL	#0		; hard code the 0th value to increment later
DATA_PTR	.FILL	ARRAY		; pointer to array memory location
LOOP_COUNT	.FILL	#10		; Output loop counter
ASCII		.FILL   #48

.orig x4000
ARRAY	.BLKW	#10			;initialize empty array

.end