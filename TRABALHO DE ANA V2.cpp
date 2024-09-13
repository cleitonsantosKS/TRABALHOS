// TRABALHO DE ANA V2

/* 1) Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles
anunciando um bônus especial. Faça um programa que leia o valor das compras destes 15
clientes. Calcule e mostre um bônus de 10% se o valor das compras for menor que R$ 1.000,
e 15% caso seja maior que R$ 1.000.*/ 

#include <iostream>
#include <string>

using namespace std;

    int main ()
    {
        int X; // para armazenar o numero de vetores "Numero de clientes" 
        
        cout << "DIGITE O NUMERO DE CLIENTES:" << endl;
        cin>>X;
        
        string cliente[X];
        float valor[X];
        
        for (int i=0; i<X; i++) // esse laco eu criei para que adicione o numero referente ao cliente
        {
          cliente[i] = "Cliente " +  to_string (i + 1);
        }
        
        for (int i=0; i<X; i++)
        {
             cout << cliente[i]<<endl;
             cin>>valor[i];
        }
        
        for (int i=0; i<X; i++)
        {
             cout<<cliente[i]<< " = "<< valor[i]<< endl;
        }
        
        for (int i=0; i<X; i++)
        {   
            if (valor[i]<1000)
            {
             cout<<cliente[i]<< " = "<< valor[i]<<" BONUS DE 10%"<< endl;
            }
            
            else
            {
             cout<<cliente[i]<< " = "<< valor[i]<<" BONUS DE 15%"<< endl;  
            }
        }
        
        
        return 0;
    }


/* 2) Faça um programa que leia o tamanho do conjunto de dados a serem lidos do teclado. Estes
dados são: idade, peso, altura. Calcule e mostre:
● a média das idades das pessoas;
● a quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm;
● A porcentagem entre a quantidade de pessoas com idade entre 10 e 30 anos, com a
quantidade de pessoas que medem mais que 1m90cm. */

#include <iostream>
#include <string>

using namespace std;

    int main ()
    {
        int X; // para armazenar o numero de vetores "Numero de clientes" 
        
        cout << "DIGITE O NUMERO DE PESSOAS:" << endl;
        cin>>X;
        
        string pessoas[X];
        int idade[X];
        float peso[X], altura[X];
        
        int cont1=0; // idade contador
        int cont2=0; // a quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm
        float cont3=0; // pessoas com idade entre 10 e 30 anos //contadores declarados em float por conta da divisão futura
        float cont4=0; // quantidade de pessoas que medem mais que 1m90cm. //contadores declarados em float por conta da divisão futura
        
        for (int i=0; i<X; i++) 
        {
           cout<<"digite o nome da " << (i + 1) << "°: " <<endl; // iprime a pergunta do nome das pessias para armazenar no indice da variavel
           cin>>pessoas[i];
           
           pessoas[i] = to_string (i + 1) + "° " + pessoas[i];
        }
        
        for (int i=0; i<X; i++) 
        {
           cout<<"qual a idade de "<<pessoas[i]<<endl;
           cin>>idade[i];
           
           cout<<"qual o peso de "<<pessoas[i]<<endl;
           cin>>peso[i];
           
           cout<<"qual a altura de "<<pessoas[i]<<endl;
           cin>>altura[i];
           
           cont1 = cont1 + idade[i];
           
        }
        
        for (int i=0; i<X; i++) 
        {
            if (peso[i] > 90 && altura[i] < 1.50)
            {
                cont2++;
            }
            
            if (idade[i] > 10 && idade[i] < 30)
            {
                cont3++;
            }
            
            if (altura[i] > 1.90)
            {
                cont4++;
            }
        }
        
        
        // LACO DE TESTE DE VETORES
        /*
        for (int i=0; i<X; i++) 
        {
           cout<<pessoas[i]<<endl;
           cout<<idade[i]<<endl;
           cout<<peso[i]<<endl;
           cout<<altura[i]<<endl;
           
           
        }
        */
        
        // RESPOSTAS DA ATIVIDADE
        
        float porcentagem1, porcentagem2, mediaI ;
        mediaI = cont1 / X;
        
        porcentagem1 =( cont3 / X) * 100 ; //contadores declarados em float por conta da divisão 
        porcentagem2 =( cont4 / X) * 100 ; //contadores declarados em float por conta da divisão 
        
        cout<<"SOMA DAS IDADES = "<<cont1<<endl;
         cout<<"MEDIA DAS IDADES = "<<mediaI<<endl;
        cout<<" quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm = "<<cont2<<endl;
        cout<<" pessoas com idade entre 10 e 30 anos = "<<cont3<<" = "<<porcentagem1<<"% "<<endl;
        cout<<"  quantidade de pessoas que medem mais que 1m90cm. = "<<cont4<<" = "<<porcentagem2<<"% "<<endl;
        
        
        
        
        
       return 0;
       
    }


  /* 3) Faça um programa que apresente um menu com as seguintes opções:

● média aritmética
● média ponderada
● sair do programa

Leia a opção escolhida pelo usuário e com base nela:

● média aritmética: ao escolher esta opção, solicite duas notas, calcule e
mostre a média aritmética na tela.
● média ponderada: ao escolher esta opção, solicite três notas e seus
respectivos pesos. Calcule a média ponderada e mostre o valor na tela.
● sair do programa: o laço de repetição se encerra.*/

