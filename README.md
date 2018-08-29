https://thispointer.com/difference-between-vector-and-list-in-c/
######################################################################################
Aqui estão algumas anotações que eu fiz sobre array,vector e list
########################################################################################

##########
std::array
##########

Ele tem semântica igual ao array normal do C, mas é uma forma melhor de usar no C++ quando precisa de uma sequência de objetos de forma contígua e de tamanho fixo. Obviamente ele não decai para ponteiro como ocorre com o array de C.

O acesso ocorre em complexidade O(1). Não pode inserir ou deletar, a não ser que crie outro array, mas se precisar fazer isso provavelmente ela é a estrutura errada.

Eu falo que em C++ deve-se programar em C++ e deixar de lado tudo o que existe em C. Uma boa aplicação em C++ aproveitará melhor os recursos dessa estrutura do que do array bruto do C, principalmente por guardar seu tamanho. Ele não deixa nada a desejar em relação ao mecanismo do C, e pode ser usado com vários algoritmos do C++.

###########
std::vector
###########

É como um array, a primeira grande diferença é que ele permite mudar seu tamanho. Quando precisa mudar o tamanho há um custo de processamento, mas há técnicas para evitar que o tamanho seja mudado com a mesma frequência que a necessidade de mudança, em compensação há algum desperdício de memória quando nem toda área reservada é usada.

A segunda grande diferença é que ele é um tipo por referência por padrão. Então mesmo tendo um custo de acesso O(1) é um pouco mais lento acessar um elemento nele do que no std:array que não possui essa indireção para chegar nos dados.

O acesso aos elementos pode ser feito de forma segura. O custo (complexidade) das operações (inserir e deletar) é o mesmo do std:array, mas tem métodos prontos para fazer por você e cuidar que tudo funcione, inclusive ele invalida iteradores se alguma operação torna seu uso inválido. Todo gerenciamento é por conta dele.

É compatível com o std::array.

Há a recomendação de usá-lo até que tenha um motivo para usar outra forma.

#########
std::list
#########

É uma lista duplamente ligada. Além de poder manipular o tamanho, é fácil inserir ou deletar elementos em qualquer ponto da lista. Mas para acessar seus membros tem um custo O(N), o que pode criar uma dificuldade para inserir ou deletar se não souber o ponto exato onde deve ser feita a operação, afinal ele não tem um índice em O(1).


Ela não é alocada continuamente e há uma overhead de memória para gerenciar os nós. O processador não gosta muito deste tipo de estrutura e algumas otimizações podem não ser aproveitadas.

Alterações na sua estrutura não afetam iteradores.

Se precisar dele como se fosse um std::array é necessário converter.

#############
Resumidamente
#############
A lista armazena elementos numa localização de memória não contígua, isto é, utiliza internamente uma lista duplamente ligada.
Considerando que, o vetor armazena elementos em localizações de memória contíguas como uma matriz.

##########
Outras diferenças entre a list e o vector
##########
1.) Inserção e Exclusão

Inserção e exclusão na lista é muito eficiente em relação ao vetor porque para inserir um elemento na lista no início, final ou meio, internamente apenas alguns ponteiros são trocados.

Considerando que, na inserção de vetor e exclusão no início ou no meio fará com que todos os elementos mudem por um. Além disso, se houver memória contígua insuficiente no vetor no momento da inserção, uma nova memória contígua será alocada e todos os elementos serão copiados nela.

Portanto, a inserção e a exclusão na lista são muito eficientes que o vetor em c ++.
2.) Acesso Aleatório:

Como Lista é implementada internamente como lista duplamente vinculada, portanto, nenhum acesso aleatório é possível na Lista. Isso significa que, para acessar o 15º elemento na lista, precisamos iterar pelos primeiros 14 elementos da lista, um por um.

Considerando que, o vetor armazena elementos em locais de memória contíguos como uma matriz. Por conseguinte, no vector, o acesso aleatório é possível, isto é, podemos aceder directamente ao 15º elemento no vector utilizando o operador [], isto é,

std :: vector <int> vec (20);
vec [15] = 10;


Portanto, não podemos usar std :: list com algum dos algoritmos STL que precisam dos operadores de acesso aleatório como std :: sort.
3.) Invalidação do Iterador

A exclusão ou inserção de um elemento na Lista não invalida nenhum iterador, pois durante a inserção e exclusão nenhum elemento é movido de sua posição apenas alguns ponteiros são alterados.

 

Considerando que, na inserção de vetor e exclusão pode invalidar os iteradores. Para mais detalhes sobre Invalidação de Iteradores de Vetores, consulte este artigo, por exemplo.

Invalidação de std :: vector e Iterator
4.) Funções especiais de membro

Como std :: list não fornece acesso aleatório, muitos algoritmos STL que usam Iteradores de Acesso Aleatório não podem ser usados ​​com List. Portanto, o std :: list fornece algumas funções extras para sorting, splicing, remoção de elementos e identificação de elementos exclusivos.

O vetor fornece o acesso aleatório e, portanto, pode ser usado com algoritmos STL que usam Iteradores de Acesso Aleatório.
(STL = Standard Template Library)
