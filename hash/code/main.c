#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#include "test.h"
#include "type.h"
#include "hash.h"

int main(int argc, char **argv) {
	int mode = TEST;
	if(argc == 2) {
		mode = atoi(argv[1]);
	} else {
		return(0);
	}

	switch(mode) {
		case TEST:
			fprintf(stderr, "running tests\n");
			int result = (
			);
			fprintf(stderr, "test results: %s\n", !result ? "PASS" : "FAIL");

			hash_table *t = ht_init(LOCKING, TABLE, 5);
			ht_free(t);

			return(result);
	}
	return(0);
}