#include <iostream>

using namespace std;

    int main ()
    {
        int X;
        cout<<"SELECIONE O MENU \n"
               "(1) = média aritmética\n"
               "(2) = média ponderada\n"
               "(0) = sair do programa\n"<<endl;
               
        cin>>X; 
        
        while (X != 0) // ou while (X > 0)
        {
            
            
           switch (X)
           {
               case 1:
                {
                   cout<<" média aritmética"<<endl;
                   float valor[2];
                   float contador1=0; // armazena as somas dos valores
                   float media;
                   
                  for (int i =0 ; i<2; i++)
                    {
                     cout<< "digite o "<<i + 1 << "° valor" <<endl;
                     cin>>valor[i];
                     
                     contador1 = contador1 + valor[i];
                     
                    }
                    
                    media = contador1 / 2;
                    
                    cout<<"média aritmética = "<<media<<"\n"<<endl; // o \n e para da espaco para ficar mais organizado!
                    
                    break;
                }
               
               case 2:
                {
                    cout<<" média ponderada"<<endl;
                    float valor[3];
                    int peso[3];
                   float contador1=0; // multiplica a nota pelo peso para armazenar as somas do resultado
                   float contador2=0; // soma os pesos
                   float media;
                   
                  for (int i =0 ; i<3; i++)
                    {
                     cout<< "digite o "<<i + 1 << "° valor" <<endl;
                     cin>>valor[i];
                     
                     cout<< "digite o peso de "<< valor[i] <<endl;
                     cin>>peso[i];
                     
                     contador1 =contador1 + ( valor[i] * peso[i] ); // multiplica a nota pelo peso e soma as multiplicacão
                     contador2 = contador2 + peso[i];  // soma os pesos
                    // contador3 = contador1 + contador1; // soma todas as notas multiplicadas pelos pesos
                     
                     
                    }
                    
                    media = contador1 / contador2;
                    
                    cout<<" média ponderada = "<<media<<"\n"<<endl;
                    
                    
                    break;
                }
               
               default:
                    cout<<"NUMERO INVALIDO\n"<<endl;
               
           }
           
           // repete a opsão de escolha do menu
           cout<<"SELECIONE O MENU \n"
               "(1) = média aritmética\n"
               "(2) = média ponderada\n"
               "(0) = sair do programa\n"<<endl;
               
            cin>>X;
        }
        
        
        if (X==0)
        {
          cout<<"SAINDO"<<endl;  
        }
        
        //TESTE DE SAIDA
        
      //  cout<<X<<endl;
        
        return 0;
    }


/* 4) Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No total
existem 10 atletas. Em cada série, e para cada atleta, os 05 saltos devem ser lidos do
teclado, sendo necessário, calcular a média alcançada por cada um deles. Você deve
armazenar a maior e a menor média. Para identificação de cada atleta, considere que cada
um deles recebe um código iniciado de 1. Logo o seu programa deve em cada execução do
laço:

Leitura da série do candidato 1:
1.5
6.5
3
4.75
5.2
Média do candidato 1: 4.19
Leitura da série do candidato 2:
2
2
2
2
2
Média do candidato 2: 2
Só ao final você deve mostrar o campeão e o desclassificado deste campeonato. */

#include <iostream>
#include <string>

