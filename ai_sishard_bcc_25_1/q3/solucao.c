// Seu código da funcao1_solucao
long funcao1_solucao(long a, long b){
    int vezes_divido = 0;
    while(a >= b){
        a = a/b;
        vezes_divido ++;
    }
    return vezes_divido;
}