#include <stdio.h>
#include "apilib.h"

void HariMain(void)
{
    char s[20];
    int fh;
    char c;
    fh = api_fopen("ipl10.nas");
    sprintf(s, "fh=%X\n", fh);
    api_putstr0(s);
    if (fh != 0) {
        for (;;) {
            if (api_fread(&c, 1, fh) == 0) {
                break;
            }
            api_putchar(c);
        }
    }
    api_end();
}
