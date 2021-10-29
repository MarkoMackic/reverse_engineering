## disable ASLR

`echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

## compile without stack smashing protector 
( disabled by default, but some distros have patched gcc to turn it on by def ) 

 `gcc -fno-stack-protector auth_example.c`

## try it

```bash
./a.out test -> A_DENIED
./a.out test1 -> OKI
./a.out test2 -> OKI
./a.out whatever -> A_DENIED
./a.out AAAAAAAAAAAAAAAAAAAAAAAAAAAAA -> OKI ( yo yo ) 
```
