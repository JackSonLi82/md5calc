#include "md5.h"
#include <string.h>

int main(int argc, char *argv[])
{
    //字符串加密
    int i;
    unsigned char id[1] = {1};
    unsigned char password[] = "Hninfo119fx";
    unsigned char random[] = {0xf1, 0x43, 0x69, 0x49, 0xd0, 0x7c, 0x76, 0x53, 0xdc, 0xd3, 0x07, 0x28, 0xb5, 0x5c, 0x1d, 0x27};
    unsigned char encrypt[] = "admin"; //21232f297a57a5a743894a0e4a801fc3
    unsigned char decrypt[16];
    MD5_CTX md5;
    MD5Init(&md5);
    MD5Update(&md5, id, 1);
    MD5Update(&md5, password, strlen((char *)password));
    MD5Update(&md5, random, 16);
    MD5Final(&md5, decrypt);
    printf("\n加密后: ");
    for(i=0; i<16; i++) {
        printf("%02x", decrypt[i]);
    }
    printf("\n");

    return 0;
}
