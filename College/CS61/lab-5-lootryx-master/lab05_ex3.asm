;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 5
; Lab section: 25
; TA: Dipan
; 
;=================================================
.orig x3000

; Instructions

LD 	R1,VALUE		;loads the counter to store to R1
LD	R2,DATA_PTR		;loads array memory location into R2
LD	R5,CHECK		;stores max value for end of loop
LOOP
  STR	R1,R2,#0		; stores previous value into the nth entry
  ADD	R2,R2,#1		; increments pointer to shift next
  ADD	R1,R1,R1		; increment value via bit-shift 
  ADD	R3,R1,R5		; check if next value store is 2^9=512
  BRnp	LOOP			; if it isnt, iterate again

  LD	R4,DATA_PTR		; reload array memory location into R4
  ADD	R4,R4,#6		; increment 7th element (since it originally
				; points to the 1st element)
  LDR	R2,R4,#0		; load 7th element into the R2
				; should be 2^6 = 64

halt

; Data
VALUE		.FILL	x1	; hard code 2^0 (which is 1)
DATA_PTR	.FILL	ARRAY	; memory location of array
CHECK		.FILL	#-1024	; 2^10

.orig x4000
ARRAY		.BLKW	#10

.end