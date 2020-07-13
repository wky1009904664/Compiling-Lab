.data
_Prompt: .asciiz "Enter an integer:  "
_ret: .asciiz "\n"
.globl main

.text
main0:
addi $sp, $sp, -128
jal main
li $v0,10
syscall

read:
  li $v0,4
  la $a0,_Prompt
  syscall
  li $v0,5
  syscall
  jr $ra

write:
  li $v0,1
  syscall
  li $v0,4
  la $a0,_ret
  syscall
  move $v0,$0
  jr $ra


main:
  addi $sp, $sp, -24
  addi $sp, $sp, -4
  sw $ra, 0($sp)
  jal read
  lw $ra, 0($sp)
  addi $sp, $sp, 4
  sw $v0, 20($sp)
  lw $t3, 20($sp)
  sw $t3, 12($sp)
  li $t3, 1
  sw $t3, 0($sp)
  lw $t1, 12($sp)
  lw $t2, 0($sp)
  beq $t1, $t2,label6
  j label7
label6:
  li $t3, 10
  sw $t3, 0($sp)
  lw $a0, 0($sp)
  addi $sp, $sp, -4
  sw $ra, 0($sp)
  jal write
  lw $ra, 0($sp)
  addi $sp, $sp, 4
  j label3
label7:
  li $t3, 2
  sw $t3, 0($sp)
  lw $t1, 12($sp)
  lw $t2, 0($sp)
  beq $t1, $t2,label9
  j label4
label9:
  li $t3, 20
  sw $t3, 0($sp)
  lw $a0, 0($sp)
  addi $sp, $sp, -4
  sw $ra, 0($sp)
  jal write
  lw $ra, 0($sp)
  addi $sp, $sp, 4
  j label3
label4:
  li $t3, 30
  sw $t3, 0($sp)
  lw $a0, 0($sp)
  addi $sp, $sp, -4
  sw $ra, 0($sp)
  jal write
  lw $ra, 0($sp)
  addi $sp, $sp, 4
label3:
  li $t3, 0
  sw $t3, 20($sp)
  lw $v0, 20($sp)
  jr $ra
label1:
