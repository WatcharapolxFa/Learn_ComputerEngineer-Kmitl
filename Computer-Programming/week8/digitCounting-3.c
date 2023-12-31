#include <stdio.h>
int main(){
    int a, b, i, j, k, count[10] = {0};
    printf(" *** Digit counting ***\nEnter two counting numbers : ");
    scanf("%d %d", &a, &b);
    if(a < 0 || b < 0){
        printf("Invalid input !!!\n");
    }
    else{
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        for(i = a; i <= b; i++){
            j = i;
            while(j > 0){
                k = j % 10;
                count[k]++;
                j /= 10;
            }
        }
        for(i = 0; i < 10; i++){
            printf("%d --> %d\n", i, count[i]);
        }
    }
    return 0;
}


// โปรแกรมนี้มีวัตถุประสงค์ในการนับจำนวนของแต่ละหลักของตัวเลขในช่วงตั้งแต่ a ถึง b (รวม a และ b) และแสดงผลลัพธ์จำนวนของแต่ละหลักที่พบในช่วงนั้น โดยการทำงานของโปรแกรมมีดังนี้:

// โปรแกรมจะประกาศตัวแปร a, b, i, j, k และ count โดย count เป็นอาร์เรย์ขนาด 10 ใช้ในการเก็บจำนวนของแต่ละหลัก (0-9).

// โปรแกรมจะแสดงข้อความ " *** Digit counting ***\nEnter two counting numbers : " เพื่อขอให้ผู้ใช้ป้อนค่า a และ b โดยใช้ scanf เพื่อรับค่า.

// โปรแกรมจะทำการตรวจสอบว่า a และ b มีค่าน้อยกว่า 0 หรือไม่ ถ้าใช่จะแสดงข้อความ "Invalid input !!!" และโปรแกรมจะสิ้นสุดการทำงาน.

// หาก a มากกว่า b, โปรแกรมจะสลับค่า a และ b โดยใช้ตัวแปรชั่วคราว temp.

// โปรแกรมจะใช้ลูป for ในการวนลูปตั้งแต่ a ถึง b เพื่อนับแต่ละหลักในตัวเลขในช่วงนี้.

// ในแต่ละรอบของลูป for, โปรแกรมจะนำตัวเลข i และทำการนับจำนวนของแต่ละหลักใน j โดยใช้ k เป็นตัวแปรชั่วคราว.

// หลักแต่ละหลักที่พบจะถูกนับในอาร์เรย์ count โดยเพิ่ม 1 ในตำแหน่งที่เป็นหลักของตัวเลข.

// หลังจากที่ทำการนับหลักของทุกตัวเลขในช่วง a ถึง b, โปรแกรมจะแสดงผลลัพธ์ด้วยลูป for โดยแสดงจำนวนของแต่ละหลักที่พบในรูปแบบ "หลัก --> จำนวน" และแสดงผลลัพธ์ทั้งหมด.

// โปรแกรมจะสิ้นสุดการทำงาน.

// ดังนั้น, โปรแกรมนี้ทำงานโดยรับค่า a และ b, นับจำนวนของแต่ละหลักในตัวเลขในช่วง a ถึง b, และแสดงผลลัพธ์ในภาษา C.





