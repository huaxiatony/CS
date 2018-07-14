;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 6
; Lab section: 25
; TA: Dipan
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
; Start of exercise 4
LD	R3,DATA_PTR
LD	R5,ASCII
LD	R4,COUNT_10
	

SUBROUTINE_LOOP
  LEA R0, b
  PUTS
  LD	R6,COUNT_16		; load counter (16 count) into R6 ten times
  LDR	R1,R3,#0		; load nth element of array in R1 ten times.
  LD	R7,SUB_PRINT_16BIT
  JSRR	R7			; R1 working value (pass), R2?, R3-data ptr (STORE),
				; R4 outputting 10 vals (STORE), R5- ASCII (PASS),
				; R6 16 print ctr (pass), R7-jmp addr (STORE)
  ADD	R3,R3,#1
  ADD	R4,R4,#-1
  BRp	SUBROUTINE_LOOP
  BRnzp	END

END
  halt

; Data

VALUE		.FILL	x1	; hard code 2^0 (which is 1)
DATA_PTR	.FILL	ARRAY	; memory location of array
CHECK		.FILL	#-1024	; 2^10
COUNT_10	.FILL	#10	; Counter for printing array elements
COUNT_16	.FILL	#16	; Counter for each 16 bit element
b		.STRINGZ "b"
ASCII		.FILL	#48
SUB_PRINT_16BIT	.FILL	x3200

.orig x4000
ARRAY	.BLKW	#10		;initialize empty array

.orig x3200
; Subroutine Instructions

SUBROUTINE
BACKUP_INIT
  ST 	R3,BACKUP_R3_3200
  ST	R4,BACKUP_R4_3200
  ST	R7,BACKUP_R7_3200

PRINTER
  ADD	R1,R1,#0		; R1 is designated as last used register
  BRzp	PRINT_ZERO		; Print 0 if greater than or equal to 0
  ADD	R1,R1,#0
  BRn	PRINT_ONE		; Print 1 if less than 0
NEXT_CHAR
  ADD	R1,R1,R1		; bit shift left
  ADD	R6,R6,#-1		; decrease 16 count for printer
  LD	R7,space_1
  ADD	R7,R6,R7
  BRz	SPACE_PRINT
  LD	R7,space_2
  ADD	R7,R6,R7
  BRz	SPACE_PRINT
  LD	R7,space_3
  ADD	R7,R6,R7
  BRz	SPACE_PRINT
NON_SPACE
  ADD	R6,R6,#0
  BRp	PRINTER
  LD	R0,NEWLINE
  OUT
  BRnzp	END_SUBROUTINE
PRINT_ZERO
  AND	R0,R0,#0
  ADD	R0,R0,R5
  OUT
  BRnzp	NEXT_CHAR
PRINT_ONE
  AND	R0,R0,#0
  ADD	R0,R0,#1
  ADD	R0,R0,R5
  OUT
  BRnzp	NEXT_CHAR
SPACE_PRINT
  LD	R0,space
  OUT
  BRnzp	NON_SPACE
END_SUBROUTINE
  LD	R3,BACKUP_R3_3200
  LD	R4,BACKUP_R4_3200
  LD	R7,BACKUP_R7_3200
  RET

; Subroutine Data

space_1		.FILL	#-12	; First space for 16b
space_2		.FILl	#-8	; Second space for 16b
space_3		.FILL	#-4	; Third space for 16b
NEWLINE		.FILL	#10	; newline decimal representantive
space		.FILL	#32	; space decimal representative

BACKUP_R3_3200	.FILL	x0	
BACKUP_R4_3200	.FILL	x0
BACKUP_R7_3200	.FILL	x0

.end