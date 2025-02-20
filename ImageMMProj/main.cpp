
#include <iostream>
#include <fstream>
#include <cstdint>
#include <cstring>
#include <windows.h>

using namespace std;

int main()
{

  ifstream filePath("owl.jpg", ios::binary);  //Enter image extension between " "
  unsigned char magicNo[4]={0};
  filePath.read((char*)magicNo, sizeof(magicNo));

  if(magicNo[0]==0xff && magicNo[1]==0xd8 && magicNo[2]==0xff && magicNo[3]==0xe0){
    cout<<"Image type is JPEG";
  }

  else
  if(magicNo[0]== 0x49 && magicNo[1]==0x49 && magicNo[2]==0x2A && magicNo[3]==0x00){
    cout<<"Image type is TIFF";
  }

   else
  if(magicNo[0]== 0x49 && magicNo[1]==0x49 && magicNo[2]==0x2A && magicNo[3]==0x00){
    cout<<"Image type is RAW";
  }

  else
   if(magicNo[0]== 0x89 && magicNo[1]==0x50 && magicNo[2]==0x4E && magicNo[3]==0x47){
    cout<<"Image type is PNG";
  }

  else
  if(magicNo[0]== 0x47 && magicNo[1]==0x49 && magicNo[2]==0x46 && magicNo[3]==0x38){
    cout<<"Image type is GIF";
  }

  else
  if(magicNo[0]== 'B' && magicNo[1]=='M'){
    cout<<"Image type is bmp";
  }

  else{
    cout<<"Unknown image type";
  }

    return 0;
}



