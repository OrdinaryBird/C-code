
#include "game.h"
//������ʵ��
extern void InitBoard(char board[ROW][COL],int row,int col);

void menu()
{
    printf("           Menu           \n");
    printf("**************************\n");
    printf("*****1.begin   2.exit*****\n");
    printf("**************************\n");
}

void game()
{
    int ret;
    char board[ROW][COL] = {0};//��������

    InitBoard(board,ROW,COL);//��ʼ������

    DisplayBoard(board,ROW,COL);//��ӡ����

    while(1)//����
    {
        PlayerMove(board,ROW,COL);//�������
        DisplayBoard(board,ROW,COL);//��ӡ����
        ret = Iswin(board,ROW,COL);//�ж�����Ƿ�Ӯ
        if(ret != 'C')
        {
            break;
        }

        ComputerMove(board,ROW,COL);//��������
        DisplayBoard(board,ROW,COL);//��ӡ����
        ret = Iswin(board,ROW,COL);//�жϵ����Ƿ�Ӯ
        if(ret != 'C')
        {
            break;
        }
    }
    if(ret == '*')
        printf("���Ӯ��\n");
    else if(ret == '#')
        printf("����Ӯ��\n");
    else if(ret == 'E')
        printf("ƽ�֣�\n");
}

void begin()
{
    int input;
    srand((unsigned int)time(NULL));

    do{
        menu();
        printf("��ѡ��:>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("�˳�\n");
            break;
        default:
            printf("�������\n");
            break;
        }
    }while(input != 2);
}

int main()
{
    begin();
    return 0;
}
