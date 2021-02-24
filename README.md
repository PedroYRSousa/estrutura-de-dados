# Estrutura de dados

A ideia deste repositório é gerar um estudo sobre estruturas de dados, como funcionam, sua complexidade e exemplos animados. Cada estrutura terá seu exemplo animado e um código C.

# Fundamentos

Para criar estruturas complexas, usaremos o operador * em C, que
indica que uma variável é um ponteiro para um tipo. Olhar:

~~~ 
type *varName = null; 
~~~

Portanto, declaramos um ponteiro. Observe que o ponteiro é exatamente o que o nome indica, ele aponta para algo que neste caso é uma referência a uma memória, no caso acima é _null_.

~~~ 
int myNumber = 10;
int *pointerToInteger = &myNumber;
~~~

Agora que temos que o ponteiro aponta para uma variável 'myNumber', veja o operador _'&'_ ele obtém o endereço da memória que aquela variável está armazenada, passando a REFERÊNCIA da variável e não o seu valor.

~~~ 
printf("Endereço da variável myNumber: %x\n", &myNumber);
printf("Endereço armazenado na variável pointerToInteger: %x\n", pointerToInteger);
printf("Valor da variável myNumber: %d\n", *pointerToInteger );
~~~

As saídas são assim:

> Endereço da variável myNumber: 2f9e7b1c
> 
> Endereço armazenado na variável pointerToInteger: 2f9e7b1c
> 
> Valor da variável myNumber: 10

E sempre que o código for executado, o endereço da memória mudará, portanto, se você executar o exemplo lá, não será surpreendente obter valores diferentes para os endereços.
