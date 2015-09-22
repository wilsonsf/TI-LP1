template <typename T>
bool buscaSequencial(T *arranjo, T valor, int tamanho)
{
    if (tamanho == 0) 
    {
        return false;
    } 
    else if (arranjo[tamanho-1] == valor)
    {
        return true;
    } 
    else 
    {
        return buscaSequencial(arranjo, valor, tamanho-1);
    }
}

template <typename T>
bool buscaRecursiva(T *arranjo, T valor, int ini, int fim)
{
    if (ini > fim) 
    {
        return false;
    } 
    else if (fim >= ini)
    {
        int meio = (fim+ini)/2;
        if (arranjo[meio] == valor) 
        {
            return true;
        } 
        else if (arranjo[meio] > valor) 
        {
            return buscaRecursiva(arranjo,valor,ini, fim-1);
        } 
        else
        {
            return buscaRecursiva(arranjo,valor, ini+1, fim);
        }
    }
}