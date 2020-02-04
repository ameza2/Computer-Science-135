// Abraham Meza - complex_calculator.c - CS 135 //
// A program that adds, subtracts, and multiplies complex numbers by utilizing pointers and functions //

#include <stdio.h>

void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result);
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result);
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result);
void read_num(float *real_part, float *imaginary_part);
void read_nums(float *real_part_1, float *imaginary_part_1, float *real_part_2, float *imaginary_part_2);
void print_complex(float real_part, float imaginary_part);

int main(void){
  int option;
  float real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, real_part, imaginary_part, real_value, imaginary_value, real_result, imaginary_result;

  printf("Complex Number Arithmetic Program:\n");

  while (1){
    printf("1) Add two complex numbers\n2) Subtract two complex numbers\n3) Multiply two complex numbers\n4) Quit\n");
    printf("Choose an option (1 - 4): ");
    scanf("%d",&option);

    switch (option){
      case 1:
        read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
        add (real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
        print_complex(real_result, imaginary_result);
        break;

      case 2:
        read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
        subtract(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
        print_complex(real_result, imaginary_result);
        break;

      case 3:
        read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
        multiply(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
        print_complex(real_result, imaginary_result);
        break;

      case 4:
        printf("Bye!\n");
        return 0;
        break;

      default:
        printf("Please input a valid menu option\n");
        break;
    }
  }
}

void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result){

  *real_result = real_part_1 + real_part_2;
  *imaginary_result = imaginary_part_1 + imaginary_part_2;
}

void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result){

  *real_result = real_part_1 - real_part_2;
  *imaginary_result = imaginary_part_1 - imaginary_part_2;
}

void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float *real_result, float *imaginary_result){
  float real_product, imaginary_product, real_imaginary1, real_imaginary2;

  real_product = (real_part_1*real_part_2);
  real_imaginary1 = (real_part_1*imaginary_part_2);
  real_imaginary2 = (imaginary_part_1 * real_part_2);
  imaginary_product = (imaginary_part_1 * imaginary_part_2);

  *real_result = (real_product + (-1 * imaginary_product));
  *imaginary_result = (real_imaginary1 + real_imaginary2);
}

void read_num(float *real_part, float *imaginary_part){

  printf("Please type in the real component: ");
  scanf("%f", real_part);

  printf("Please type the imaginary component: ");
  scanf("%f", imaginary_part);
}

void read_nums(float *real_part_1, float *imaginary_part_1, float *real_part_2, float *imaginary_part_2){

  printf("Reading the first imaginary number...\n");

  read_num(real_part_1, imaginary_part_1);

  printf("Reading in the second imaginary number...\n");

  read_num(real_part_2, imaginary_part_2);

}

void print_complex(float real_part, float imaginary_part){
  printf("The operation yields %6.3f + %6.3fi\n", real_part, imaginary_part);
}
