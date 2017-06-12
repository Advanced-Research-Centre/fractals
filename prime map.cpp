    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    int prime(int);
    main()
{
      initwindow(700,700,"IMAGE 1",0,0);
      float cx,cy,z1x=0,z1y=0,zdum,z;
      int k;
      for(int i=1;i<700;i++)
      {
      for(int j=1;j<700;j++)
      {
           if(prime(i)==1 && prime(j)==1)putpixel(i,j,COLOR(180,i/10,j/10));
           
      }
      }
 writeimagefile("Mandelbrot.jpeg",0,0,700,700);
     getch();
      
}
int prime(int i)
 {
              int k=0;
              for(int j=1;j<=i;j++) if(i%j==0)k++;
              if(k==2) return 1;
              else return 0;
              }
