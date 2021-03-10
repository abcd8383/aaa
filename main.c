
#include <stdio.h>
struct tel{
	char[20] tel;
	char[20] name;
};
struct tel arr[10];
int index = 0;
void AddTel(){
	if(index>9){
		printf("저장공간이 부족합니다");
		return;
	}
	printf("전화번호 입력:");
	scanf("%s",arr[index].tel);
	printf("이름 입력:");
	scanf("%s",arr[index].name);
	index++;
}

void DeleteTel(){
	if(index==0){
		printf("저장된 연락처가 없습니다.");
		return;
	}
	char[20] tel;
	printf("삭제할 전화번호 입력:");
	scanf("%s",tel);
	int i;
	for(i=0; i<index; i++){
		if(strcmp(arr[i].tel,tel)==0){
			int j;
			for(j=i;j<index-1;j++){
				arr[j] = arr[j+1];
			index--;
			printf("정상적으로 삭제되었습니다.");
			return;			
			}
		}
	}

}
void UpdateTel(){
	if(index==0){
		printf("저장된 연락처가 없습니다.");
		return;
	}
	char[20] tel;
	char[20] tel1;
	char[20] name;
	printf("수정할 전화번호 입력:");
	scanf("%s",tel);
	printf("변경할 이름 입력:");
	scanf("%s",tel1);

	printf("변경할 전화번호 입력:");
	scanf("%s",name);
	int i;
	for(i=0; i<index; i++){
		if(strcmp(arr[i].tel,tel)==0){
			arr[i].tel=tel1;
			arr[i].name=name;
			printf("정상적으로 수정되었습니다.");
			return;			
		}
		
	}

}

void SearchTel(){
	if(index==0){
		printf("현재 등록된 전화부가 없습니다");
	return;		
	}
	char name[20];
	printf("검색할 이름 입력");
	scanr("%s",name);
		for(i=0; i<index; i++){
		if(strcmp(arr[i].name,name)==0){
			
			printf("전화번호:%s",arr[i].tel);
			return;			
		}
		
	}
	
}
void main(){
	int num;
	while(true){
		printf("원하는 메뉴 선택");
		printf("1.등록, 2. 검색, 3. 삭제, 4. 수정");
		scanf("%d",&num);
		switch(num){
			case 1:
			AddTel();
			break;
			case 2:
			SearchTel();
			break;
			case 3:
			DeleteTel();
			break;
			case 4:
			UpdateTel();
			break;
		}
	}
}
