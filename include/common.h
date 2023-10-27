#ifndef _COMMON_H_
#define _COMMON_H_

// Macros for disabling/enabling interrupts
#define DI() 		asm( "\tdi" )
#define EI() 		asm( "\tei" )
#define	di()		DI()
#define ei()		EI()

// Zilog standard data types
typedef void VOID ;
typedef char CHAR ;
typedef unsigned char UCHAR;
typedef unsigned char BYTE ;
typedef	unsigned char BOOL;
typedef char INT8;
typedef unsigned char UINT8 ;
typedef short INT16 ;
typedef unsigned short UINT16 ;
typedef unsigned short WORD;
typedef int INT24 ;
typedef int INT ;
typedef unsigned int UINT ;
typedef unsigned int UINT24;
typedef long INT32;
typedef unsigned long UINT32 ;
typedef unsigned long DWORD;
typedef float FLOAT32 ;

#endif
