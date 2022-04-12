#include <stdio.h>
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
	printf("환전을 원하는 원화 금액을 입력하세요 :");
	scanf("%d", &inputWon);
	do { 
	printf("환전을 원하는 나라를 선택하시오 (1:USD, 2:JPY, 3: EURO, 4: CNY, 5:GBP) :");
		scanf("%d", &currencyNUM);
	} while (currencyNUM < 1 || currencyNUM > 5 );
    
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 987.39;
	const float RATE_EUR = 1341.86;
	const float RATE_CNY = 193.24;
	const float RATE_GBP = 1604.76;
	if (currencyNUM == 1) {
			// 원화 -> USD 
		exchange(RATE_USD);
	} else if (currencyNUM == 2) {
			// 원화 -> JPY 
		exchange(RATE_JPY);
	} else if (currencyNUM == 3) {
	// 원화 -> EUR	
		exchange(RATE_EUR);
	} else if (currencyNUM == 4) {
		// 원화 -> CNY
		exchange(RATE_CNY);
	} else if (currencyNUM == 5) {
	// 원화 -> GBP	
		exchange(RATE_GBP);
	}
	printf("%d원 -> %d 유로, 받을 동전%d원\n\n", inputWon, outputFinal, returnWon);

	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;

	printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n\n", c500, c100, c50, c10);
	
	return 0; 

}
