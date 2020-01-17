kmain()
{
        char* vidmem=(char*)0xb8000;
        for (int i = 0; i < 100000; i++)
        {
                vidmem[i] = 0x00;
                // fill out the screen with null so
                // that it wont have the boot logo left there
                
        }
        
        
        vidmem[0] = 'H';
        vidmem[1] = 0x04;
        vidmem[2] = 'e';
        vidmem[3] = 0x04;
        vidmem[4] = 'l';
        vidmem[5] = 0x04;
        vidmem[6] = 'l';
        vidmem[7] = 0x04;
        vidmem[8] = 'o';
        vidmem[9] = 0x04;
        vidmem[10] = ' ';
        vidmem[11] = 0x00;
        vidmem[12] = 'W';
        vidmem[13] = 0x04;
        vidmem[14] = 'o';
        vidmem[15] = 0x04;
        vidmem[16] = 'r';
        vidmem[17] = 0x04;
        vidmem[18] = 'l';
        vidmem[19] = 0x04;
        vidmem[20] = 'd';
        vidmem[21] = 0x04;
        vidmem[22] = '!';
        vidmem[23] = 0x04; // write hello world to the screen
}
