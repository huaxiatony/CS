;=================================================
; Name: Benjamin Lee
; Email:  blee073@ucr.edu
; 
; Lab: lab 3
; Lab section: 25
; TA: Dipan
; 
;=================================================
.orig x3000
;-----
; Instructions
;-----
LD R0, ADDR_1
LD R1, ADDR_2

LOOP
  ADD R0, R0, #0
  TRAP x21
  ADD R0, R0, #1
  ADD R1, R1, #-1
  BRp LOOP

HALT
;---
;Local Data
;---
ADDR_1	.FILL	x61
ADDR_2	.FILL	x1A

.end