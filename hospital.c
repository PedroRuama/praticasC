Simulando o trecho de código abaixo em C, qual(ais) será(ão) a(s) saída(s) se a variável inteira M = 69?

 ... 
 	H = 3; 
 	A = 15; 

 	T = ((M % 2) + 1) * (M * H) - (M * A); 

 	if (T % 2) 
 		T++; 

 	if (T < 0) 
 		T = -T; 

 	printf("%d", T); 
 ... 