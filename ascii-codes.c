/*
 *  -----------------------------------------
 *  ASCII Codes 1.0
 *  -----------------------------------------
 *  Author: Adam Blaszczyk
 *          http://wyciekpamieci.blogspot.com
 *  Date:   2016-03-08
 *  -----------------------------------------
 *  
 *  Compilation (Linux, Windows):
 *         gcc ascii-codes.c -o ascii-codes -Wall
 *
 *  Usage:
 *         ascii-codes
 *         - ASCII and Extended ASCII *printable* characters between 32 and 255
 *         ascii-codes min
 *         - ASCII and Extended ASCII characters between [min] and 255
 *         ascii-codes min max
 *         - ASCII and Extended ASCII characters between [min] and [max]
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  
  int ch;
  int min = 32;
  int max = 255;

  if(argc == 2)
    min = atoi(argv[1]);
  if(argc == 3) {
    min = atoi(argv[1]);
    max = atoi(argv[2]);
  }

  printf("\n");
  printf("  ASCII CODES\n");
  printf("  ==============================================\n");
  printf("     0 -  31; 127 --> ASCII control characters\n");
  printf("    32 - 126      --> ASCII printable characters\n");
  printf("   128 - 255      --> Extended ASCII characters\n");

  printf("\n");
  printf("  +-------+------+-----------+\n");
  printf("  |  DEC  |  HEX | Character |\n");
  printf("  +-------+------+-----------+\n");
  
  for(ch = min; ch <= max; ch++) {
    printf("  |  %03d  |  %02X  |     %c     |\n", ch, ch, ch);
  }
  
  printf("\nPress [ENTER] to exit...");
  getchar();

  return 0;
}
