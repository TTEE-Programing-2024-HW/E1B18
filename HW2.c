#include<stdio.h>
#include<stdlib.h>
int main(){
	/*�B�J1*/ 
	/*�ӤH����*/
	printf("�L�X���B��\n");
	                 puts(".~!!!!5J:");                   
                puts(":^~~?B#######BP5?~.");              
   puts(".^~!~~^^^~!7?7!~^~?YGB#########BY.");           
  puts("7?!~^^~~~!~^::.......:^!7?Y55PPGPP?^.");         
 puts("??...........:.................:::.^!7?7!~~^.");    
 puts("57.........~J~...^^...................::^~~!7?~"); 
 puts(":Y7^:..::^?Y^....!~....~~:....::.............:7?");
   puts("~?J?777GJ:........7?:PY^^...7~...^7:........^P.");
  puts(".J?!77~?Y..........^!~7!77........:?Y7~^:::^!Y!"); 
  puts("!5...:~7^..............::...........!G!7????7:");  
  puts(".7?!^:..............................~G!7???!");    
    puts(".^!P!.............................:~^^:.~G.");  
      puts(":P:...............................:^~7Y~");    
      puts("~5..............................^5?77^.");     
      puts("~G?7?!:.........................!P");         
     puts("75^::^7J:........................57");       
    puts(".P^.....:........................JY");       
     puts("Y7......::....................:JJ");           
     puts(".J?!~~~7YJ?!~^::............:!57");           
       puts(":~!!!~. :~!7??????JJ!...:?J7:");             
                     puts("....7G!::~P?");                
                          puts("^???J~");
	system("pause");
	system("cls");
	fflush(stdin); 					   
    /*�n�D�ϥΪ̿�J4�ӼƦr���K�X*/
   int a,b,c,d;
   int count=0; /*count���p�ܼ�*/
   printf("��J4�ӼƦr\n");
   while(count<3){ /*��while�j��A����Τ��J���T�K�X�γs��T����J���~�~�|����*/ 
    scanf("%d %d %d %d",&a,&b,&c,&d);
   	if(a==2&&b==0&&c==2&&d==4){ /*�P�_�Ʀr�K�X�O�_2024*/ 
   		printf("��J���T\n");
   		break;
	   }else{
	   	count++; /*�p�G��J���O2024�A�p�ܼ�+1*/ 
	   	printf("�K�X��J���~�A�Э��s��J\n");
	   }
    }
    if(count==3){ /*�p�ܼƥ[��3����*/ 
    	printf("�K�X�T����J���~�A�����{��\a\n");
    	return 0;
	}
	/*�B�J2*/ 
	system("pause");
	system("cls");
	fflush(stdin);
	printf("�L�X�D���\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.�e�X�����T���� /\n");
	printf("   /  B.��ܭ��k��    /\n");
    printf("  /   C.����         /\n");
    printf(" - - - - - - - - - - \n");
    /*�B�J3*/
    int A;
    printf("��JA�M���ù�\n");
    scanf("%c",&A);
    system("cls");
    getchar(); /*�q��J�w�İϤ�����U�@�Ӧr�šA�ñN�Ӧr�űq��J�w�İϤ��R��*/
	char ch;
	do{
    printf("��Ja��n���r��\n");
    scanf("%c",&ch);
    int i,j,rows; /*rows��ܦ��*/
	rows=ch-'a'+1;
	if(ch>'a'&&ch<'n'){ /*�P�_�r���d��*/ 
    for(i=rows;i>=1;i--){ /*�Ω󱱨��ơA�q�U��W*/ 
    	for(j=i;j<=rows;j++){ /*�Ω󱱨��Ƹ̪��r�żƶq�A�q�W��U*/
    		printf("%c",'a'+j-1); /*�L�X�Ӧ�Ʋz���r��*/ 
		}
		printf("\n");
	}
	printf("�L�X�D���\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.�e�X�����T���� /\n");
	printf("   /  B.��ܭ��k��    /\n");
    printf("  /   C.����         /\n");
    printf(" - - - - - - - - - - \n");
	}else{
		printf("�п�J���Ħr��\a\n");
	}
	}while(ch<'a'||ch >'n');
	getchar(); /*�q��J�w�İϤ�����U�@�Ӧr�šA�ñN�Ӧr�űq��J�w�İϤ��R��*/
	system("pause");
	system("cls");
	/*�B�J4*/
	int B;
	printf("��JB\n");
	scanf("%d",&B);
	getchar(); /*�q��J�w�İϤ�����U�@�Ӧr�šA�ñN�Ӧr�űq��J�w�İϤ��R��*/
	do{
	printf("��J1��9�����n\n");
	scanf("%d",&B);
	getchar(); /*�q��J�w�İϤ�����U�@�Ӧr�šA�ñN�Ӧr�űq��J�w�İϤ��R��*/
	if(B>=1&&B<=9){ /*�P�_�Ʀr�O�_�b���Ľd��*/ 
		int i,j;
		for(i=1;i<=B;i++){ /*��X���k��*/ 
			for(j=1;j<=B;j++){
				printf("%d*%d=%2d",i,j,i*j);
				} 
				printf("\n");	
	 }
	printf("�L�X�D���\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.�e�X�����T���� /\n");
	printf("   /  B.��ܭ��k��    /\n");
    printf("  /   C.����         /\n");
    printf(" - - - - - - - - - - \n");
	}else{
	   printf("�п�J���Ħr��\a\n");
	}}
	while(B<=1||B>=9);
	getchar(); /*�q��J�w�İϤ�����U�@�Ӧr�šA�ñN�Ӧr�űq��J�w�İϤ��R��*/
	system("pause");
	system("cls");
	/*�B�J5*/
	 char C;
    do{ /*�ϥ�do-while�j��ӧP�_����*/ 
        printf("Continue? (y/n):");
        scanf("%c",&C); 
        if(C=='y') {
        	printf("�L�X�D���\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.�e�X�����T���� /\n");
	printf("   /  B.��ܭ��k��    /\n");
    printf("  /   C.����         /\n");
    printf(" - - - - - - - - - - \n");
        }else if(C=='n'){
            return 0;
        }else{
            printf("���s��J\n");
        }
    } while(ch!='y'||ch!='n');
    return 0;
}
/*�߱o:�o���@�~��W���ٴƤ�A��F��h�ɶ��h�����A���M��F�ܤ[���ɶ��A�������ܦ����N�P�C
push�{���X��GitHub�W�B�J�ܽ����A�]�O�@�˪�F�ܤ[���ɶ��C*/ 
