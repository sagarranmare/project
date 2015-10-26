p:date.o prjct1.o arrng.o cinemas.o cmp.o inox.o movies.o pvr.o seats.o time.o select.o list.o file.o
	cc date.o prjct1.o arrng.o cinemas.o cmp.o inox.o movies.o pvr.o seats.o time.o select.o list.o file.o -o p
date.o:date.c
	cc -c date.c
prjct1.o:prjct1.c
	cc -c prjct1.c
arrng.o:arrng.c
	cc -c arrng.c
cinemas.o:cinemas.c 
	cc -c cinemas.c
cmp.o:cmp.c
	cc -c
inox.o:inox.c 
	cc -c inox.c
movies.o:movies.c 
	cc -c movies.c
pvr.o:pvr.c
	cc -c pvr.c
seats.o:seats.c 
	cc -c seats.c
time.o: time.c
	cc -c time.c
select.o:select.c 
	cc -c select.c
list.o: list.c list.h
	cc -c list.c
file.o:file.c
	cc -c file.c
clean:
	rm *.o
