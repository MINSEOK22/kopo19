#include <stdio.h>
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 987.39;
	const float RATE_EUR = 1341.86;
	const float RATE_CNY = 193.24;
	const float RATE_GBP = 1604.76; 
	
	int inputWon = 0;
	int returnWon = 0; 
	int outputFinal = 0;				
	float output = 0;
	 
	
int exchange(float a) {
	output = inputWon / a;
	outputFinal = output;
	returnWon = output * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * a / 100; 
	returnWon = returnWon / 10 * 10;
}

int main() { 
    int c500, c100, c50, c10;	
	int currencyNUM = 0;
	char *bill;
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� :");
	scanf("%d", &inputWon);
	do { 
	printf("ȯ���� ���ϴ� ���� �����Ͻÿ� (1:USD, 2:JPY, 3: EURO, 4: CNY, 5:GBP) :");
		scanf("%d", &currencyNUM);
	} while (currencyNUM < 1 || currencyNUM > 5 );
    
	if (currencyNUM == 1) {
			// ��ȭ -> USD 
		exchange(RATE_USD);
		bill = "�� ��"; 
	} else if (currencyNUM == 2) {
			// ��ȭ -> JPY 
		exchange(RATE_JPY);
		bill = "�� ȭ";
	} else if (currencyNUM == 3) {
	// ��ȭ -> EUR	
		exchange(RATE_EUR);
		bill = "�� ��";
	} else if (currencyNUM == 4) {
		// ��ȭ -> CNY
		exchange(RATE_CNY);
		bill = "�� ��";
	} else if (currencyNUM == 5) {
	// ��ȭ -> GBP	
		exchange(RATE_GBP);
		bill = "�� �� ��"; 
	}
	printf("%d�� -> %d %s, ���� ����%d��\n\n", inputWon, outputFinal, bill, returnWon);

	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;

	printf("500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��\n\n", c500, c100, c50, c10);
	
	return 0; 

}
