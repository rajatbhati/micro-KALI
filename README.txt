                                                  micro-KALI

This project is aimed at creating a minimal implementation of OS. the project only uses th GRUB as an of the shelf component. All the other components are coded from scratch by a team of 3 students over a period of 3 months.

Use the setup file to setup the required files and software.

Since the OS is a driveless OS hence using it on qemu is the prefered way to go.

Use build.sh to build the other files which include interupts for keyboard etc.

I highly appriciate anyone willing to extend it to make it more functional.




including custom commands:
since all execution takes place from kernel.c file. From reading the structure it is quite clear that it runs an infinite while loop which cheks inputs against commands using string compares. So anyone can write their own functions and include them to be called from the kernel.c