using namespace std;

    int main ()
    {
        int X; // para armazenar o número de vetores "Numero de candidatos" 
        
        cout << "DIGITE O NÚMERO DE CANDIDATOS:" << endl;
        cin>>X;
        
        string candidato[X];
        float media[X];
        
        float valor[5];
        
        for (int i=0; i<X; i++) // esse laço eu criei para adicionar o número referente ao candidato
        {
          candidato[i] = "candidato_"  +  to_string (i + 1);
        }
        
        for (int i=0; i<X; i++)
        
        {
            
            cout <<candidato[i]<<endl;
            
            float cont=0;
            
            
            for (int j=0; j<5; j++) //coleta os valores de cada salto dentro do laco de cada candidato
            {
                 cout<<j+1<< "° salto"<<endl;
                 cin>>valor[j];
                 
                 cont=cont+valor[j];
            }
            
            media[i] = cont / 5;
        }
        
       
        
        float indice_maior = media[0];
        float indice_menor = media[0];
        int vetor_X; //Armazena a posição do índice do vetor de maior média
        int vetor_Y; //Armazena a posição do índice do vetor de menor média
        
         for (int i=0; i<X; i++)
        {   
            if (indice_maior<media[i]) // compara as médias e Armazena a maior
            {
             indice_maior = media[i];
             vetor_X=i; // Armazena a posição do índice maior
             
            }
            
            if (indice_menor>media[i]) // compara as médias e Armazena a menor
            {
             indice_menor = media[i];
             vetor_Y=i;  // Armazena a posição do índice maior
             
            }
        }
        
        
       cout<<"O "<<candidato[vetor_X]<<" é campeão com média = "<<indice_maior<<endl;
       
       cout<<"O "<<candidato[vetor_Y]<<" é desclassificado com média = "<<indice_menor<<endl;
       
        
        return 0;
    }


/* 5) Desenvolva um programa que faça a tabuada de um número qualquer inteiro que será
digitado pelo usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em
10, o valor inicial e final devem ser informados também pelo usuário, conforme exemplo
abaixo: */

#include <iostream>

using namespace std;

    int main ()
    {
       int tabuada, inicio, fim;
       
       cout<<"Montar a tabuada de: "<<endl;
       cin>>tabuada;
       cout<<"começar por: "<<endl;
       cin>>inicio;
       cout<<"Terminar em: "<<endl;
       cin>>fim;
       
      int N = fim - inicio + 1 ; // numerodecalculos
       
       cout<<"Vou montar a tabuada de "<<tabuada<<" iniciando em "<<inicio<<" Terminando em "<<fim<<endl;
      
       for (int i=0; i<N; i++)
       {
           cout<<inicio + i <<" X "<<tabuada<<" = "<<(inicio+i)*tabuada<<endl;
          
       }
       
       
       //TESTE SAIDA RESULTADO DE N
       
      // std::cout << N << std::endl;
       
        
        
        return 0;
    }


/* 6) Faça um programa em C++ para ler um número real e exibir uma tabela em que o número
 apareça multiplicado até 200, sendo 10 em cada linha. Esta tabela é útil para deixar afixada
 emlojas de Xerox, por exemplo: */


#include <iostream>

using namespace std;

    int main ()
    {
       float numero;
       
       cout<<"Montar a tabela de: "<<endl;
       cin>>numero;
      
     
       
       cout<<"Vou montar a tabela de "<<numero<<"multiplicado Até 200"<<endl;
      
     int contador=0;
      
       for (int i=0; i<200; i++)
       {
           
           
           cout<<" "<<i+1<<" = "<<(1+i)*numero;
           
          
               // Verifica se i + 1 (número atual) é divisível por 10
            if ((i + 1) % 10 == 0) // sendo 10 em cada linha.
            {
                cout <<"\n"<< endl; // Adiciona uma nova linha
            }
            else
            {
                cout << " | "; // Adiciona um separador
            }
       }
       
        
        return 0;
    }




/* 7) Um determinado material radioativo perde metade de sua
massa a cada 50 segundos. Dada a massa inicial,
em gramas, fazer um programa em C++ que calcule
o tempo necessário para que essa massa se 
torne menor que 0,5 grama. O programa em C deve escrever a
massa inicial, a massa final e o tempo calculado em horas,
minutos e segundos. Faça com while.

*/

#include <iostream>

using namespace std;

    int main ()
    {
        float massai=0;
        int segundos=0;
        float massaf=0;
        
         cout << "Digite a massa inicial em gramas: ";
         cin >> massai;
         
          massaf=massai;
        
        while (massaf>=0.5)
        {
           
          
           
            massaf= massaf / 2;
             segundos = segundos+50;
             
         // cout<< segundos << massa << endl;
        }
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segundosRestantes = segundos % 60;
        
        
    cout << "Massa inicial: " << massai<<"g"<< endl; 
    cout << "Massa final: " << massaf << " g" << endl;
    cout << "Tempo necessário: " << horas << " horas, " << minutos << " minutos, " << segundosRestantes << " segundos" << endl;
        
        return 0;
    }

