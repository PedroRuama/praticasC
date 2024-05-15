int main() {
  char Letra1, Letra2, Letra3, Letra4, Letra5, l1, l2, l3, l4, l5; 
  int key;

  scanf("%c %c %c %c %c", &Letra1, &Letra2, &Letra3, &Letra4, &Letra5);
  scanf("%d", &key);

  l1 = (Letra1 - key + 65)%26 + 65;
  l2 = (Letra2 - key + 65)%26 + 65; 
  l3 = (Letra3 - key + 65)%26 + 65; 
  l4 = (Letra4 - key + 65)%26 + 65; 
  l5 = (Letra5 - key + 65)%26 + 65; 

  printf("%c%c%c%c%c\n", l1, l2, l3, l4, l5);

 return 0;
}