CC = gcc
CFLAGS = -ggdb
XS = -z execstack
NOXS = -z noexecstack
CANARY = -fstack-protector

<<<<<<< HEAD
xs_sources = vulnerable1 vulnerable2 vulnerable3 learning
=======
xs_sources = vulnerable1 vulnerable2 vulnerable3
>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
noxs_canary_sources = vulnerable4

all: xs noxs_canary

xs:
	$(foreach source,$(xs_sources),$(CC) $(CFLAGS) $(XS) $(source).c -o $(source);)

noxs_canary:
	$(foreach source,$(noxs_canary_sources),$(CC) $(CFLAGS) $(NOXS) $(CANARY) $(source).c -o $(source);)

cp:
	cp vulnerable? /tmp/

clean:
	rm -f vulnerable? core

setuid: cp
ifeq ($(shell id -u),0)
	chown root:root /tmp/vulnerable?
	chmod 4755 /tmp/vulnerable?
else
	@echo "'make setuid' must be run as root -- use su or a root login!"
endif

