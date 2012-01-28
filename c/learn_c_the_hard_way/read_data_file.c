#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 100
#define MAXROWS 10
#define MAXCOLS 10

int getwords(char *line, char *words[], int maxwords) {
  char *p = line;
  int nwords = 0;

  while(1) {
    // Space? move on
    while(isspace(*p)) {
      p++;
    }

    // End of line? We're done
    if(*p == '\0') {
      return nwords;
    }

    words[nwords++] = p;

    while(!isspace(*p) && *p != '\0') {
      p++;
    }

    if(*p == '\0') {
      return nwords;
    }

    *p++ = '\0';

    if(nwords >= maxwords) {
      return nwords;
    }
  }
}

int main(int arvc, char** argv) {
  int array[MAXROWS][MAXCOLS];
  char *filename = "input.dat";
  FILE *ifp;
  char line[MAXLINE];
  char *words[MAXCOLS];
  int nrows = 0;
  int n;
  int i;

  ifp = fopen(filename, "r");
  if(ifp == NULL) {
    fprintf(stderr, "can't open %s\n", filename);
    exit(-1);
  }

  while(fgetsline(ifp, line, MAXLINE) != EOF) {
    if(nrows >= MAXROWS) {
      fprintf(stderr, "too many rows\n");
      exit(-1);
    }

    n = getwords(line, words, MAXCOLS);

    for(i = 0; i < n; i++) {
      array[nrows][i] = atoi(words[i]);
    }

    nrows++;
  }

  return 0;
}
