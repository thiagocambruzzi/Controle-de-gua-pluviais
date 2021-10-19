#include <stdio.h>
// inicio da fun��o principal
int main() {

	// declara��o de vari�veis iniciais
	int gasto[12];
	int chuva[12];
	int reservatorio = 0;
	int reservatorio_max = 0;
	int i = 0;

	// declara��o array de char que sera usada na entrada das chuvas e dos gastos por m�s
	char meses[12][100] = { "Janeiro", "Fevereiro", "Mar�o", "Abril",
	 "Maio", "Junho", "Julho", "Agosto", "Setembro",
	"Outubro", "Novembro", "Dezembro" };

	//variavel para exibi�ao dos meses do ano no relat�rio final
	char mes_abreviado[12][100] = {
   "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez" };

	// garante que a entrada do usuario seja maior que zero
	while (reservatorio_max == 0)
	{
		printf("\nCadastro do reservatorio");
		printf("\n\nQual a capacidade m�xima do reservat�rio em milimetros:");

		//inserir a capacidade de agua do reservatorio
		scanf_s("%i", &reservatorio_max);
	}

	//for que recebera o valor mensal da chuva
	for (i = 0; i < 12; i++)
	{
		printf("\nEntre com a chuva em milimetros de %s:", meses[i]);

		//inserir o valor mensal da chuva
		scanf_s("%i", &chuva[i]);

		printf("Entre com a �gua gasta em milimetros de %s:", meses[i]);

		//inserir o valor mensal do gasto de agua
		scanf_s("%i", &gasto[i]);
	}
	printf("\n\nCapacidade do reservat�rio em milimetros %i", reservatorio_max);
	printf("\n\nM�s | N�vel do reservat�rio\n");

	//for que exibe o relatorio do reservat�rio durante o ano
	for (i = 0; i < 12; i++)
	{
		printf("\n%s ", mes_abreviado[i]);

		//registra a quantidade de chuva do mes ao reservat�rio
		reservatorio = chuva[i];

		//subtrai o gasto de agua do mes
		reservatorio -= gasto[i];

		//verifica se o reservat�rio esta cheio
		if (reservatorio >= reservatorio_max)
		{

			//reservatorio no nivel maximo de agua pra caso ele seja maior que o limite
			reservatorio = reservatorio_max;
			printf(" | Cheio");
		}

		//verifica se o reservat�rio esta vazio
		else if (reservatorio <= 0)
		{

			//seta a variavel o reservat�rio nivel 0 de agua pra caso ele seja menor que 0
			reservatorio = 0;
			printf(" | Vazio");
		}

		//caso contrario, exibe o nivel de agua se o reservat�rio nao estiver cheio ou vazio
		else
		{
			printf(" | %i", reservatorio);
			printf("mm");
		}
	}
	printf("\n");
	return 0;
}
