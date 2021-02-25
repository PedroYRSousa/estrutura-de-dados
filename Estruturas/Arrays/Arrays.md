# Vetores e matrizes (Arrays)

Vetores e matrizes são estruturas fixas, elas não podem mudar de tamanho sem que sejam recriadas, tendo isso em mente elas são as estruturas mais básica que iremos trabalhas aqui.

Essas estruturas irão nos mostrar os fundamentos necessários para prosseguirmos.

## A - Vetor

Não podemos **Adicionar** e **Remover** elementos, mas podemos **Atualizar** e **Percorrer** o vetor.

### A.1 - Declarando
>Complexidade = O(1)

A primeira coisa que devemos ter é o tamanho do vetor. vamos definir a constante:
~~~
*"const int MAX_SIZE_ARRAY = 10;"*.
~~~

Declarando um vetor de forma dinâmica:
~~~
int *v = (int *)malloc(MAX_SIZE_ARRAY * sizeof(int));
// vetor-declarando.c
~~~

### A.2 - Alterando valor 
> Complexidade = O(1)

Podemos alterar o valor assim:
~~~
v[index] = value;
// vetor-alterando.c
~~~

### A.3 - Percorrendo
> Complexidade = O(n)

Podemos percorrer o vetor um um loop:
~~~
for(int index = 0; index < MAX_SIZE_ARRAY; index++) {
    printf("v[%d]: %d ", index, v[index]);
    printf("-> &%x\n", &v[index]);
}
// vetor-percorrendo.c
~~~

Aqui temos algo peculiar, veja que depois do "->" temos o endereço de memoria, quando percorrido observe que pula de 4 em 4 Bytes que é exatamente o tamanho do tipo int.

# B - Matriz

Também não podemos **Adicionar** e **Remover** elementos, mas podemos **Atualizar** e **Percorrer** a matriz, pois ela é apenas um vetor com mais dimensões.

### B.1 - Declarando
> Complexidade = O(n)

A primeira coisa que devemos ter é o tamanho e a quantidade de dimensões da matriz. vamos definir:
~~~
const int SIZE_ROW = 10;
const int SIZE_COLUMN = 5;
~~~

Declarando um vetor de forma dinâmica:
~~~
int **m = (int **)malloc(SIZE_ROW * sizeof(int *));
for(int rows = 0; rows < SIZE_ROW; rows++) {
    m[rows] = (int *)malloc(SIZE_COLUMN * sizeof(int))
}
// matriz-declarando.c
~~~

Veja que a complexidade subiu de uma constante para uma exponencial, pois temos a necessidade de percorrer todo um vetor para alocar sua segunda dimensão. Levando isso em conta, podemos dizer que para cada dimensão adicional a complexidade tende a O(n^(m-1)), sendo m a quantidade de dimensões.

### B.2 - Alterando valor 
> Complexidade = O(1)

Podemos alterar o valor assim:
~~~
m[row][column] = value;
// matriz-alterando.c
~~~

### B.3 - Percorrendo
> Complexidade = O(n²)

Podemos percorrer o vetor um loop dentro de outro loop:
~~~
for(int row = 0; row < SIZE_ROW; row++) {
    for(int collumn = 0; collumn < SIZE_COLUMN; collumn++) {
    printf("m[%d][%d]: %d ", row, column, m[row][column]);
    printf("-> &%x\n", &m[row][column]);
}}
// matriz-percorrendo.c
~~~

Agora veja que a complexidade subiu novamente, dessa vez podemos dizer que para cada dimensão temos: O(n^m)

# Conclusão

Veja que arrays são estruturas fixas, não podemos aumentar seu tamanho ou diminuir o mesmo, existem estruturas feitas para isso. Veja também que o momento que começamos a trabalhar com a necessidade de mais dimensões o custo do algorítimo começa a se tornar algo inviável. Você pode estar se perguntando:
> "Mas porque devo aprender isso?, afinal de contas ja existem bibliotecas e códigos já feitos sobre tudo isso."

A resposta é que sim em parte você esta certo, esse conhecimento no geral não vai te servir de muita coisa caso queira ser um programador mediano ou um usuário de ferramentas. Conhecer os fundamentos daquilo que se trabalha abre portas para solucionar problemas que frameworks e bibliotecas não irão.