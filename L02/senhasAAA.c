int main() {
  char AtualSenha1, AtualSenha2, AtualSenha3, MinhaSenha1, MinhaSenha2, MinhaSenha3;
  int n1, n2, n3, diferenca;

  scanf("%c %c %c", &AtualSenha1, &AtualSenha2, &AtualSenha3);
  scanf(" %c %c %c", &MinhaSenha1, &MinhaSenha2, &MinhaSenha3);

  n3 = (MinhaSenha3 - AtualSenha3);
  n2 = (MinhaSenha2 - AtualSenha2) * 26;
  n1 = (MinhaSenha1 - AtualSenha1) * 26*26;
  diferenca = n3 + n2 + n1;
  printf("%d\n", diferenca);

 return 0;
}