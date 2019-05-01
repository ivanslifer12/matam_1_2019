


CC=gcc
OBJS=country.o eurovision.o judge.o points.o support_functions.o
EXEC=eurovisionContest
DEBUG=#-g for debug
CFLAGS=-std=c99 -Wall -pedantic-errors -Werror -DNDEBUG -L. –lmtm $(DEBUG)

$(EXEC)  : $(OBJS)
	$(CC) $(DEBUG_FLAG) $(OBJS) -o $@

country.o: country.c eurovision.h list.h namelib.h country.h judge.h \
 points.h support_functions.h \

eurovision.o: eurovision.c eurovision.h list.h namelib.h country.h \
 judge.h points.h support_functions.h

judge.o: judge.c eurovision.h list.h namelib.h country.h judge.h points.h \
 support_functions.h

points.o: points.c eurovision.h list.h namelib.h country.h judge.h \
 points.h support_functions.h

support_functions.o: support_functions.c eurovision.h list.h namelib.h \
 country.h judge.h points.h support_functions.h

eurovisionTests.o: tests/eurovisionTests.c tests/../list.h \
 tests/../namelib.h tests/../eurovision.h  tests/eurovisionTests.h

eurovisionTestsMain.o: tests/eurovisionTestsMain.c \
 tests/eurovisionTests.h

clean:
	rm -f $(OBJS)
