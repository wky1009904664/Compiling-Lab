.data
_Prompt: .asciiz "Enter an integer:  "
_ret: .asciiz "\n"
.globl main
.text
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
  addi $sp, $sp, -1272
  lw $t1, 1228($sp)
  move $t3, $t1
  sw $t3, 1264($sp)
  lw $t1, 1264($sp)
  move $t3, $t1
  sw $t3, 1228($sp)
  li $t3, 3
  sw $t3, 1268($sp)
  lw $t1, 1268($sp)
  move $t3, $t1
  sw $t3, 152($sp)
  li $t3, 1
  sw $t3, 1268($sp)
  lw $t1, 1268($sp)
  move $t3, $t1
  sw $t3, 28($sp)
  li $t3, 1
  sw $t3, 1268($sp)
  lw $v0,1268($sp)
  jr $ra
label1:
