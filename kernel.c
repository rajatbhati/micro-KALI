#include "include/kb.h"
#include "include/isr.h"
#include "include/idt.h"
kmain()
{
       isr_install();
       clearScreen();
       
       print("Hi and Welcome to mirco KALI operating system\nPlease enter a command");
       printch('\n');
       print("micro-KALI >$> ");
       while (1)
       {
                string ch = readStr();
                print("\n");
                print(ch);
                if(strEql(ch,"cmd"))
                {
                        print("\nYou are allready in cmd\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                        print("micro-KALI >$> ");
                }
               else if(strEql(ch,"ping"))
                {
                        clearScreen();
                        print("\n--PONG--\n");
                } 
                else
                {
                        print("Bad command!");
                }        
       }
        
}
