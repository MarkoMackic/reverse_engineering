## disable ASLR

`echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

## compile without stack smashing protector 
( disabled by default, but some distros have patched gcc to turn it on by def ) 

 `gcc -fno-stack-protector auth_example.c`


