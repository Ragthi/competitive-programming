#include "bits/stdc++.h"

using namespace std;
#define dbg(...)
using ll = int64_t;

int label[20];
int no = 0;
int disLabel(int k) {
  for (int i = 0; i < no; i++) {
    if (k == label[i])
      return 1;
  }
  return 0;
}

void Solution() {
  FILE * filepointerone, * fptwo;
  char fname[10]={'i','n','p','u','t','.','t','x','t'}, op[10], ch;
  char first[8], second[8], ans[8];
  int i = 0, j = 0;
  filepointerone = fopen(fname, "r");
  fptwo = fopen("target.txt", "w");
  if (filepointerone == NULL || fptwo == NULL) {
    printf("\n Error opening the file");
    exit(0);
  }
  while (!feof(filepointerone)) {
    fprintf(fptwo, "\n");
    fscanf(filepointerone, "%s", op);
    i++;
    if (disLabel(i))
      fprintf(fptwo, "\nlabel#%d", i);
    if (strcmp(op, "print") == 0) {
      fscanf(filepointerone, "%s", ans);
      fprintf(fptwo, "\n\t OUT %s", ans);
    }
    if (strcmp(op, "goto") == 0) {
      fscanf(filepointerone, "%s %s", first, second);
      fprintf(fptwo, "\n\t JMP %s,label#%s", first, second);
      label[no++] = atoi(second);
    }
    if (strcmp(op, "[]=") == 0) {
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n\t STORE %s[%s],%s", first, second, ans);
    }
    if (strcmp(op, "uminus") == 0) {
      fscanf(filepointerone, "%s %s", first, ans);
      fprintf(fptwo, "\n\t LOAD -%s,R1", first);
      fprintf(fptwo, "\n\t STORE R1,%s", ans);
    }
    switch (op[0]) {
    case '*':
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD", first);
      fprintf(fptwo, "\n \t LOAD %s,R1", second);
      fprintf(fptwo, "\n \t MUL R1,R0");
      fprintf(fptwo, "\n \t STORE R0,%s", ans);
      break;
    case '+':
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD %s,R0", first);
      fprintf(fptwo, "\n \t LOAD %s,R1", second);
      fprintf(fptwo, "\n \t ADD R1,R0");
      fprintf(fptwo, "\n \t STORE R0,%s", ans);
      break;
    case '-':
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD %s,R0", first);
      fprintf(fptwo, "\n \t LOAD %s,R1", second);
      fprintf(fptwo, "\n \t SUB R1,R0");
      fprintf(fptwo, "\n \t STORE R0,%s", ans);
      break;
    case '/':
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD %s,R0", first);
      fprintf(fptwo, "\n \t LOAD %s,R1", second);
      fprintf(fptwo, "\n \t DIV R1,R0");
      fprintf(fptwo, "\n \t STORE R0,%s", ans);
      break;
    case '%':
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD %s,R0", first);
      fprintf(fptwo, "\n \t LOAD %s,R1", second);
      fprintf(fptwo, "\n \t DIV R1,R0");
      fprintf(fptwo, "\n \t STORE R0,%s", ans);
      break;
    case '=':
      fscanf(filepointerone, "%s %s", first, ans);
      fprintf(fptwo, "\n\t STORE %s %s", first, ans);
      break;
    case '>':
      j++;
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD %s,R0", first);
      fprintf(fptwo, "\n\t JGT %s,label#%s", second, ans);
      label[no++] = atoi(ans);
      break;
    case '<':
      fscanf(filepointerone, "%s %s %s", first, second, ans);
      fprintf(fptwo, "\n \t LOAD %s,R0", first);
      fprintf(fptwo, "\n\t JLT %s, label#%d", second, ans);
      label[no++] = atoi(ans);
      break;
    }
  }
  fclose(fptwo);
  fclose(filepointerone);
  fptwo = fopen("target.txt", "r");
  if (fptwo == NULL) {
    printf("Error opening the file\n");
    exit(0);
  }
  do {
    ch = fgetc(fptwo);
    printf("%c", ch);
  } while (ch != EOF);
  fclose(filepointerone);

}

int main() {
  cin.tie(nullptr) -> sync_with_stdio(false);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  cout << fixed << setprecision(12);
  ll tc = 1;
  cin >> tc;
  while (tc--)
    Solution();
  cerr << "Time:" << 1000 * ((double) clock()) / (double) CLOCKS_PER_SEC << "ms\n";
  return 0;
}