/*
8) Refaça o exercício anterior utilizando o laço do while e responda: 
a) o que acontece se o usuário informar a massa inicial como 0.5? após 1 ciclo A condição do laço (massa >= 0.5) não será mais verdadeira,
pois a nova massa é será 0.25, que é menor que 0.5. Assim, o laço será encerrado.


9) Faça um programa que leia um número n e imprima se ele é primo ou não. (um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é primo!!!) 

*/
#include<iostream>

using namespace std;
int main(){
	
	int n;
	cout<<" Digite um numero: "<<endl;
	cin>>n;
	
	if(n==1){
		cout<<"O número 1 não é primo!!!!"<<endl;
	}
	
	for(int i=2;i<=n; i++){
	
		if(n%i==0){
			cout<<" o numero nao e primo! "<<endl;
			break;
		}
		
		
		else{
			cout<<" o numero e primo! "<<endl;
			break;
		}
    }
	
	return 0;
}

/*

10) Escrever um algoritmo que leia uma quantidade desconhecida 
de números e conte quantos deles estão nos seguintes intervalos:
[0-25], [26-50], [51-75] e [76-100].
A entrada de dados deve terminar quando for lido um número negativo. 
*/
#include<iostream>

using namespace std;
int main()
{
int n, cont=0, cont1=0, cont2=0, cont3=0;

    while( n>=0)
    {
        cout<<" Digite um numero: "<<endl;
        cin>>n;
        	if( n>=0 && n<=25)
        {
          cont++;
        }
        	else if( n>=26 && n<=50)
        {
           cont1++;
        }
        	else if( n>=51 && n<=75)
        {
            cont2++;
        }
        	else if( n>=76 && n<=100)
        {
            cont3++;
        }
    }
    
    cout<<" nos intervalos de 0 a 25 estão: "<<cont<<" numeros. "<<endl;
cout<<" nos intervalos de 26 a 50 estão: "<<cont1<<" numeros. "<<endl;
cout<<" nos intervalos de 51 a 75 estão: "<<cont2<<" numeros. "<<endl;
cout<<" nos intervalos de 76 a 100 estão: "<<cont3<<" numeros. "<<endl;
return 0;
}

/*



11) Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o "número mágico". O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou menor que o número mágico e contar o número de tentativas. Quando o usuário conseguir acertar o número o programa deverá classificar o usuário como: 
a. De 1 a 3 tentativas: muito sortudo 
b. De 4 a 6 tentativas: sortudo 
c. De 7 a 10 tentativas: normal 
d. > 10 tentativas: tente novamente 

*/

#include <iostream>
#include <cstdlib>  // Para rand() e srand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios
    srand(static_cast<unsigned int>(time(0)));

    // Sorteia um número aleatório entre 0 e 500
    int numeroMagico = rand() % 501;

    int tentativa;
    int numeroTentativas = 0;
    bool acertou = false;

    cout << "Adivinhe o número mágico (entre 0 e 500): ";

    // Loop principal para o jogo
    while (!acertou) {
        cin >> tentativa;
        numeroTentativas++;

        if (tentativa < numeroMagico) {
            cout << "O número mágico é maior. Tente novamente: ";
        } else if (tentativa > numeroMagico) {
            cout << "O número mágico é menor. Tente novamente: ";
        } else {
            acertou = true;
            cout << "Parabéns! Você acertou o número mágico!" << endl;
        }
    }

    // Classificação com base no número de tentativas
    cout << "Número de tentativas: " << numeroTentativas << endl;
    if (numeroTentativas <= 3) {
        cout << "Muito sortudo!" << endl;
    } else if (numeroTentativas <= 6) {
        cout << "Sortudo!" << endl;
    } else if (numeroTentativas <= 10) {
        cout << "Normal!" << endl;
    } else {
        cout << "Tente novamente!" << endl;
    }

    return 0;
}

/*
12) Chico tem 1,50 metro e cresce 2 centímetros por ano,
enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
Construa um programa que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico.
*/

#include<iostream>

using namespace std;

int main()
{
    
    float   chico=1.50, ze=1.10;
    int cont=0;
    
        while( ze<=chico)
        {
            chico = chico + 0.02;
            ze = ze + 0.03;
            
            cont ++;
        }
        
        cout<<chico<<endl;
        cout<<ze<<endl;
        cout<<cont <<" Anos"<<endl;
        
    return 0;
}

