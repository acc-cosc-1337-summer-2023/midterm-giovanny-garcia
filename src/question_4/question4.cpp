#include "question4.h"
using std::cout;
bool test_config()
{
    return true;
}
string transcribe_dna_into_rna(string dna)
{
    for(long unsigned int i = 0; i < dna.size(); i++)
    {
        if(dna[i] == 'T')
        {
            dna[i] = 'U';
        }
    }
    cout << dna << "\n";
    return dna;
}