#ifndef _SCAN_CODE_H
#define _SCAN_CODE_H

#define 	LEFTSHIFT	42
#define 	RIGHTSHIFT	54
#define		LEFTSHIFT_R 0xAA
#define		RIGHTSHIFT_R 0xB6
#define     BACKSPACE 0x0E
#define NUM_SCAN_CODES		255
#define 	CAPSLOCK	58
#define  NUM_CONVERT 80
/* declare array to store all scan codes */
char scan_code[NUM_SCAN_CODES];
char shift_convert[NUM_CONVERT];
/* scan code initialization function */
void init_scan_code();

#endif  /* _SCAN_CODE_H */
