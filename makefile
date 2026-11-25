exe:stu_main.o stu_add.o stu_del.o stu_delall.o stu_show.o stu_save.o stu_modify.o stu_rev.o stu_sort.o exit.o
	cc stu_main.o stu_add.o stu_del.o stu_delall.o stu_show.o stu_save.o stu_modify.o stu_rev.o stu_sort.o exit.o -o exe

stu_main.o:stu_main.c
	cc -c stu_main.c

stu_add.o:stu_add.c
	cc -c stu_add.c

stu_del.o:stu_del.c
	cc -c stu_del.c

stu_delall.o:stu_delall.c
	cc -c stu_delall.c

stu_show.o:stu_show.c
	cc -c stu_show.c

stu_save.o:stu_save.c
	cc -c stu_save.c

stu_modify.o:stu_modify.c
	cc -c stu_modify.c

stu_rev.o:stu_rev.c
	cc -c stu_rev.c

stu_sort.o:stu_sort.c
	cc -c stu_sort.c

exit.o:exit.c
	cc -c exit.c

clear:
	@echo "cleaning up..."
	@rm -rv *.o exe
