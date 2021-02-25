# A - Vetores e matrizes (Arrays)

Vetores e matrizes são estruturas fixas, elas não podem mudar de tamanho sem que sejam recriadas, tendo isso em mente elas são as estruturas mais básica que iremos trabalhas aqui.

Essas estruturas irão nos mostrar os fundamentos necessários para prosseguirmos.

## A.1 - Vetor

Não podemos **Adicionar** e **Remover** elementos, mas podemos **Atualizar** e **Percorrer** o vetor.

### A.1.I - Declarando
>Complexidade = O(1)

A primeira coisa que devemos ter é o tamanho do vetor. vamos definir a constante *"const int MAX_SIZE_ARRAY = 10;"*.

Declarando um vetor de forma dinâmica:
> int *v = (int *)malloc(MAX_SIZE_ARRAY * sizeof(int));
>> vetor-declarando.c

### A.1.II - Alterando valor 
> Complexidade = O(1)

Podemos alterar o valor assim:
> v[index] = value;
>> Vetor-alterando.c

### A.1.III - Percorrendo
> Complexidade = O(n)

Podemos percorrer o vetor um um loop:
> for(int index = 0; index < MAX_SIZE_ARRAY; index++) {
>   printf("v[%d]: %d ", index, v[index]);
>   printf("-> &%x\n", &v[index]);
> }
>> vetor-percorrendo.c

Aqui temos algo peculiar, veja que depois do "->" temos o endereço de memoria, quando percorrido observe que pula de 4 em 4 Bytes que é exatamente o tamanho do tipo int.