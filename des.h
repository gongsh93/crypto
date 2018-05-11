#ifndef _DES_H_
#define _DES_H_

#define ENCRYPTION_MODE 1
#define DECRYPTION_MODE 0

#define ROUND_NUM 16

typedef struct {
    unsigned char data[8];
} block;

typedef struct { 
    unsigned char data[8];
} key;

#endif _DES_H_