#include <stdio.h>
/*���������Ԃ�90���ł��B
�������ɂ킩��Ȃ�����(�֐�����include���Ȃ�)������΁A
�l�b�g��{�Œ��ׂĂ�����č\���܂���B
���̈Ӑ}�������ł��Ȃ��ꍇ�͐搶�Ɏ��₵�Ă�����č\���܂���B
���̐��k�Ɖ�b���邱�Ƃ�A�𓚂������Ă��炤���Ƃ͋֎~�ł��B

��������80�����o�߂������_�ŁAgit�ɂĒ�o���n�߂Ă��������B
����܂ł͖����������A�ʂ̍�Ƃ����Ă����܂��܂��񂪁A
��������80�������ł̒�o�͂ł��܂���B
*/
#pragma region ��P��

//��P��(���2�_)
//�ȉ��̌v�Z��2�i���œ�����B
//00101100 + 01010101 = 10000001
//10110000 + 00001111 = 10111111

#pragma endregion

#pragma region ��Q��

//��Q��(���2�_)
//��P��̓�����10�i���œ�����
//10000001 = 129
//10111111 = 191

#pragma endregion

#pragma region ��R��

//��R��(���2�_)
//char�Aint�Afloat�Adouble�̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
//char  :1�o�C�g
//int   :4�o�C�g
//float :4�o�C�g
//double:8�o�C�g

#pragma endregion

#pragma region ��S��

//��S��(���2�_)
//char* �Aint * �Afloat * �Adouble * �̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
//char*  :4�o�C�g
//int*   :4�o�C�g
//float* :4�o�C�g
//double*:4�o�C�g

#pragma endregion

#pragma region ��T��

//��T��(20�_)
//�ȉ��̃v���O���������s�����ꍇ�A
//�@�`�B�̂ǂ̕��������s����邩������B
//int main()
//{
//    int num = 5;
//
//    num = num % 3;
//
//    if (num == 0)
//    {
//        �@
//    }
//    else if (num == 2)
//    {
//        �A
//    }
//    else
//    {
//        �B
//    }
//}
//---------------------------------
//A.�B

#pragma endregion

#pragma region ��U��

//��U��(25�_)
//���l��2���͂��A
//1�Ԗڂɓ��͂��ꂽ�l����Ȃ瑫���Z�A
//1�Ԗڂɓ��͂��ꂽ�l�������Ȃ�����Z���s���v���O�������쐬����B
//
//����)
//1 // 1�Ԗڂɓ��͂��ꂽ�l
//5 // 2�Ԗڂɓ��͂��ꂽ�l
//6 // 1�Ԗڂ���Ȃ̂ő����Z
//
//4 // 1�Ԗڂɓ��͂��ꂽ�l
//3 // 2�Ԗڂɓ��͂��ꂽ�l
//1 // 1�Ԗڂ������Ȃ̂ň����Z

//int main()
//{
//
//	int First;   //1�Ԗ�
//	int Second;  //2�Ԗ�
//
//	printf("1�Ԗڂ̐�����ł�����ł��������B\n");
//	scanf_s("%d", &First);
//	printf("2�Ԗڂ̐�����ł�����ł��������B\n");
//	scanf_s("%d", &Second);
//	
//	if (First % 2 == 0) //��Ȃ�
//	{
//		printf("�\n");
//		printf("%d-%d=%d\n", First, Second, First - Second);
//	}
//
//	else if(First % 2 == 1)//�����Ȃ�
//	{
//		printf("����\n");
//		printf("%d+%d=%d\n", First, Second, First + Second);
//	}
//	else //���̑�
//	{
//		printf("�ςȂ��̂��܂��ꂽ�悤���B\n");
//	}
//	return 0;
//}

#pragma endregion

#pragma region ��V��
//��V��(25�_)
//��U��̃v���O���������[�v�ōs���悤�ɂ��A
//end�Ɠ��͂��ꂽ�ꍇ�I������悤�ɂ��Ă��������B
//end�̓��͂�1�Ԗڂ̒l�̏ꏊ�ł��A2�Ԗڂ̒l�̏ꏊ�ł��A
//�ʓrend�̓��͂��󂯕t����悤�ł��ǂ�ł������ł��B
//�ǂ����ꂩ����end�Ɠ��͂��ďI�����Ă���ΐ����Ƃ��܂��B

//int main()
//{
//	int First;   //1�Ԗ�
//	int Second;  //2�Ԗ�
//	char calculation[10];//�v�Z
//	bool end=false;
//
//
//	while (true)
//	{
//		printf("�����Z�@�P�A�����Z�@�Q�@�A�I���@end �Ƒł��Ă��������B\n");
//		scanf_s("%s", &calculation,10);
//		printf("1�Ԗڂ̐�����ł�����ł��������B\n");
//		scanf_s("%d", &First);
//		printf("2�Ԗڂ̐�����ł�����ł��������B\n");
//		scanf_s("%d", &Second);
//
//
//		switch (calculation[10])
//		{
//		case 'end':
//			end = false;
//			break;
//		case '1':
//			printf("�\n");
//			printf("%d-%d=%d\n", First, Second, First - Second);
//			break;
//		case '2':
//			printf("����\n");
//			printf("%d+%d=%d\n", First, Second, First + Second);
//			break;
//		default:
//			printf("�ςȂ��̂��܂��ꂽ�悤���B\n");
//			break;
//		}
//
//		if (end)
//		{
//			break;
//		}
//
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region ��W��

//��W��(10�_)
//�ȉ��̃v���O�������G���[���������A�R���p�C���G���[���Ȃ���Ԃɂ��A
//���s�ł���悤�ɂ��Ă��������B
//�𓚂��G���[�����R�����g�A�E�g���Ď��s�ł���悤�ɂ���̂�NG�ł��B
//(�r���m�F�̂��߂ɃR�����g�A�E�g�����镪��OK�ł��B)
//�ԈႦ�Ă������4�����ł��B
//
//class Point
//{
//public:
//    Point() { Clear(); }
//
//    Clear()
//    {
//        x = 0;
//        y = 0;
//        z = 0;
//    }
//public://private
//    int x, y, z;
//}
//
//{//int main()
//    Point point;
//    Point nextPoint;
//
//    nextPoint.x = 100;
//    nextPoint.y = 30;
//
//    while (1)
//    {
//        if (point.X < nextPoint.x)
//        {
//            point.x++;
//        }
//        else if (point.x > nextPoint.x)
//        {
//            point.x--;
//        }
//
//        if (point.y < nextPoint.y)
//        {
//            point.y++;
//        }
//        else if (point.y > nextPointy)
//        {
//            point.y--;
//        }
//        printf("pointX = %d\n", point.x);
//        printf("pointY = %d\n", point.y);
//
//        if (point.x == nextPoint.x &&
//            point.y == nextPoint.y)
//        {
//            break;
//        }
//    }
     ////return 0;���Ȃ�
//}

#pragma endregion