#include <stdio.h>
/*※試験時間は90分です。
試験中にわからないこと(関数名やinclude名など)があれば、
ネットや本で調べてもらって構いません。
問題の意図が理解できない場合は先生に質問してもらって構いません。
他の生徒と会話することや、解答を見せてもらうことは禁止です。

試験時間80分を経過した時点で、gitにて提出を始めてください。
それまでは問題を解くか、別の作業をしてもかまいませんが、
試験時間80分未満での提出はできません。
*/
#pragma region 第１問

//第１問(一問2点)
//以下の計算に2進数で答えよ。
//00101100 + 01010101 = 10000001
//10110000 + 00001111 = 10111111

#pragma endregion

#pragma region 第２問

//第２問(一問2点)
//第１問の答えを10進数で答えよ
//10000001 = 129
//10111111 = 191

#pragma endregion

#pragma region 第３問

//第３問(一問2点)
//char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
//char  :1バイト
//int   :4バイト
//float :4バイト
//double:8バイト

#pragma endregion

#pragma region 第４問

//第４問(一問2点)
//char* 、int * 、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
//char*  :4バイト
//int*   :4バイト
//float* :4バイト
//double*:4バイト

#pragma endregion

#pragma region 第５問

//第５問(20点)
//以下のプログラムを実行した場合、
//①～③のどの部分が実行されるか答えよ。
//int main()
//{
//    int num = 5;
//
//    num = num % 3;
//
//    if (num == 0)
//    {
//        ①
//    }
//    else if (num == 2)
//    {
//        ②
//    }
//    else
//    {
//        ③
//    }
//}
//---------------------------------
//A.③

#pragma endregion

#pragma region 第６問

//第６問(25点)
//数値を2つ入力し、
//1番目に入力された値が奇数なら足し算、
//1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。
//
//結果)
//1 // 1番目に入力された値
//5 // 2番目に入力された値
//6 // 1番目が奇数なので足し算
//
//4 // 1番目に入力された値
//3 // 2番目に入力された値
//1 // 1番目が偶数なので引き算

//int main()
//{
//
//	int First;   //1番目
//	int Second;  //2番目
//
//	printf("1番目の数字を打ち込んでください。\n");
//	scanf_s("%d", &First);
//	printf("2番目の数字を打ち込んでください。\n");
//	scanf_s("%d", &Second);
//	
//	if (First % 2 == 0) //奇数なら
//	{
//		printf("奇数\n");
//		printf("%d-%d=%d\n", First, Second, First - Second);
//	}
//
//	else if(First % 2 == 1)//偶数なら
//	{
//		printf("偶数\n");
//		printf("%d+%d=%d\n", First, Second, First + Second);
//	}
//	else //その他
//	{
//		printf("変なものがまぎれたようだ。\n");
//	}
//	return 0;
//}

#pragma endregion

#pragma region 第７問
//第７問(25点)
//第６問のプログラムをループで行うようにし、
//endと入力された場合終了するようにしてください。
//endの入力は1番目の値の場所でも、2番目の値の場所でも、
//別途endの入力を受け付けるようでもどれでもいいです。
//どこか一か所でendと入力して終了していれば正解とします。

//int main()
//{
//	int First;   //1番目
//	int Second;  //2番目
//	char calculation[10];//計算
//	bool end=false;
//
//
//	while (true)
//	{
//		printf("足し算　１、引き算　２　、終わる　end と打ってください。\n");
//		scanf_s("%s", &calculation,10);
//		printf("1番目の数字を打ち込んでください。\n");
//		scanf_s("%d", &First);
//		printf("2番目の数字を打ち込んでください。\n");
//		scanf_s("%d", &Second);
//
//
//		switch (calculation[10])
//		{
//		case 'end':
//			end = false;
//			break;
//		case '1':
//			printf("奇数\n");
//			printf("%d-%d=%d\n", First, Second, First - Second);
//			break;
//		case '2':
//			printf("偶数\n");
//			printf("%d+%d=%d\n", First, Second, First + Second);
//			break;
//		default:
//			printf("変なものがまぎれたようだ。\n");
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

#pragma region 第８問

//第８問(10点)
//以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
//実行できるようにしてください。
//解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
//(途中確認のためにコメントアウトをする分はOKです。)
//間違えている個所は4か所です。
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
     ////return 0;がない
//}

#pragma endregion