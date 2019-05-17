//
//  main.cpp
//  HW17
//
//  Created by Mac on 2019/5/17.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    int max = 0;
    cout<<"輸入五個數字"<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<"請輸入第"<<i<<"個數"<<endl;
        cin>>a[i];
    }
    for(i=1;i<=5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"最大值為"<<max<<endl;
    return 0;
}
