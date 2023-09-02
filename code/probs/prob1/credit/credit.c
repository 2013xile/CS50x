#include <cs50.h>
#include <stdio.h>

int main(void) {
  // 获取信用卡号码
  long cc_number = get_long("Number: ");
  int size = 0;
  int first_digit;
  int second_digit;
  int checksum;
  long remain_digits = cc_number;
  // 计算算法的结果
  while (remain_digits > 0) {
    int digit = remain_digits % 10;
    remain_digits = remain_digits / 10;
    if (size > 0) {
      second_digit = first_digit;
    }
    first_digit = digit;
    if (size % 2 == 0) {
      checksum += digit;
    } else {
      checksum += digit * 2 % 10 + digit * 2 / 10;
    }
    size++;
  }
  // 检查结果
  if (checksum % 10 != 0) {
    printf("INVALID\n");
    return 0;
  }
  // AMEX
  if (size == 15 && first_digit == 3 &&
      (second_digit == 4 || second_digit == 7)) {
    printf("AMEX\n");
    return 0;
  }
  // MasterCard
  if (size == 16 && first_digit == 5 &&
      (second_digit >= 1 && second_digit <= 5)) {
    printf("MASTERCARD\n");
    return 0;
  }
  // Visa
  if ((size == 13 || size == 16) && first_digit == 4) {
    printf("VISA\n");
    return 0;
  }
  printf("INVALID\n");
}
