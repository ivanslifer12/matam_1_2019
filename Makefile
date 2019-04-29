


CC=gcc
OBJS=country.o judge.o points.o candidate.o support_functions.o eurovision.o tests.eurovisionTestsMain.o
EXEC=ex1
DEBUG=-g  #-g for debug
CFLAGS=-std=c99 -Wall -pedantic-errors -Werror -DNDEBUG  -L. –lmtm $(DEBUG)

$(EXEC)  : $(OBJS)
	$(CC) $(DEBUG_FLAG) $(OBJS) -o $@

country.o: country.c  country.h namelib.h
judge.o: judge.c judge.h namelib.h
points.o: points.c points.h namelib.h
candidate.o : candidate.c candidate.h namelib.h
support_functions.o: support_functions.c support_functions.h country.c country.h namelib.h judge.c judge.h candidate.c candidate.h
eurovision.o : eurovision.c eurovision.h support_functions.c support_functions.h country.h judge.h points.h candidate.h
eurovisionTestsMain.o: tests/eurovisionTests.c tests/eurovisionTests.h tests/eurovisionTestsMain.c tests/test_utilities.h


clean:
	rm -f $(OBJS)
