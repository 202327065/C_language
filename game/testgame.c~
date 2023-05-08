#include <stdio.h>

int main()
{

	printf("적 캐릭터는 hp가 30 입니다.\n\n");
	printf("프로그램이 시작되면 다음과 같이 캐릭터 메이킹 화면을 구성해 주세요\n\n");
	printf("-------------------------------------------------------------------------------------------\n");
	printf("주인공의 공격력을 입력하세요: ");
	int attack_power;
        int enemy_hp=30;
	scanf("%d",&attack_power);
	printf("주인공은 공격력이 %d입니다.\n",attack_power);
	if (enemy_hp<=attack_power){
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",attack_power);
		printf("적의 잔여 HP : 0\n\n");
		printf("적을 물리쳤습니다.\n");
		printf("Happy End\n");
		printf("-------------------------------------------------------------------------------");
			
	}
	else{
	       printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",attack_power);
	       printf("적의 잔여 HP : %d\n",enemy_hp-attack_power);
	       printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
	       printf("Game Over\n");
	       printf("---------------------------------------------------------------------------------");
	

	return 0;
}
