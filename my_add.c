/*input:two positive integers
  output: prints properly those two positive integers and thier sum in binary   base and 10-base as well. */

#include <stdio.h>

/*This function gets an unsigned int nuber in 10-base and size of int and print it in binar-base.  */ 
int printbinar(unsigned int num, int size){
  int count,b; /*count index starts from the msb of int bits*/
  for(count=size-1;count>=0;count--){
    b=num&(1<<count);/*b is the bit in the count index of num */
    if (b){ 
     printf("1"); }
    else {
     printf("0");
   }}
  printf("\n");
  return 0;
   
}  
/*This function takes two unsigned integers a and b as input, prints them in binary base. It calculates the sum of them in binary base print it and returns it's result in 10-base. Also it calculate the size of int in bits.  */

 unsigned int my_add(unsigned int a, unsigned int b){
  int i,carry=0,lsb_a,lsb_b,sum_lsb, int_size,check;/*i and check   
   indexes, ,lsb_a,lsb_b,sum_lsb represent last_significant_bit for a,b,and sum of them, carry is the carry of each lsb sum calculate, int_size would hold the size of int in bits  */
  unsigned int sum=0; /* sum in binar-base of a and b. */
  for (check=1,int_size=0;check;check<<=1,int_size++); 
  printf("The first number you choose in binar base is  :");
  printbinar(a,int_size);
  printf("The second number you choose in binar base is :");
  printbinar(b,int_size); 
  for (i=0;i<int_size;i++,a>>=1,b>>=1){
   lsb_a= a&1;
   lsb_b= b&1;
   sum_lsb=lsb_a^lsb_b^carry;
   carry=(lsb_a&lsb_b&(~carry))||(lsb_a&(~lsb_b)&carry)||((~lsb_a)&lsb_b&carry)||(lsb_a&lsb_b&carry);
   sum|=(sum_lsb<<i);
       }
              
  printf("The sum result in binar is :");
  printbinar(sum,int_size);
 return sum; 
 }
/*This function gets as input two unsigned integers num1 and num2, prints them in 10-base. send them to my_add func and print it's result in 10-base.  */
int main (){
 unsigned int num1,num2,sum; 
 printf("Please enter 2 positive integers in base 10 \n");
 scanf("%u %u",&num1,&num2);
 printf("The numbers you choose are : %u and %u \n", num1,num2);
 sum=my_add(num1, num2);
 printf("The sum result in 10-base is : %u \n",sum);
 



 
 return 0;
}
