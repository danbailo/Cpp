https://thispointer.com/difference-between-vector-and-list-in-c/


std::array

Ele tem semântica igual ao array normal do C, mas é uma forma melhor de usar no C++ quando precisa de uma sequência de objetos de forma contígua e de tamanho fixo. Obviamente ele não decai para ponteiro como ocorre com o array de C.

O acesso ocorre em complexidade O(1). Não pode inserir ou deletar, a não ser que crie outro array, mas se precisar fazer isso provavelmente ela é a estrutura errada.

Eu falo que em C++ deve-se programar em C++ e deixar de lado tudo o que existe em C. Uma boa aplicação em C++ aproveitará melhor os recursos dessa estrutura do que do array bruto do C, principalmente por guardar seu tamanho. Ele não deixa nada a desejar em relação ao mecanismo do C, e pode ser usado com vários algoritmos do C++.
std::vector

É como um array, a primeira grande diferença é que ele permite mudar seu tamanho. Quando precisa mudar o tamanho há um custo de processamento, mas há técnicas para evitar que o tamanho seja mudado com a mesma frequência que a necessidade de mudança, em compensação há algum desperdício de memória quando nem toda área reservada é usada.

A segunda grande diferença é que ele é um tipo por referência por padrão. Então mesmo tendo um custo de acesso O(1) é um pouco mais lento acessar um elemento nele do que no std:array que não possui essa indireção para chegar nos dados.

O acesso aos elementos pode ser feito de forma segura. O custo (complexidade) das operações (inserir e deletar) é o mesmo do std:array, mas tem métodos prontos para fazer por você e cuidar que tudo funcione, inclusive ele invalida iteradores se alguma operação torna seu uso inválido. Todo gerenciamento é por conta dele.

É compatível com o std::array.

Há a recomendação de usá-lo até que tenha um motivo para usar outra forma.
std::list

É uma lista duplamente ligada. Além de poder manipular o tamanho, é fácil inserir ou deletar elementos em qualquer ponto da lista. Mas para acessar seus membros tem um custo O(N), o que pode criar uma dificuldade para inserir ou deletar se não souber o ponto exato onde deve ser feita a operação, afinal ele não tem um índice em O(1).

Ela não é alocada continuamente e há uma overhead de memória para gerenciar os nós. O processador não gosta muito deste tipo de estrutura e algumas otimizações podem não ser aproveitadas.

Alterações na sua estrutura não afetam iteradores.

Se precisar dele como se fosse um std::array é necessário converter.

