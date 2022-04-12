#include <stdio.h>

int main() {
	int currencyNUM = 0;
	int inputWon = 0;
	int returnWon = 0; 
	int outputUSDFinal = 0;
	int outputJPYFinal= 0;
	int outputEURFinal = 0;
	int outputCNYFinal = 0;
	int outputGBPFinal = 0;
	int c500, c100, c50, c10;					
	float outputUSD = 0;
	float outputJPY = 0;
	float outputEUR = 0;
	float outputCNY = 0;
	float outputGBP = 0;
    
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
	outputUSD = inputWon / RATE_USD;
	outputUSDFinal = outputUSD;
	returnWon = outputUSD * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_USD / 100; 
	returnWon = returnWon / 10 * 10;
	printf("%d원 -> %d 달 러, 받을 동전%d원\n\n", inputWon, outputUSDFinal, returnWon);
	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;
    
	printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n\n", c500, c100, c50, c10);
	} else if (currencyNUM == 2) {
			// 원화 -> JPY 
	outputJPY = inputWon / RATE_JPY;
	outputJPYFinal = outputJPY * 100;
	returnWon = outputJPY * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_JPY / 100; 
	returnWon = returnWon / 10 * 10; 
	printf("%d원 -> %d 엔, 받을 동전%d원\n\n", inputWon, outputJPYFinal, returnWon);
	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;

	printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n\n", c500, c100, c50, c10);
	} else if (currencyNUM == 3) {
	// 원화 -> EUR	
    outputEUR = inputWon / RATE_EUR;
	outputEURFinal = outputEUR;
	returnWon = outputEUR * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100; 
	returnWon = returnWon / 10 * 10; 
	printf("%d원 -> %d 유로, 받을 동전%d원\n\n", inputWon, outputEURFinal, returnWon);
	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;

	printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n\n", c500, c100, c50, c10);
	
	}else if (currencyNUM == 4) {
		// 원화 -> CNY
    outputCNY = inputWon / RATE_CNY;
	outputCNYFinal = outputCNY;
	returnWon = outputCNY * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100; 
	returnWon = returnWon / 10 * 10; 
	printf("%d원 -> %d 위안, 받을 동전%d원\n\n", inputWon, outputCNYFinal, returnWon);
	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;

	printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n\n", c500, c100, c50, c10);
	}else if (currencyNUM == 5) {
	// 원화 -> GBP	
	outputGBP = inputWon / RATE_GBP;
	outputGBPFinal = outputGBP;
	returnWon = outputGBP * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_GBP / 100; 
	returnWon = returnWon / 10 * 10; 
	printf("%d원 -> %d 파운드, 받을 동전%d원\n\n", inputWon, outputGBPFinal, returnWon);
	c500 = returnWon/500; 
    returnWon = returnWon%500; 

    c100 = returnWon/100; 
    returnWon %= 100;     

    c50 = returnWon/50;    
    returnWon %= 50;       

    c10 = returnWon/10;    
    returnWon %= 10;

	printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n\n", c500, c100, c50, c10);
	}
	
	
	
	

	

    

	
	

	
	
	return 0; 

}
