;=================================================
; Name: Benjamin Lee
; Email: blee073@ucr.edu
; 
; Assignment name: Assignment 2
; Lab section: 25
; 
; I hereby certify that I have not received assistance on this assignment,
; or used code, from ANY outside source other than the instruction team.
;
;=================================================
.ORIG x3000			; Program begins here
;-------------
;Instructions
;-------------
;----------------------------------------------
;outputs prompt
;----------------------------------------------	
; Begin here
LEA R0, intro			; 
PUTS				; Invokes BIOS routine to output string

; Need to take the input from console and load it onto a register
TRAP x20			; Takes input of first char into R0
TRAP x21			; Outputs onto console
ADD R1, R0, #0			; Saves copy of first char and loads it into reg
LEA R0, NEWLINE			; loads R0 w/ newline
PUTS				; Outputs newline

; Take input of 2nd char and print to console
TRAP x20
TRAP x21
ADD R2, R0, #0
LEA R0, NEWLINE
PUTS

; Now print the expression pre-subtraction
ADD R0, R1, #0			; Loads first char into R0
TRAP x21			; Prints R0
LEA R0, MINUS			; Loads R0 w/ ASCII of '-'
PUTS				; Prints to console
ADD R0, R2, #0			; Loads 2nd char into R0
TRAP x21			; Prints R0
LEA R0, EQUAL			; Loads R0 w/ ASCII of '='
PUTS				; Prints to console

; Performing the actual operation
ADD R3, R2, #0			; Load 2nd char into reg for 2's complement
NOT R3, R3
ADD R3, R3, 1

; Sending the subtracted result into register
ADD R4, R1, R3

; Conversion if negative
BRn IS_NEGATIVE
  ADD R4, R4, #15
  ADD R4, R4, #15
  ADD R4, R4, #15
  ADD R4, R4, #3

; Printing to console
ADD R0, R4, #0
Trap x21
LEA R0, NEWLINE
PUTS

HALT				; Stop execution of program

IS_NEGATIVE
  NOT R4, R4			; Bringing back to positive
  ADD R4, R4, #1
  
  ADD R4, R4, #15		; Converting to ASCII
  ADD R4, R4, #15	
  ADD R4, R4, #15
  ADD R4, R4, #3

  LEA R0, NEG
  PUTS
  ADD R0, R4, #0
  Trap x21
  LEA R0, NEWLINE
  PUTS

  HALT
;------	
;Data
;------
; String to explain what to input 
intro .STRINGZ	"ENTER two numbers (i.e '0'....'9')\n" 
NEWLINE .STRINGZ "\n"	; String that holds the newline character
MINUS	.STRINGZ	" - "
EQUAL	.STRINGZ	" = "
NEG	.FILL		#45



;---------------	
;END of PROGRAM
;---------------	
.END