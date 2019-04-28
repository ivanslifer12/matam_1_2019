#ifndef UTILS
#define UTILS

#include <stdlib.h>
#include <assert.h>

#define CHECK(b,res)                            \
  if((b) != (res)) do{                          \
      printf("fail: %s != %s\n", #b, #res);     \
      eurovisionDestroy(eurovision);            \
      return false;                             \
    } while(0)

#define TEST(t)                                 \
  do {                                          \
    printf("Testing %s ...\n", #t);             \
    if ((t()))                                  \
      printf("Test %s: SUCCESS\n", #t);         \
    else                                        \
      printf("Test %s: FAIL\n", #t);            \
  } while (0);

int *makeJudgeResults(int id0, int id1, int id2, int id3, int id4,
                             int id5, int id6, int id7, int id8, int id9) {
	int *results = malloc(10 * sizeof(*results));
	assert(results);
	results[0] = id0;
	results[1] = id1;
	results[2] = id2;
	results[3] = id3;
	results[4] = id4;
	results[5] = id5;
	results[6] = id6;
	results[7] = id7;
	results[8] = id8;
	results[9] = id9;
	return results;
}

#endif // UTILS
