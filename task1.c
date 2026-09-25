#include <stdio.h>

int main() {
	int score = 0;
	while(score != 1) {
		int touchdowns = 0;
		int fieldGoals = 0;
		int safeties = 0;
		int touchdownsPlusTwo = 0;
		int touchdownsPlusOne = 0;
		printf("Enter the NFL score (Enter 1 to stop): ");
		scanf("%d", &score);
		if(score == 1) {
			break;
		} else if(score < 0) {
			printf("The score cannot be negative\n");
		} else {
			int realScore = score;
			printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
			touchdownsPlusTwo = (score / 8) + 1;
			for(int i = touchdownsPlusTwo; i > 0; i--) {
				touchdownsPlusTwo--;
				score = realScore - (touchdownsPlusTwo * 8);
				touchdownsPlusOne = (score / 7) + 1;
				int scoreAtI = score;
				for(int j = touchdownsPlusOne; j > 0; j--) {
					touchdownsPlusOne--;
					score = scoreAtI - (touchdownsPlusOne * 7);
					touchdowns = (score / 6) + 1;
					int scoreAtJ = score;
					for(int k = touchdowns; k > 0; k--) {
						touchdowns--;
						score = scoreAtJ - (touchdowns * 6);
						fieldGoals = (score / 3) + 1;
						int scoreAtK = score;
						for(int l = fieldGoals; l > 0; l--) {
							fieldGoals--;
							score = scoreAtK - (fieldGoals * 3);
							safeties = (score / 2) + 1;
							int scoreAtL = score;
							for(int m = safeties; m > 0; m--) {
								safeties--;
								score = scoreAtL - (safeties * 2);
								if(score == 0) {
									printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", touchdownsPlusTwo, touchdownsPlusOne, touchdowns, fieldGoals, safeties);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
