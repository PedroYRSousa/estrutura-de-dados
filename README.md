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

# Complexidade 

A complexidade de um algorítimo esta ligada a alguns fatores como o tempo que ele leva para executar um método e a quantidade de memória que ele usa ao longo de toda sua vida util.

Existem 3 casos, melhor caso(Θ), caso "medio"(Ω) e pior caso (O), aqui para nossos exemplos iremos nos até ao pior caso (O).

Para calcular de forma mais simples e eficiente um algoritimo, EU faço da seguinte maneira.

Dado os codigos:

## Caso 1
~~~
int a = 10;         // 1
int b = 20;         // 1
int c = a + b;      // 1
// 1 + 1 + 1 = 3 => O(1);
~~~
Aqui temos um calculo simples. Para cada interação o processador leva um tempo de execução que iremos determinar como '1', apenas isso mesmo sem medida.

Ao terminar as interações podemos calcular um valor '3', veja que independente dos valores das variáveis o tempo de execução ira relativamente ser o mesmo. Determinamos que esse código no pior caso tem a complexidade constante ou seja O(1).

> Você pode esta se perguntando "ué mas e o 3?", eu respondo que é ignorado, ao calcular uma complexidade determinamos o seu maior nível que nesse caso foi uma constante.

## Caso 2
~~~
int a = 10;                     // 1
int x = 1;                      // 1
for(int c = a; c > 0; c--) {    // n + 1
    x = x * c;                  // 1
}
1 + 1 +((n + 1) * 1) => 2 + (n + 1) => 2n + 2 => O(n)
~~~
Aqui temos também um calculo, mas veja que agora temos um loop, o loop vai depender do valor das variáveis que estão sendo manipuladas, estamos decrementando *"c"* em relação a *"a"*.

Ao calcular a complexidade você pode ficar nervoso com o resultado (2n + 2), mas antes que eu possa explicar o resultado vamos por partes, sobre o *"1"* é o mesmo que do exemplo anterior, porem agora temos um for cuja o calculo foi n + 1, para explicar porque disso primeiro vamos destrinchar o que é um for.

~~~
// Podemos escrever um "for" de forma explicita assim
int c = a;          // 1
while(c > 0) {      // n
    // Faz algo
    c--;            // 1
}
// No fim temos 
// 1 + n * 1 = n + 1
~~~

O valor do loop (n) se multiplica com o que tem no corpo do operador, o valor *"n"* é a quantidade de interações, como em alguns casos não sabemos o numero exato então determinamos que é uma variável que no caso é *"n"*. 

No fim temos o resultado 2n + 2, pegando o maior nível temos O(n), ou seja o tempo de execução é uma curva linear.

## Caso 3
~~~
int a = 10;                         // 1
int b = 20;                         // 1
int x = 1;                          // 1
for(int c = a; c > 0; c--) {        // n + 1
    for(int d = b; d > 0; d--) {    // n + 1
        x = x * c + d;              // 1
    }
}
// 1 + 1 + 1 + (n + 1 * ((n + 1) * 1)) => 3 + (n + 1 * (n + 1))
// => 3 + (n² + 2n + 2) => 3n² + 6n + 6 => O(n²)
~~~

Neste caso temos o maior nível como O(n²), ou seja é uma curva exponencial. Temos outros tipos de complexidade como mostra a imagem a seguir:

<center>

![Tipos de complexidade](./img/tipos%20de%20complexidade.png)

</center>

Vamos abordar o calculo das outras a medidas que avançamos nos estudos de estruturas como arvores por exemplo.