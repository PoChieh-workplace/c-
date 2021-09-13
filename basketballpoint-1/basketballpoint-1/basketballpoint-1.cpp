// basketballpoint-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目：給定兩場籃球雙方每一節比分(每場籃球賽各四節)
//球主場最終輸贏
#include <iostream>
using namespace std;
int main()
{
    start:
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int wina = 0;
        for (int i = 0; i < 2; i++)
        {
            int a = 0, b = 0;
            for (int j = 0; j < 4; j++)
            {
                int ap, bp;
                cin >> ap >> bp;
                a += ap;
                b += bp;
            }
            wina += a > b ? 1 : 0;
        }
        switch (wina)
        {
            case 1:
                cout << "Draw" << endl;
                break;
            case 0:
                cout << "Lose" << endl;
                break;
            case 2:
                cout << "Win" << endl;
                break;
        default:
            cout << "Error" << endl;
            break;
        }
        cout << "retry?(y/n)";
        char retry;
        cin >> retry;
        switch (retry)
        {
        case 'y':
            goto start;
        default:
            break;
        }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
