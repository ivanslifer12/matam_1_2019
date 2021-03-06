

CC=gcc

OBJS= country.o eurovision.o judge.o points.o support_functions.o tests/eurovisionTests.o tests/eurovisionTestsMain.o

EXEC=eurovisionContest

DEBUG=#-g for debug

LINKFLAG=-L. -lmtm

CFLAGS=-std=c99 -Wall -pedantic-errors -Werror -DNDEBUG $(LINKFLAG) $(DEBUG)

$(EXEC)  : $(OBJS)
	 $(CC) $(DEBUG_FLAG) $(OBJS) -o $@ $(LINKFLAG)

country.o: country.c eurovision.h list.h namelib.h country.h  support_functions.h

eurovision.o: eurovision.c eurovision.h list.h namelib.h country.h  judge.h points.h support_functions.h

judge.o: judge.c eurovision.h list.h namelib.h judge.h  support_functions.h

points.o: points.c eurovision.h list.h namelib.h points.h support_functions.h

support_functions.o: support_functions.c eurovision.h list.h namelib.h country.h judge.h points.h support_functions.h

eurovisionFunctionalityTests.o: tests/eurovisionFunctionalityTests.c list.h \
 tests/../namelib.h tests/../eurovision.h tests/../list.h \
 tests/eurovisionTests.h tests/../support_functions.h \
 tests/../eurovision.h tests/../judge.h tests/../country.h

eurovisionTests.o: tests/eurovisionTests.c tests/../list.h \
 tests/../namelib.h tests/../eurovision.h tests/../list.h \
 tests/eurovisionTests.h

eurovisionTestsMain.o: tests/eurovisionTestsMain.c \
 tests/eurovisionTests.h

clean:
	rm -f $(OBJS) $(EXEC)


