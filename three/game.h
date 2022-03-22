#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);//��������
void DisplayBoard(char board[ROW][COL],int row,int col);//��ӡ����
void PlayerMove(char board[ROW][COL],int row,int col);//�������
void ComputerMove(char board[ROW][COL],int row,int col);//��������

//����ļ�������״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'E'
//����   - 'C'

char Iswin(char board[ROW][COL],int row,int col);//����Ƿ�Ӯ

#endif // GAME_H_INCLUDED
